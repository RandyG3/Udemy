# import feature.copyright
# print(feature.copyright.date_of_copyright)

# import feature.subfeature.calculator
# import feature.copyright
#
# print(feature.subfeature.calculator.subtract(10, 5))
# print(feature.copyright.date_of_copyright)

# from feature import subfeature

# from feature.subfeature import calculator as calc
# print(calc.subtract(10, 3))

# from feature.subfeature.calculator import subtract as sub
# print(sub(10, 3))

import feature.subfeature
print(feature.subfeature.subtract(10, -1))