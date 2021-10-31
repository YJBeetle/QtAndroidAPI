#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::app::usage
{
	class NetworkStatsManager_UsageCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkStatsManager_UsageCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NetworkStatsManager_UsageCallback(QAndroidJniObject obj);
		
		// Constructors
		NetworkStatsManager_UsageCallback();
		
		// Methods
		void onThresholdReached(jint arg0, jstring arg1);
	};
} // namespace android::app::usage

