#pragma once

#include "../CellLocation.hpp"

namespace android::os
{
	class Bundle;
}
class JObject;
class JString;

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
		jboolean equals(JObject arg0) const;
		void fillInNotifierBundle(android::os::Bundle arg0) const;
		jint getBaseStationId() const;
		jint getBaseStationLatitude() const;
		jint getBaseStationLongitude() const;
		jint getNetworkId() const;
		jint getSystemId() const;
		jint hashCode() const;
		void setCellLocationData(jint arg0, jint arg1, jint arg2) const;
		void setCellLocationData(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const;
		void setStateInvalid() const;
		JString toString() const;
	};
} // namespace android::telephony::cdma

