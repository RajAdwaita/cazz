  s1 = "1100011000"
    s2 = "0101001010"
    x = 2

    min_cost = minimum_cost_to_make_strings_equal(s1, s2, x)
    if min_cost == -1:
        print("It is impossible to make the two strings equal.")
    else:
        print("The minimum cost to make the two strings equal is:", min_cost)
