def stats_by_team(top_scorers, team_name):
    max_goals = 0
    players = ((),)
    for pair in top_scorers:
        if (team_name == pair[1]):
            max_goals += pair[3]
            players = players + ((pair[0], pair[3]),)
    return ((team_name, max_goals),) + players[1:]