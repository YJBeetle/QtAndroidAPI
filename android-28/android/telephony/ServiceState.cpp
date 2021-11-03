#include "../os/Parcel.hpp"
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
	
	// QAndroidJniObject forward
	ServiceState::ServiceState(QAndroidJniObject obj) : JObject(obj) {}
	
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
	jboolean ServiceState::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
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
	jintArray ServiceState::getCellBandwidths()
	{
		return callObjectMethod(
			"getCellBandwidths",
			"()[I"
		).object<jintArray>();
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
	jstring ServiceState::getOperatorAlphaLong()
	{
		return callObjectMethod(
			"getOperatorAlphaLong",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ServiceState::getOperatorAlphaShort()
	{
		return callObjectMethod(
			"getOperatorAlphaShort",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ServiceState::getOperatorNumeric()
	{
		return callObjectMethod(
			"getOperatorNumeric",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	void ServiceState::setIsManualSelection(jboolean arg0)
	{
		callMethod<void>(
			"setIsManualSelection",
			"(Z)V",
			arg0
		);
	}
	void ServiceState::setOperatorName(jstring arg0, jstring arg1, jstring arg2)
	{
		callMethod<void>(
			"setOperatorName",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
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
	jstring ServiceState::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

