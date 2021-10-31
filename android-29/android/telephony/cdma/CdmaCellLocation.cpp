#include "../../os/Bundle.hpp"
#include "./CdmaCellLocation.hpp"

namespace android::telephony::cdma
{
	// Fields
	
	CdmaCellLocation::CdmaCellLocation(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CdmaCellLocation::CdmaCellLocation()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.cdma.CdmaCellLocation",
			"()V"
		);
	}
	CdmaCellLocation::CdmaCellLocation(android::os::Bundle arg0)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.cdma.CdmaCellLocation",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jdouble CdmaCellLocation::convertQuartSecToDecDegrees(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"android.telephony.cdma.CdmaCellLocation",
			"convertQuartSecToDecDegrees",
			"(I)D",
			arg0
		);
	}
	jboolean CdmaCellLocation::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void CdmaCellLocation::fillInNotifierBundle(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"fillInNotifierBundle",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	jint CdmaCellLocation::getBaseStationId()
	{
		return __thiz.callMethod<jint>(
			"getBaseStationId",
			"()I"
		);
	}
	jint CdmaCellLocation::getBaseStationLatitude()
	{
		return __thiz.callMethod<jint>(
			"getBaseStationLatitude",
			"()I"
		);
	}
	jint CdmaCellLocation::getBaseStationLongitude()
	{
		return __thiz.callMethod<jint>(
			"getBaseStationLongitude",
			"()I"
		);
	}
	jint CdmaCellLocation::getNetworkId()
	{
		return __thiz.callMethod<jint>(
			"getNetworkId",
			"()I"
		);
	}
	jint CdmaCellLocation::getSystemId()
	{
		return __thiz.callMethod<jint>(
			"getSystemId",
			"()I"
		);
	}
	jint CdmaCellLocation::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void CdmaCellLocation::setCellLocationData(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setCellLocationData",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void CdmaCellLocation::setCellLocationData(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz.callMethod<void>(
			"setCellLocationData",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void CdmaCellLocation::setStateInvalid()
	{
		__thiz.callMethod<void>(
			"setStateInvalid",
			"()V"
		);
	}
	jstring CdmaCellLocation::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::telephony::cdma

