#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ClosedSubscriberGroupInfo.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject ClosedSubscriberGroupInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.ClosedSubscriberGroupInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ClosedSubscriberGroupInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ClosedSubscriberGroupInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ClosedSubscriberGroupInfo::getCsgIdentity() const
	{
		return callMethod<jint>(
			"getCsgIdentity",
			"()I"
		);
	}
	inline jboolean ClosedSubscriberGroupInfo::getCsgIndicator() const
	{
		return callMethod<jboolean>(
			"getCsgIndicator",
			"()Z"
		);
	}
	inline JString ClosedSubscriberGroupInfo::getHomeNodebName() const
	{
		return callObjectMethod(
			"getHomeNodebName",
			"()Ljava/lang/String;"
		);
	}
	inline jint ClosedSubscriberGroupInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString ClosedSubscriberGroupInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ClosedSubscriberGroupInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

