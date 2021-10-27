#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::location
{
	class GnssMeasurementsEvent;
}

namespace android::location
{
	class GnssMeasurementsEvent_Callback : public __JniBaseClass
	{
	public:
		// Fields
		static jint STATUS_LOCATION_DISABLED();
		static jint STATUS_NOT_ALLOWED();
		static jint STATUS_NOT_SUPPORTED();
		static jint STATUS_READY();
		
		GnssMeasurementsEvent_Callback(QAndroidJniObject obj);
		// Constructors
		GnssMeasurementsEvent_Callback();
		
		// Methods
		void onGnssMeasurementsReceived(android::location::GnssMeasurementsEvent arg0);
		void onStatusChanged(jint arg0);
	};
} // namespace android::location

