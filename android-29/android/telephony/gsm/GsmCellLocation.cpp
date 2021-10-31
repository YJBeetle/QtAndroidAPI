#include "../../os/Bundle.hpp"
#include "./GsmCellLocation.hpp"

namespace android::telephony::gsm
{
	// Fields
	
	GsmCellLocation::GsmCellLocation(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GsmCellLocation::GsmCellLocation()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.gsm.GsmCellLocation",
			"()V"
		);
	}
	GsmCellLocation::GsmCellLocation(android::os::Bundle arg0)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.gsm.GsmCellLocation",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean GsmCellLocation::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void GsmCellLocation::fillInNotifierBundle(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"fillInNotifierBundle",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	jint GsmCellLocation::getCid()
	{
		return __thiz.callMethod<jint>(
			"getCid",
			"()I"
		);
	}
	jint GsmCellLocation::getLac()
	{
		return __thiz.callMethod<jint>(
			"getLac",
			"()I"
		);
	}
	jint GsmCellLocation::getPsc()
	{
		return __thiz.callMethod<jint>(
			"getPsc",
			"()I"
		);
	}
	jint GsmCellLocation::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void GsmCellLocation::setLacAndCid(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setLacAndCid",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GsmCellLocation::setStateInvalid()
	{
		__thiz.callMethod<void>(
			"setStateInvalid",
			"()V"
		);
	}
	jstring GsmCellLocation::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::telephony::gsm

