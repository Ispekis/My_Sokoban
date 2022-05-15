<h1>My_sokoban<h1>

# History

<p> Sokoban (warehouse keeper in Japanese) is a type of transport puzzle, in which
the player pushes boxes or crates around in a warehouse, trying to get them to
storage locations. The puzzle is usually implemented as a video game.
Sokoban was created in 1981 by Hiroyuki Imabayashi, and published in 1982 by
Thinking Rabbit, a software house based in Takarazuka, Japan.<br>
The game is played on a board of squares, where each square is a floor or
a wall. Some floor squares contain boxes, and some floor squares are marked as
storage locations. The player is confined to the board, and may move
horizontally or vertically onto empty squares (never through walls or boxes).
The player can also move into a box, which pushes it into the square beyond.
Boxes may not be pushed into other boxes or walls, and they cannot be pulled.
The puzzle is solved when all boxes are at storage locations.<p><br>
<p>Source : Wikipedia<p>

# Explanation

<p>Develop a copy of this game in terminal mode, using the ncurses library.<br><br>
If all boxes are on storage locations, the player wins and the program must return 0.
1Otherwise, if none of the boxes can be moved anymore, he loses and the program must return 1.<br><br>
The game must be reset by pressing the space bar.<br><br>
Redimensioning the terminal must be handled. As long as the terminal is too small to display the whole
map, a centered message, asking the user to enlarge the terminal, must be displayed.<br>
The game must be able to be played with the arrow keys (LEFT, RIGHT, UP and DOWN).<br>
A valid map can only contains the characters SPACE, ‘\n’, ‘#’, ‘X’, ‘O’ and ‘P’.<br>
If an invalid map is supplied, the program must exit with an error.<p>

# Usage

    USAGE
        ./my_sokoban map
    DESCRIPTION
        map file representing the warehouse map, containing ‘#’ for walls,
        ‘P’ for the player, ‘X’ for boxes and ‘O’ for storage locations.

# Exemple

<p>A sokoban's map<p>

        #####
        #   #
        #X  #
      ###  X##
      #  X X #
    ### # ## #   ######
    #   # ## #####  OO#
    # X  X          OO#
    ##### ### #P##  OO#
        #     #########
        #######

<p>Source : Wikipedia<p>

# Information

<p>Duration : 3 weeks<br>
Contributors : Solo project<br>
School project : Epitech PARIS<p>