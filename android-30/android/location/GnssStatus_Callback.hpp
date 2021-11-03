#pragma once

#include "../../JObject.hpp"

namespace android::location
{
	class GnssStatus;
}

namespace android::location
{
	class GnssStatus_Callback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GnssStatus_Callback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssStatus_Callback(QAndroidJniObject obj);
		
		// Constructors
		GnssStatus_Callback();
		
		// Methods
		void onFirstFix(jint arg0) const;
		void onSatelliteStatusChanged(android::location::GnssStatus arg0) const;
		void onStarted() const;
		void onStopped() const;
	};
} // namespace android::location

