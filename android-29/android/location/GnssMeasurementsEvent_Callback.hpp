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
		
		// QJniObject forward
		template<typename ...Ts> explicit GnssMeasurementsEvent_Callback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GnssMeasurementsEvent_Callback(QJniObject obj);
		
		// Constructors
		GnssMeasurementsEvent_Callback();
		
		// Methods
		void onGnssMeasurementsReceived(android::location::GnssMeasurementsEvent arg0);
		void onStatusChanged(jint arg0);
	};
} // namespace android::location

