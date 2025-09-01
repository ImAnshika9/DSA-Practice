class Solution {
public:
     #define p pair<double,int>
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        int n=classes.size();
        priority_queue<p> pq;
        for(int i=0;i<n;i++)
        {
            double currPR=(double)(classes[i][0])/(classes[i][1]);
            double updatePR=(double)(classes[i][0]+1)/(classes[i][1]+1);
            double delta=updatePR-currPR;
            pq.push({delta,i});
        }

        while(extraStudents --)
        {
            auto curr=pq.top();
            pq.pop();
            double delta=curr.first;
            double idx=curr.second;

            classes[idx][0]++;
            classes[idx][1]++;

            double currPR=(double)(classes[idx][0])/(classes[idx][1]);
            double updatePR=(double)(classes[idx][0]+1)/(classes[idx][1]+1);
            delta=updatePR-currPR;
            pq.push({delta,idx});
        }
        double res=0.0;
        for(int i=0;i<n;i++)
        {
            res +=(double)classes[i][0]/classes[i][1];
        }
        return res/n;
    }
};
