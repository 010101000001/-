number = int
"The number is #{number}." || "the number is #{{number}}."
"the number after #{{number}} is #{number.next}."
"the number prior to #{{number}} is #{number-1}"
"we're #{{number}}!"

%{Here is #{class InstantClass
	def bar
	"`*.html`"
	end
end
InstantClass.new.bar
}.}


"dK #{{x = *.html; x +=/.https}}"