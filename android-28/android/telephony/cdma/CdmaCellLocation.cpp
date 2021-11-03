#include "../../os/Bundle.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./CdmaCellLocation.hpp"

namespace android::telephony::cdma
{
	// Fields
	
	// QAndroidJniObject forward
	CdmaCellLocation::CdmaCellLocation(QAndroidJniObject obj) : android::telephony::CellLocation(obj) {}
	
	// Constructors
	CdmaCellLocation::CdmaCellLocation()
		: android::telephony::CellLocation(
			"android.telephony.cdma.CdmaCellLocation",
			"()V"
		) {}
	CdmaCellLocation::CdmaCellLocation(android::os::Bundle arg0)
		: android::telephony::CellLocation(
			"android.telephony.cdma.CdmaCellLocation",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		) {}
	
	// Methods
	jdouble CdmaCellLocation::convertQuartSecToDecDegrees(jint arg0)
	{
		return callStaticMethod<jdouble>(
			"android.telephony.cdma.CdmaCellLocation",
			"convertQuartSecToDecDegrees",
			"(I)D",
			arg0
		);
	}
	jboolean CdmaCellLocation::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void CdmaCellLocation::fillInNotifierBundle(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"fillInNotifierBundle",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	jint CdmaCellLocation::getBaseStationId() const
	{
		return callMethod<jint>(
			"getBaseStationId",
			"()I"
		);
	}
	jint CdmaCellLocation::getBaseStationLatitude() const
	{
		return callMethod<jint>(
			"getBaseStationLatitude",
			"()I"
		);
	}
	jint CdmaCellLocation::getBaseStationLongitude() const
	{
		return callMethod<jint>(
			"getBaseStationLongitude",
			"()I"
		);
	}
	jint CdmaCellLocation::getNetworkId() const
	{
		return callMethod<jint>(
			"getNetworkId",
			"()I"
		);
	}
	jint CdmaCellLocation::getSystemId() const
	{
		return callMethod<jint>(
			"getSystemId",
			"()I"
		);
	}
	jint CdmaCellLocation::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void CdmaCellLocation::setCellLocationData(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setCellLocationData",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void CdmaCellLocation::setCellLocationData(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
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
	void CdmaCellLocation::setStateInvalid() const
	{
		callMethod<void>(
			"setStateInvalid",
			"()V"
		);
	}
	JString CdmaCellLocation::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::telephony::cdma

