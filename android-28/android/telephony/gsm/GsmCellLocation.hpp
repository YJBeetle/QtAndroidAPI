#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./GsmCellLocation.def.hpp"

namespace android::telephony::gsm
{
	// Fields
	
	// Constructors
	inline GsmCellLocation::GsmCellLocation()
		: android::telephony::CellLocation(
			"android.telephony.gsm.GsmCellLocation",
			"()V"
		) {}
	inline GsmCellLocation::GsmCellLocation(android::os::Bundle arg0)
		: android::telephony::CellLocation(
			"android.telephony.gsm.GsmCellLocation",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean GsmCellLocation::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void GsmCellLocation::fillInNotifierBundle(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"fillInNotifierBundle",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline jint GsmCellLocation::getCid() const
	{
		return callMethod<jint>(
			"getCid",
			"()I"
		);
	}
	inline jint GsmCellLocation::getLac() const
	{
		return callMethod<jint>(
			"getLac",
			"()I"
		);
	}
	inline jint GsmCellLocation::getPsc() const
	{
		return callMethod<jint>(
			"getPsc",
			"()I"
		);
	}
	inline jint GsmCellLocation::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void GsmCellLocation::setLacAndCid(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setLacAndCid",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void GsmCellLocation::setStateInvalid() const
	{
		callMethod<void>(
			"setStateInvalid",
			"()V"
		);
	}
	inline JString GsmCellLocation::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::telephony::gsm

// Base class headers
#include "../CellLocation.hpp"

