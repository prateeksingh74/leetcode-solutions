class Solution:
    def maximumUnits(self, boxTypes: List[List[int]], truckSize: int) -> int:
        boxTypes.sort(key = lambda x: x[1], reverse = True)
        max_units = 0
        space_left = truckSize
        for box in boxTypes:
            boxes_to_take = min(space_left, box[0])
            space_left -= boxes_to_take
            max_units += boxes_to_take * box[1]
        return max_units
