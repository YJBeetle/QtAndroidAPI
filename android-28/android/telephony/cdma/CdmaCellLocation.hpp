#pragma once

#include "../../../JObject.hpp"
#include "../CellLocation.hpp"

namespace android::os
{
	class Bundle;
}

namespace android::telephony::cdma
{
	class CdmaCellLocation : public android::telephony::CellLocation
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CdmaCellLocation(const char *className, const char *sig, Ts...agv) : android::telephony::CellLocation(className, sig, std::forward<Ts>(agv)...) {}
		CdmaCellLocation(QAndroidJniObject obj);
		
		// Constructors
		CdmaCellLocation();
		CdmaCellLocation(android::os::Bundle arg0);
		
		// Methods
		static jdouble convertQuartSecToDecDegrees(jint arg0);
		jboolean equals(jobject arg0);
		void fillInNotifierBundle(android::os::Bundle arg0);
		jint getBaseStationId();
		jint getBaseStationLatitude();
		jint getBaseStationLongitude();
		jint getNetworkId();
		jint getSystemId();
		jint hashCode();
		void setCellLocationData(jint arg0, jint arg1, jint arg2);
		void setCellLocationData(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void setStateInvalid();
		jstring toString();
	};
} // namespace android::telephony::cdma

