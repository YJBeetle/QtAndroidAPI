#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AvailableNetworkInfo.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject AvailableNetworkInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.AvailableNetworkInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint AvailableNetworkInfo::PRIORITY_HIGH()
	{
		return getStaticField<jint>(
			"android.telephony.AvailableNetworkInfo",
			"PRIORITY_HIGH"
		);
	}
	inline jint AvailableNetworkInfo::PRIORITY_LOW()
	{
		return getStaticField<jint>(
			"android.telephony.AvailableNetworkInfo",
			"PRIORITY_LOW"
		);
	}
	inline jint AvailableNetworkInfo::PRIORITY_MED()
	{
		return getStaticField<jint>(
			"android.telephony.AvailableNetworkInfo",
			"PRIORITY_MED"
		);
	}
	
	// Constructors
	inline AvailableNetworkInfo::AvailableNetworkInfo(jint arg0, jint arg1, JObject arg2, JObject arg3)
		: JObject(
			"android.telephony.AvailableNetworkInfo",
			"(IILjava/util/List;Ljava/util/List;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline jint AvailableNetworkInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AvailableNetworkInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject AvailableNetworkInfo::getBands() const
	{
		return callObjectMethod(
			"getBands",
			"()Ljava/util/List;"
		);
	}
	inline JObject AvailableNetworkInfo::getMccMncs() const
	{
		return callObjectMethod(
			"getMccMncs",
			"()Ljava/util/List;"
		);
	}
	inline jint AvailableNetworkInfo::getPriority() const
	{
		return callMethod<jint>(
			"getPriority",
			"()I"
		);
	}
	inline JObject AvailableNetworkInfo::getRadioAccessSpecifiers() const
	{
		return callObjectMethod(
			"getRadioAccessSpecifiers",
			"()Ljava/util/List;"
		);
	}
	inline jint AvailableNetworkInfo::getSubId() const
	{
		return callMethod<jint>(
			"getSubId",
			"()I"
		);
	}
	inline jint AvailableNetworkInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AvailableNetworkInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AvailableNetworkInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
