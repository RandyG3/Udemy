class Product
    @@product_counter = 0
    def self.counter
      @@product_counter
    end
    def initialize
      @@product_counter += 1 # Total products made
    end
  end

  class Widget < Product
    @@widget_counter = 0
    def self.counter
      @@widget_counter
    end
    def initialize
      super # keep track of product counter, incr by 1
      @@widget_counter += 1
    end
  end

  class Thingamajig < Product
    @@Thingamajig_counter = 0
    def self.counter
      @@Thingamajig_counter
    end
    def initialize
      super # keep track of product counter, incr by 1
      @@Thingamajig_counter += 1
    end
  end

  a = Widget.new # Widget 1
  b = Widget.new # Widget 2

  puts Widget.counter
  puts Product.counter

  c = Thingamajig.new # Thing 1
  d = Thingamajig.new # Thing 2
  e = Thingamajig.new # Thing 3

  puts Thingamajig.counter # 3
  puts Product.counter # 5
