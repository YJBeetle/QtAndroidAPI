#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./EmergencyNumber.def.hpp"

namespace android::telephony::emergency
{
	// Fields
	inline JObject EmergencyNumber::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.emergency.EmergencyNumber",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint EmergencyNumber::EMERGENCY_CALL_ROUTING_EMERGENCY()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_CALL_ROUTING_EMERGENCY"
		);
	}
	inline jint EmergencyNumber::EMERGENCY_CALL_ROUTING_NORMAL()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_CALL_ROUTING_NORMAL"
		);
	}
	inline jint EmergencyNumber::EMERGENCY_CALL_ROUTING_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_CALL_ROUTING_UNKNOWN"
		);
	}
	inline jint EmergencyNumber::EMERGENCY_NUMBER_SOURCE_DATABASE()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_NUMBER_SOURCE_DATABASE"
		);
	}
	inline jint EmergencyNumber::EMERGENCY_NUMBER_SOURCE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_NUMBER_SOURCE_DEFAULT"
		);
	}
	inline jint EmergencyNumber::EMERGENCY_NUMBER_SOURCE_MODEM_CONFIG()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_NUMBER_SOURCE_MODEM_CONFIG"
		);
	}
	inline jint EmergencyNumber::EMERGENCY_NUMBER_SOURCE_NETWORK_SIGNALING()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_NUMBER_SOURCE_NETWORK_SIGNALING"
		);
	}
	inline jint EmergencyNumber::EMERGENCY_NUMBER_SOURCE_SIM()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_NUMBER_SOURCE_SIM"
		);
	}
	inline jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_AIEC()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_AIEC"
		);
	}
	inline jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_AMBULANCE()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_AMBULANCE"
		);
	}
	inline jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_FIRE_BRIGADE()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_FIRE_BRIGADE"
		);
	}
	inline jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_MARINE_GUARD()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_MARINE_GUARD"
		);
	}
	inline jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_MIEC()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_MIEC"
		);
	}
	inline jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_MOUNTAIN_RESCUE()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_MOUNTAIN_RESCUE"
		);
	}
	inline jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_POLICE()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_POLICE"
		);
	}
	inline jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_UNSPECIFIED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint EmergencyNumber::compareTo(android::telephony::emergency::EmergencyNumber arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/telephony/emergency/EmergencyNumber;)I",
			arg0.object()
		);
	}
	inline jint EmergencyNumber::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint EmergencyNumber::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean EmergencyNumber::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString EmergencyNumber::getCountryIso() const
	{
		return callObjectMethod(
			"getCountryIso",
			"()Ljava/lang/String;"
		);
	}
	inline jint EmergencyNumber::getEmergencyCallRouting() const
	{
		return callMethod<jint>(
			"getEmergencyCallRouting",
			"()I"
		);
	}
	inline JObject EmergencyNumber::getEmergencyNumberSources() const
	{
		return callObjectMethod(
			"getEmergencyNumberSources",
			"()Ljava/util/List;"
		);
	}
	inline JObject EmergencyNumber::getEmergencyServiceCategories() const
	{
		return callObjectMethod(
			"getEmergencyServiceCategories",
			"()Ljava/util/List;"
		);
	}
	inline JObject EmergencyNumber::getEmergencyUrns() const
	{
		return callObjectMethod(
			"getEmergencyUrns",
			"()Ljava/util/List;"
		);
	}
	inline JString EmergencyNumber::getMnc() const
	{
		return callObjectMethod(
			"getMnc",
			"()Ljava/lang/String;"
		);
	}
	inline JString EmergencyNumber::getNumber() const
	{
		return callObjectMethod(
			"getNumber",
			"()Ljava/lang/String;"
		);
	}
	inline jint EmergencyNumber::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean EmergencyNumber::isFromSources(jint arg0) const
	{
		return callMethod<jboolean>(
			"isFromSources",
			"(I)Z",
			arg0
		);
	}
	inline jboolean EmergencyNumber::isInEmergencyServiceCategories(jint arg0) const
	{
		return callMethod<jboolean>(
			"isInEmergencyServiceCategories",
			"(I)Z",
			arg0
		);
	}
	inline JString EmergencyNumber::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void EmergencyNumber::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::emergency

// Base class headers

