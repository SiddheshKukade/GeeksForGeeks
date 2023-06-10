class Solution:
    
    #Function to find the maximum number of meetings that can
    #be performed in a meeting room.
    def maximumMeetings(self,n,s,e):
        # code here
        meet = [(s[i], e[i], i + 1) for i in range(n)]
        meet.sort(key = lambda x : (x[1],x[2]))
        
        res = [meet[0]]
        
        for i in range(1,n):
            if meet[i][0]>res[-1][1]:
                res.append(meet[i])
        return len(res)
