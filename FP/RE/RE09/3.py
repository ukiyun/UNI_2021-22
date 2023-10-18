def money(orders):
    order,BookAuthor,quantity,price= orders
    moneying = quantity*price
    return moneying

def order_number(orders):
    order,BookAuthor,quantity,price= orders
    return order

def invoice_totals(orders, min):
    listing =list(map(money, orders))
    listing_2 = list(map(order_number, orders))
    listing = list(round(x, 2) if x>min else round(x+10, 2) for x in listing)
    return list(zip (listing_2, listing))
