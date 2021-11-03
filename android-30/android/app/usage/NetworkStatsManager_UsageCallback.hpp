#pragma once

#include "../../../JObject.hpp"


namespace android::app::usage
{
	class NetworkStatsManager_UsageCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NetworkStatsManager_UsageCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NetworkStatsManager_UsageCallback(QJniObject obj);
		
		// Constructors
		NetworkStatsManager_UsageCallback();
		
		// Methods
		void onThresholdReached(jint arg0, jstring arg1);
	};
} // namespace android::app::usage

