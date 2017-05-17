# HotRace
### 42 - Rush Project

Hotrace is a simple algorithmic project that consists of making a program to store and search values.
The goal is to make it faster than other's people HotRaces and win the competition.
More information can be found on the [PDF].

## How to use

```
git clone https://github.com/giacomoguiulfo/42-hotrace.git
cd 42-hotrace
make
./hotrace
```

Once in the program, you can start storing data by typing a key, and a value on the next line.
After you hit twice the return key, you can now start searching values by typing their corresponding keys and then
pressing return. Here is a short example:

```
$> ./hotrace
Hello
World
Hello
Goodbye

Hello
World
Animal
Animal: Not found.
Hello
Goodbye

$>
```

# Known bugs

    - hotrace is not leak free :( 

[PDF]: https://github.com/giacomoguiulfo/42-hotrace/blob/master/hotrace.pdf
