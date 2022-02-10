hash = { typedef: "int64_t", typedef: "paddr_t"}
string = "Dirección fisica para bloque de datos, en un disco de estado solido:\n "
hash.each { |k,v| string << k.to_s << " is " << v << "\n" }
puts string
