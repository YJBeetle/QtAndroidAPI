#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./CdmaCellLocation.def.hpp"

namespace android::telephony::cdma
{
	// Fields
	
	// Constructors
	inline CdmaCellLocation::CdmaCellLocation()
		: android::telephony::CellLocation(
			"android.telephony.cdma.CdmaCellLocation",
			"()V"
		) {}
	inline CdmaCellLocation::CdmaCellLocation(android::os::Bundle arg0)
		: android::telephony::CellLocation(
			"android.telephony.cdma.CdmaCellLocation",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jdouble CdmaCellLocation::convertQuartSecToDecDegrees(jint arg0)
	{
		return callStaticMethod<jdouble>(
			"android.telephony.cdma.CdmaCellLocation",
			"convertQuartSecToDecDegrees",
			"(I)D",
			arg0
		);
	}
	inline jboolean CdmaCellLocation::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void CdmaCellLocation::fillInNotifierBundle(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"fillInNotifierBundle",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline jint CdmaCellLocation::getBaseStationId() const
	{
		return callMethod<jint>(
			"getBaseStationId",
			"()I"
		);
	}
	inline jint CdmaCellLocation::getBaseStationLatitude() const
	{
		return callMethod<jint>(
			"getBaseStationLatitude",
			"()I"
		);
	}
	inline jint CdmaCellLocation::getBaseStationLongitude() const
	{
		return callMethod<jint>(
			"getBaseStationLongitude",
			"()I"
		);
	}
	inline jint CdmaCellLocation::getNetworkId() const
	{
		return callMethod<jint>(
			"getNetworkId",
			"()I"
		);
	}
	inline jint CdmaCellLocation::getSystemId() const
	{
		return callMethod<jint>(
			"getSystemId",
			"()I"
		);
	}
	inline jint CdmaCellLocation::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void CdmaCellLocation::setCellLocationData(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setCellLocationData",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void CdmaCellLocation::setCellLocationData(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
	{
		callMethod<void>(
			"setCellLocationData",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void CdmaCellLocation::setStateInvalid() const
	{
		callMethod<void>(
			"setStateInvalid",
			"()V"
		);
	}
	inline JString CdmaCellLocation::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::telephony::cdma

// Base class headers
#include "../CellLocation.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::cdma;
#endif
