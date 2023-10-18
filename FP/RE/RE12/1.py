def intersect (r1, r2):
    return not (r1['x2']<r2['x1'] or r2['x2']< r1 ['x1'] or r1['y2']<r2['y1']or r2['y2']< r1['y1'])


def number_of_collisions(objects):
    counting = 0
    for i in range (0, len(objects)):
        for j in range (i+1, len(objects)):
            if intersect(objects[i], objects[j]):
                counting += 1
    return counting
