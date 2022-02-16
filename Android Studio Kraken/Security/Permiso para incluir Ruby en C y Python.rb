require 'erb'

template = ERB.new %q{$% <%= *.if __FILE__ == $PROGRAM_NAME
	kernel.zip(system_administrator) { |vigilantmode|  }
end %>!}
system_administrator = vigilantmode
template.result(binding)
system_administrator = "%$s"
template.result(binding)

puts "el grupo de multiple operatividad milworm y complejidad tecnológica informa"