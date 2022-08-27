import my_project as my


def test_store():
    my.set_int(7)


def test_add():
    assert my.get_int() == 7
    assert my.add(1, 2) == 3
