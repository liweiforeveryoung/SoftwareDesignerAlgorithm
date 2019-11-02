#include <algorithm>
#include <vector>
using std::vector;

struct Activity
{
	int beginTime;
	int endTime;
};

//bool cmp(const Activity& lhs, const Activity& rhs)
//{
//	return lhs.endTime < rhs.endTime;
//}

bool cmp(const Activity* lhs, const Activity* rhs)
{
	return lhs->endTime < rhs->endTime;
}



void getMaxActivityNum(Activity activities[],int activitiesNum)
{
	vector<Activity*> activityVec(activitiesNum);
	for (size_t i = 0;i < activitiesNum;++i)
	{
		activityVec[i] = activities + i;
	}
	std::sort(activityVec.begin(), activityVec.end(), cmp);

	vector<Activity*> selectedActivities;
	int endTime = 0;
	for (vector<Activity*>::const_iterator it = activityVec.cbegin();it != activityVec.cend();++it)
	{
		if ((*it)->beginTime >= endTime)
		{
			selectedActivities.push_back(*it);
			endTime = (*it)->endTime;
		}
	}

	return;

}


int main()
{
	Activity activities[] = {
		{1,4},
		{3,5},
		{0,6},
		{5,7},
		{3,8},
		{5,9},
		{6,10},
		{8,11},
		{8,12},
		{2,13},
		{12,14}
	};
	int activityNum = sizeof(activities) / sizeof(Activity);
	getMaxActivityNum(activities, activityNum);
}