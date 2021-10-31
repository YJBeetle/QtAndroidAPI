#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::location
{
	class GnssStatus;
}

namespace android::location
{
	class GnssStatus_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GnssStatus_Callback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GnssStatus_Callback(QAndroidJniObject obj);
		
		// Constructors
		GnssStatus_Callback();
		
		// Methods
		void onFirstFix(jint arg0);
		void onSatelliteStatusChanged(android::location::GnssStatus arg0);
		void onStarted();
		void onStopped();
	};
} // namespace android::location

