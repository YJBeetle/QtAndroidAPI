#pragma once

#include "../../JObject.hpp"

namespace android::location
{
	class GnssNavigationMessage;
}

namespace android::location
{
	class GnssNavigationMessage_Callback : public JObject
	{
	public:
		// Fields
		static jint STATUS_LOCATION_DISABLED();
		static jint STATUS_NOT_SUPPORTED();
		static jint STATUS_READY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GnssNavigationMessage_Callback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssNavigationMessage_Callback(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		GnssNavigationMessage_Callback();
		
		// Methods
		void onGnssNavigationMessageReceived(android::location::GnssNavigationMessage arg0) const;
		void onStatusChanged(jint arg0) const;
	};
} // namespace android::location

