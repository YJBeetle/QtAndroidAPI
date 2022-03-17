#pragma once

#include "../../JIntArray.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ServiceState.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject ServiceState::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.ServiceState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ServiceState::DUPLEX_MODE_FDD()
	{
		return getStaticField<jint>(
			"android.telephony.ServiceState",
			"DUPLEX_MODE_FDD"
		);
	}
	inline jint ServiceState::DUPLEX_MODE_TDD()
	{
		return getStaticField<jint>(
			"android.telephony.ServiceState",
			"DUPLEX_MODE_TDD"
		);
	}
	inline jint ServiceState::DUPLEX_MODE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.ServiceState",
			"DUPLEX_MODE_UNKNOWN"
		);
	}
	inline jint ServiceState::STATE_EMERGENCY_ONLY()
	{
		return getStaticField<jint>(
			"android.telephony.ServiceState",
			"STATE_EMERGENCY_ONLY"
		);
	}
	inline jint ServiceState::STATE_IN_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.ServiceState",
			"STATE_IN_SERVICE"
		);
	}
	inline jint ServiceState::STATE_OUT_OF_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.ServiceState",
			"STATE_OUT_OF_SERVICE"
		);
	}
	inline jint ServiceState::STATE_POWER_OFF()
	{
		return getStaticField<jint>(
			"android.telephony.ServiceState",
			"STATE_POWER_OFF"
		);
	}
	inline jint ServiceState::UNKNOWN_ID()
	{
		return getStaticField<jint>(
			"android.telephony.ServiceState",
			"UNKNOWN_ID"
		);
	}
	
	// Constructors
	inline ServiceState::ServiceState()
		: JObject(
			"android.telephony.ServiceState",
			"()V"
		) {}
	inline ServiceState::ServiceState(android::os::Parcel arg0)
		: JObject(
			"android.telephony.ServiceState",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline ServiceState::ServiceState(android::telephony::ServiceState &arg0)
		: JObject(
			"android.telephony.ServiceState",
			"(Landroid/telephony/ServiceState;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint ServiceState::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ServiceState::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ServiceState::getCdmaNetworkId() const
	{
		return callMethod<jint>(
			"getCdmaNetworkId",
			"()I"
		);
	}
	inline jint ServiceState::getCdmaSystemId() const
	{
		return callMethod<jint>(
			"getCdmaSystemId",
			"()I"
		);
	}
	inline JIntArray ServiceState::getCellBandwidths() const
	{
		return callObjectMethod(
			"getCellBandwidths",
			"()[I"
		);
	}
	inline jint ServiceState::getChannelNumber() const
	{
		return callMethod<jint>(
			"getChannelNumber",
			"()I"
		);
	}
	inline jint ServiceState::getDuplexMode() const
	{
		return callMethod<jint>(
			"getDuplexMode",
			"()I"
		);
	}
	inline jboolean ServiceState::getIsManualSelection() const
	{
		return callMethod<jboolean>(
			"getIsManualSelection",
			"()Z"
		);
	}
	inline JString ServiceState::getOperatorAlphaLong() const
	{
		return callObjectMethod(
			"getOperatorAlphaLong",
			"()Ljava/lang/String;"
		);
	}
	inline JString ServiceState::getOperatorAlphaShort() const
	{
		return callObjectMethod(
			"getOperatorAlphaShort",
			"()Ljava/lang/String;"
		);
	}
	inline JString ServiceState::getOperatorNumeric() const
	{
		return callObjectMethod(
			"getOperatorNumeric",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean ServiceState::getRoaming() const
	{
		return callMethod<jboolean>(
			"getRoaming",
			"()Z"
		);
	}
	inline jint ServiceState::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	inline jint ServiceState::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void ServiceState::setIsManualSelection(jboolean arg0) const
	{
		callMethod<void>(
			"setIsManualSelection",
			"(Z)V",
			arg0
		);
	}
	inline void ServiceState::setOperatorName(JString arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"setOperatorName",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline void ServiceState::setRoaming(jboolean arg0) const
	{
		callMethod<void>(
			"setRoaming",
			"(Z)V",
			arg0
		);
	}
	inline void ServiceState::setState(jint arg0) const
	{
		callMethod<void>(
			"setState",
			"(I)V",
			arg0
		);
	}
	inline void ServiceState::setStateOff() const
	{
		callMethod<void>(
			"setStateOff",
			"()V"
		);
	}
	inline void ServiceState::setStateOutOfService() const
	{
		callMethod<void>(
			"setStateOutOfService",
			"()V"
		);
	}
	inline JString ServiceState::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ServiceState::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
