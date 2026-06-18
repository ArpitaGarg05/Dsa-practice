class solution:
    def merge(self, intervals):
        intervals.sort(key = lambda x: x[0])

        merged = [intervals[0]]

        for start, end in intervals[1:]:
            # all the intervals except 1 because that's already added in merged
            last_end = merged[-1][1] # 1th index of last element in merged list

            if start <= last_end:
                merged[-1][1] = max(last_end, end)
            else:
                merged.append([start, end])
            
        return merged
        
print(solution().merge([[[1,3],[2,6],[8,10],[15,18]]]))