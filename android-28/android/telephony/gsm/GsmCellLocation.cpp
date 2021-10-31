#include "../../os/Bundle.hpp"
#include "./GsmCellLocation.hpp"

namespace android::telephony::gsm
{
	// Fields
	
	// QJniObject forward
	GsmCellLocation::GsmCellLocation(QJniObject obj) : android::telephony::CellLocation(obj) {}
	
	// Constructors
	GsmCellLocation::GsmCellLocation()
		: android::telephony::CellLocation(
			"android.telephony.gsm.GsmCellLocation",
			"()V"
		) {}
	GsmCellLocation::GsmCellLocation(android::os::Bundle arg0)
		: android::telephony::CellLocation(
			"android.telephony.gsm.GsmCellLocation",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean GsmCellLocation::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void GsmCellLocation::fillInNotifierBundle(android::os::Bundle arg0)
	{
		callMethod<void>(
			"fillInNotifierBundle",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	jint GsmCellLocation::getCid()
	{
		return callMethod<jint>(
			"getCid",
			"()I"
		);
	}
	jint GsmCellLocation::getLac()
	{
		return callMethod<jint>(
			"getLac",
			"()I"
		);
	}
	jint GsmCellLocation::getPsc()
	{
		return callMethod<jint>(
			"getPsc",
			"()I"
		);
	}
	jint GsmCellLocation::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void GsmCellLocation::setLacAndCid(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setLacAndCid",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GsmCellLocation::setStateInvalid()
	{
		callMethod<void>(
			"setStateInvalid",
			"()V"
		);
	}
	jstring GsmCellLocation::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::telephony::gsm

