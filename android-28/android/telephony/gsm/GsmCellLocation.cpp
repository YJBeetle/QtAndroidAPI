#include "../../os/Bundle.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./GsmCellLocation.hpp"

namespace android::telephony::gsm
{
	// Fields
	
	// QAndroidJniObject forward
	GsmCellLocation::GsmCellLocation(QAndroidJniObject obj) : android::telephony::CellLocation(obj) {}
	
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
	jboolean GsmCellLocation::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void GsmCellLocation::fillInNotifierBundle(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"fillInNotifierBundle",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	jint GsmCellLocation::getCid() const
	{
		return callMethod<jint>(
			"getCid",
			"()I"
		);
	}
	jint GsmCellLocation::getLac() const
	{
		return callMethod<jint>(
			"getLac",
			"()I"
		);
	}
	jint GsmCellLocation::getPsc() const
	{
		return callMethod<jint>(
			"getPsc",
			"()I"
		);
	}
	jint GsmCellLocation::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void GsmCellLocation::setLacAndCid(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setLacAndCid",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GsmCellLocation::setStateInvalid() const
	{
		callMethod<void>(
			"setStateInvalid",
			"()V"
		);
	}
	JString GsmCellLocation::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::telephony::gsm

