#include "../../JIntArray.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ServiceState.hpp"

namespace android::telephony
{
	// Fields
	JObject ServiceState::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.ServiceState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ServiceState::DUPLEX_MODE_FDD()
	{
		return getStaticField<jint>(
			"android.telephony.ServiceState",
			"DUPLEX_MODE_FDD"
		);
	}
	jint ServiceState::DUPLEX_MODE_TDD()
	{
		return getStaticField<jint>(
			"android.telephony.ServiceState",
			"DUPLEX_MODE_TDD"
		);
	}
	jint ServiceState::DUPLEX_MODE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.ServiceState",
			"DUPLEX_MODE_UNKNOWN"
		);
	}
	jint ServiceState::STATE_EMERGENCY_ONLY()
	{
		return getStaticField<jint>(
			"android.telephony.ServiceState",
			"STATE_EMERGENCY_ONLY"
		);
	}
	jint ServiceState::STATE_IN_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.ServiceState",
			"STATE_IN_SERVICE"
		);
	}
	jint ServiceState::STATE_OUT_OF_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.ServiceState",
			"STATE_OUT_OF_SERVICE"
		);
	}
	jint ServiceState::STATE_POWER_OFF()
	{
		return getStaticField<jint>(
			"android.telephony.ServiceState",
			"STATE_POWER_OFF"
		);
	}
	jint ServiceState::UNKNOWN_ID()
	{
		return getStaticField<jint>(
			"android.telephony.ServiceState",
			"UNKNOWN_ID"
		);
	}
	
	// QJniObject forward
	ServiceState::ServiceState(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ServiceState::ServiceState()
		: JObject(
			"android.telephony.ServiceState",
			"()V"
		) {}
	ServiceState::ServiceState(android::os::Parcel arg0)
		: JObject(
			"android.telephony.ServiceState",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	ServiceState::ServiceState(android::telephony::ServiceState &arg0)
		: JObject(
			"android.telephony.ServiceState",
			"(Landroid/telephony/ServiceState;)V",
			arg0.object()
		) {}
	
	// Methods
	jint ServiceState::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ServiceState::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint ServiceState::getCdmaNetworkId()
	{
		return callMethod<jint>(
			"getCdmaNetworkId",
			"()I"
		);
	}
	jint ServiceState::getCdmaSystemId()
	{
		return callMethod<jint>(
			"getCdmaSystemId",
			"()I"
		);
	}
	JIntArray ServiceState::getCellBandwidths()
	{
		return callObjectMethod(
			"getCellBandwidths",
			"()[I"
		);
	}
	jint ServiceState::getChannelNumber()
	{
		return callMethod<jint>(
			"getChannelNumber",
			"()I"
		);
	}
	jint ServiceState::getDuplexMode()
	{
		return callMethod<jint>(
			"getDuplexMode",
			"()I"
		);
	}
	jboolean ServiceState::getIsManualSelection()
	{
		return callMethod<jboolean>(
			"getIsManualSelection",
			"()Z"
		);
	}
	JObject ServiceState::getNetworkRegistrationInfoList()
	{
		return callObjectMethod(
			"getNetworkRegistrationInfoList",
			"()Ljava/util/List;"
		);
	}
	JString ServiceState::getOperatorAlphaLong()
	{
		return callObjectMethod(
			"getOperatorAlphaLong",
			"()Ljava/lang/String;"
		);
	}
	JString ServiceState::getOperatorAlphaShort()
	{
		return callObjectMethod(
			"getOperatorAlphaShort",
			"()Ljava/lang/String;"
		);
	}
	JString ServiceState::getOperatorNumeric()
	{
		return callObjectMethod(
			"getOperatorNumeric",
			"()Ljava/lang/String;"
		);
	}
	jboolean ServiceState::getRoaming()
	{
		return callMethod<jboolean>(
			"getRoaming",
			"()Z"
		);
	}
	jint ServiceState::getState()
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jint ServiceState::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ServiceState::isSearching()
	{
		return callMethod<jboolean>(
			"isSearching",
			"()Z"
		);
	}
	void ServiceState::setIsManualSelection(jboolean arg0)
	{
		callMethod<void>(
			"setIsManualSelection",
			"(Z)V",
			arg0
		);
	}
	void ServiceState::setOperatorName(JString arg0, JString arg1, JString arg2)
	{
		callMethod<void>(
			"setOperatorName",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	void ServiceState::setRoaming(jboolean arg0)
	{
		callMethod<void>(
			"setRoaming",
			"(Z)V",
			arg0
		);
	}
	void ServiceState::setState(jint arg0)
	{
		callMethod<void>(
			"setState",
			"(I)V",
			arg0
		);
	}
	void ServiceState::setStateOff()
	{
		callMethod<void>(
			"setStateOff",
			"()V"
		);
	}
	void ServiceState::setStateOutOfService()
	{
		callMethod<void>(
			"setStateOutOfService",
			"()V"
		);
	}
	JString ServiceState::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ServiceState::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

