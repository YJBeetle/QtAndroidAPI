#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SignalStrength.def.hpp"

namespace android::telephony
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint SignalStrength::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean SignalStrength::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint SignalStrength::getCdmaDbm() const
	{
		return callMethod<jint>(
			"getCdmaDbm",
			"()I"
		);
	}
	inline jint SignalStrength::getCdmaEcio() const
	{
		return callMethod<jint>(
			"getCdmaEcio",
			"()I"
		);
	}
	inline jint SignalStrength::getEvdoDbm() const
	{
		return callMethod<jint>(
			"getEvdoDbm",
			"()I"
		);
	}
	inline jint SignalStrength::getEvdoEcio() const
	{
		return callMethod<jint>(
			"getEvdoEcio",
			"()I"
		);
	}
	inline jint SignalStrength::getEvdoSnr() const
	{
		return callMethod<jint>(
			"getEvdoSnr",
			"()I"
		);
	}
	inline jint SignalStrength::getGsmBitErrorRate() const
	{
		return callMethod<jint>(
			"getGsmBitErrorRate",
			"()I"
		);
	}
	inline jint SignalStrength::getGsmSignalStrength() const
	{
		return callMethod<jint>(
			"getGsmSignalStrength",
			"()I"
		);
	}
	inline jint SignalStrength::getLevel() const
	{
		return callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	inline jint SignalStrength::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean SignalStrength::isGsm() const
	{
		return callMethod<jboolean>(
			"isGsm",
			"()Z"
		);
	}
	inline JString SignalStrength::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void SignalStrength::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

// Base class headers

