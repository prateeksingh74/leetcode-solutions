class Solution:
    def intToRoman(self, num: int) -> str:
        roman = ""
        number = num
        values = [
            (1000, 'M'),
            (900, 'CM'), 
            (500, 'D'),
            (400, 'CD'),
            (100, 'C'),
            (90, 'XC'),
            (50, 'L'),
            (40, 'XL'),
            (10, 'X'),
            (9, 'IX'),
            (5, 'V'),
            (4, 'IV'),
            (1, 'I')
        ]
        for value in values:
            while number >= value[0]:
                number -= value[0]
                roman += value[1]
        return roman
