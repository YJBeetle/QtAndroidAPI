#pragma once

#include "../../JIntArray.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SubscriptionPlan.def.hpp"

namespace android::telephony
{
	// Fields
	inline jlong SubscriptionPlan::BYTES_UNKNOWN()
	{
		return getStaticField<jlong>(
			"android.telephony.SubscriptionPlan",
			"BYTES_UNKNOWN"
		);
	}
	inline jlong SubscriptionPlan::BYTES_UNLIMITED()
	{
		return getStaticField<jlong>(
			"android.telephony.SubscriptionPlan",
			"BYTES_UNLIMITED"
		);
	}
	inline JObject SubscriptionPlan::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.SubscriptionPlan",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint SubscriptionPlan::LIMIT_BEHAVIOR_BILLED()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionPlan",
			"LIMIT_BEHAVIOR_BILLED"
		);
	}
	inline jint SubscriptionPlan::LIMIT_BEHAVIOR_DISABLED()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionPlan",
			"LIMIT_BEHAVIOR_DISABLED"
		);
	}
	inline jint SubscriptionPlan::LIMIT_BEHAVIOR_THROTTLED()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionPlan",
			"LIMIT_BEHAVIOR_THROTTLED"
		);
	}
	inline jint SubscriptionPlan::LIMIT_BEHAVIOR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionPlan",
			"LIMIT_BEHAVIOR_UNKNOWN"
		);
	}
	inline jlong SubscriptionPlan::TIME_UNKNOWN()
	{
		return getStaticField<jlong>(
			"android.telephony.SubscriptionPlan",
			"TIME_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject SubscriptionPlan::cycleIterator() const
	{
		return callObjectMethod(
			"cycleIterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline jint SubscriptionPlan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean SubscriptionPlan::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint SubscriptionPlan::getDataLimitBehavior() const
	{
		return callMethod<jint>(
			"getDataLimitBehavior",
			"()I"
		);
	}
	inline jlong SubscriptionPlan::getDataLimitBytes() const
	{
		return callMethod<jlong>(
			"getDataLimitBytes",
			"()J"
		);
	}
	inline jlong SubscriptionPlan::getDataUsageBytes() const
	{
		return callMethod<jlong>(
			"getDataUsageBytes",
			"()J"
		);
	}
	inline jlong SubscriptionPlan::getDataUsageTime() const
	{
		return callMethod<jlong>(
			"getDataUsageTime",
			"()J"
		);
	}
	inline JIntArray SubscriptionPlan::getNetworkTypes() const
	{
		return callObjectMethod(
			"getNetworkTypes",
			"()[I"
		);
	}
	inline JString SubscriptionPlan::getSummary() const
	{
		return callObjectMethod(
			"getSummary",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString SubscriptionPlan::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint SubscriptionPlan::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString SubscriptionPlan::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void SubscriptionPlan::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

