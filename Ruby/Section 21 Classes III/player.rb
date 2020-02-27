class Player
  def play_game
    rand(1..100) > 50 ? "Winner!" : "Loser!"
  end
end

randy = Player.new
boris = Player.new

def randy.play_game # this overrides the main play_game
    "Winner!"
end

p boris.play_game
p randy.play_game # I always win
p randy.class.ancestors # can't see the singleton method defined
p randy.singleton_methods # Now my play_game shows up
p boris.singleton_methods # Boris doesn't have any singletons defined
p randy.singleton_class

# sometimes used in testing
