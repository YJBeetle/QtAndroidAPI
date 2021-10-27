#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::app::usage
{
	class NetworkStatsManager_UsageCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		NetworkStatsManager_UsageCallback(QAndroidJniObject obj);
		// Constructors
		NetworkStatsManager_UsageCallback();
		
		// Methods
		void onThresholdReached(jint arg0, jstring arg1);
		void onThresholdReached(jint arg0, const QString &arg1);
	};
} // namespace android::app::usage

