#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./EmergencyNumber.hpp"

namespace android::telephony::emergency
{
	// Fields
	JObject EmergencyNumber::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.emergency.EmergencyNumber",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint EmergencyNumber::EMERGENCY_CALL_ROUTING_EMERGENCY()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_CALL_ROUTING_EMERGENCY"
		);
	}
	jint EmergencyNumber::EMERGENCY_CALL_ROUTING_NORMAL()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_CALL_ROUTING_NORMAL"
		);
	}
	jint EmergencyNumber::EMERGENCY_CALL_ROUTING_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_CALL_ROUTING_UNKNOWN"
		);
	}
	jint EmergencyNumber::EMERGENCY_NUMBER_SOURCE_DATABASE()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_NUMBER_SOURCE_DATABASE"
		);
	}
	jint EmergencyNumber::EMERGENCY_NUMBER_SOURCE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_NUMBER_SOURCE_DEFAULT"
		);
	}
	jint EmergencyNumber::EMERGENCY_NUMBER_SOURCE_MODEM_CONFIG()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_NUMBER_SOURCE_MODEM_CONFIG"
		);
	}
	jint EmergencyNumber::EMERGENCY_NUMBER_SOURCE_NETWORK_SIGNALING()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_NUMBER_SOURCE_NETWORK_SIGNALING"
		);
	}
	jint EmergencyNumber::EMERGENCY_NUMBER_SOURCE_SIM()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_NUMBER_SOURCE_SIM"
		);
	}
	jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_AIEC()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_AIEC"
		);
	}
	jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_AMBULANCE()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_AMBULANCE"
		);
	}
	jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_FIRE_BRIGADE()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_FIRE_BRIGADE"
		);
	}
	jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_MARINE_GUARD()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_MARINE_GUARD"
		);
	}
	jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_MIEC()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_MIEC"
		);
	}
	jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_MOUNTAIN_RESCUE()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_MOUNTAIN_RESCUE"
		);
	}
	jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_POLICE()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_POLICE"
		);
	}
	jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_UNSPECIFIED"
		);
	}
	
	// QJniObject forward
	EmergencyNumber::EmergencyNumber(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint EmergencyNumber::compareTo(android::telephony::emergency::EmergencyNumber arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/telephony/emergency/EmergencyNumber;)I",
			arg0.object()
		);
	}
	jint EmergencyNumber::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint EmergencyNumber::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean EmergencyNumber::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString EmergencyNumber::getCountryIso() const
	{
		return callObjectMethod(
			"getCountryIso",
			"()Ljava/lang/String;"
		);
	}
	jint EmergencyNumber::getEmergencyCallRouting() const
	{
		return callMethod<jint>(
			"getEmergencyCallRouting",
			"()I"
		);
	}
	JObject EmergencyNumber::getEmergencyNumberSources() const
	{
		return callObjectMethod(
			"getEmergencyNumberSources",
			"()Ljava/util/List;"
		);
	}
	JObject EmergencyNumber::getEmergencyServiceCategories() const
	{
		return callObjectMethod(
			"getEmergencyServiceCategories",
			"()Ljava/util/List;"
		);
	}
	JObject EmergencyNumber::getEmergencyUrns() const
	{
		return callObjectMethod(
			"getEmergencyUrns",
			"()Ljava/util/List;"
		);
	}
	JString EmergencyNumber::getMnc() const
	{
		return callObjectMethod(
			"getMnc",
			"()Ljava/lang/String;"
		);
	}
	JString EmergencyNumber::getNumber() const
	{
		return callObjectMethod(
			"getNumber",
			"()Ljava/lang/String;"
		);
	}
	jint EmergencyNumber::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean EmergencyNumber::isFromSources(jint arg0) const
	{
		return callMethod<jboolean>(
			"isFromSources",
			"(I)Z",
			arg0
		);
	}
	jboolean EmergencyNumber::isInEmergencyServiceCategories(jint arg0) const
	{
		return callMethod<jboolean>(
			"isInEmergencyServiceCategories",
			"(I)Z",
			arg0
		);
	}
	JString EmergencyNumber::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void EmergencyNumber::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::emergency

