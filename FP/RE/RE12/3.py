import cards
import random
ranks = {'2':2, '3':3, '4':4, '5':5, '6':6, '7':7, '8':8, '9':9, '10':10, 'J':10, 'Q':10, 'K':10, 'A':11}
suits = {'♠':'black', '♡':'white', '♢':'white', '♣': 'black'}
def card_value(card):
    ranker = ranks.get(card[1])
    suiting = suits.get(card[0])
    value = ranker
    if (suiting == 'black'):
        value = value * 2
    return value

def play(seed_value):
    random.seed(seed_value)
    deck = cards.create_deck(shuffle=True)
    names = "P1 P2 P3 P4".split()
    hands = {n: h for n, h in zip(names, cards.deal_hands(deck))}
    start_player = cards.choose(names)
    turn_order = cards.player_order(names, start=start_player)
    P1_score = 0
    P2_score = 0
    P3_score = 0
    P4_score = 0
    nth_round= []
    # Randomly play cards from each player's hand until empty
    while hands[start_player]:
        for name in turn_order:
            card = cards.choose(hands[name])
            hands[name].remove(card)
            nth_round +=[card_value(card)]
    for i in range (0, len(nth_round), 4):
        n_round = nth_round[i:i+4]
        maximum = max(n_round)
        if (n_round.count(maximum) == 1):
            indexe = n_round.index(maximum)
            if (indexe == 0):
                P1_score += 1
            if (indexe == 1):
                P2_score += 1
            if (indexe == 2):
                P3_score += 1
            if (indexe == 3):
                P4_score += 1
        else:
            indexes = []
            for j in range (0, len(n_round)):
                if (n_round[j]== maximum):
                    indexes += [j]
            for k in range (0, len(indexes)):
                if (indexes[k] == 0):
                    P1_score += 1
                if (indexes[k] == 1):
                    P2_score += 1
                if (indexes[k] == 2):
                    P3_score += 1
                if (indexes[k] == 3):
                    P4_score += 1
    end_scores = [P1_score, P2_score, P3_score, P4_score]
    max_score = max(end_scores)
    player = {0:turn_order[0], 1:turn_order[1], 2:turn_order[2], 3:turn_order[3]}
    if (end_scores.count(max_score)==1):
        indexi = end_scores.index(max_score)
        return (str(player.get(indexi)))
    else:
        max_index = []
        endin = ''
        for l in range (0, len(end_scores)):
            if (end_scores[l]== max_score):
                max_index += [l]
        for m in range (0, len(max_index)):
            endin += str(player.get(max_index[m])) + ' '
        return(endin[: -1])


print(play(31))
''' dá erro oculto ñ sei pq ;-;
    outra maneira
'''


import random, cards

def card_value(card):
    value = 0
    if card[1] in "2345678910":
        value = int(card[1])
    elif card[1] in "JQK":
        value = 10
    else:
        value = 11
    if card[0] == "♠" or card[0] == "♣":
        return 2*value
    return value



def play(seed_value):
    random.seed(seed_value)
    deck = cards.create_deck(shuffle = True)
    players = "P1 P2 P3 P4".split()
    hands = {pl: h for pl, h in zip(players, cards.deal_hands(deck))}
    scores = {pl: 0 for pl in players}
    start_player = cards.choose(players)
    turn_order = cards.player_order(players, start = start_player)

    while hands[start_player]:
        plscore = []
        for name in turn_order:
            card = cards.choose(hands[name])
            plscore.append((name, card_value(card)))
            hands[name].remove(card)
        maxvalue = max(plscore, key = lambda a: a[1])[1]
        winners = filter(lambda a: a[1] == maxvalue, plscore)
        for winner, score in winners:
            scores[winner] += 1

    maxvalue = max(scores.values())
    ans = ""
    for player, value in scores.items():
        if value == maxvalue:
            ans += player + " "
    return ans.strip()