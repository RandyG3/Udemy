class Candidate
    attr_accessor :name, :age, :occupation,:hobby, :birthplace
    def initialize(name, age, occupation, hobby, birthplace)
      @name = name
      @age = age
      @occupation = occupation
      @hobby = hobby
      @birthplace = birthplace
    end
end

senator = Candidate.new("Mr. Smith", 53, "Banker", "Fishing", "Kentucky")
puts "Candidate"
p senator.occupation
p senator.hobby
p senator.name
puts


# say we forget the order of the fields

senator = Candidate.new("Mr. Smith", 53, "Fishing", "Banker", "Kentucky")
puts "Candidate - wrong order"
p senator.occupation
p senator.hobby
p senator.name
puts


#
# need a hash to correct this
#
class CandidateHash
    attr_accessor :name, :age, :occupation,:hobby, :birthplace
    def initialize(name, details)
      @name = name
      @age = details[:age]
      @occupation = details[:occupation]
      @hobby = details[:hobby]
      @birthplace = details[:birthplace]
    end
end

info = {age: 63, occupation: "Ruby Programmer", hobby: "scuba",
        birthplace: "Conn."}
# If any items not specified in the hash, nil is supplied as the value
senator = CandidateHash.new("Mr. Galinat", info)
puts "Candidate Hash"
p senator.occupation
p senator.hobby
p senator.name
p senator.age
puts


#
# Hash as initialize argument II
#
# senator = CandidateHash.new("Mr. Galinat", info) if called without the
# 'info', ruby returns an error - wrong num arguments supplied
class CandidateHash2
    attr_accessor :name, :age, :occupation,:hobby, :birthplace
    def initialize(name, details = {}) # empty hash is the default
      @name = name
      @age = details[:age]
      @occupation = details[:occupation]
      @hobby = details[:hobby]
      @birthplace = details[:birthplace]
    end
end

info = {age: 53, occupation: "Remarketing Manager", hobby: "Harley's",
        birthplace: "Ohio"}
# any misspellings in the keys, will return nil
senator = CandidateHash2.new("Mr. Asbridge", info)
puts "CandidateHash2"
p senator.occupation
p senator.hobby
p senator.name
p senator.age
puts

class CandidateHash3
    attr_accessor :name, :age, :occupation,:hobby, :birthplace
    def initialize(name, details = {}) # empty hash is the default
      defaults = {age: 53, occupation: "Remarketing Manager",
                  hobby: "Riding my Harley", birthplace: "Ohio"}
      defaults.merge!(details)
      @name = name
      @age = defaults[:age]
      @occupation = defaults[:occupation]
      @hobby = defaults[:hobby]
      @birthplace = defaults[:birthplace]
  end
end

senator = CandidateHash3.new("Mr. Asbridge")
puts "CandidateHash3"
p senator.occupation
p senator.hobby
p senator.name
p senator.age
puts

senator = CandidateHash3.new("Mr. Smith", hoby:"Horror Movies",
                             occupation: "popcorn vendor")
puts "CandidateHash3"
p senator.occupation
p senator.hobby
p senator.name
p senator.age
puts

senator = CandidateHash3.new("Mr. Smith", hobby:"Horror Movies",
                             occupation: "popcorn vendor")
puts "CandidateHash3"
p senator.occupation
p senator.hobby
p senator.name
p senator.age
puts

p [1, 2, 3].is_a?(object)
