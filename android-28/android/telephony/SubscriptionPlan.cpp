#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SubscriptionPlan.hpp"

namespace android::telephony
{
	// Fields
	jlong SubscriptionPlan::BYTES_UNKNOWN()
	{
		return getStaticField<jlong>(
			"android.telephony.SubscriptionPlan",
			"BYTES_UNKNOWN"
		);
	}
	jlong SubscriptionPlan::BYTES_UNLIMITED()
	{
		return getStaticField<jlong>(
			"android.telephony.SubscriptionPlan",
			"BYTES_UNLIMITED"
		);
	}
	JObject SubscriptionPlan::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.SubscriptionPlan",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint SubscriptionPlan::LIMIT_BEHAVIOR_BILLED()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionPlan",
			"LIMIT_BEHAVIOR_BILLED"
		);
	}
	jint SubscriptionPlan::LIMIT_BEHAVIOR_DISABLED()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionPlan",
			"LIMIT_BEHAVIOR_DISABLED"
		);
	}
	jint SubscriptionPlan::LIMIT_BEHAVIOR_THROTTLED()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionPlan",
			"LIMIT_BEHAVIOR_THROTTLED"
		);
	}
	jint SubscriptionPlan::LIMIT_BEHAVIOR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionPlan",
			"LIMIT_BEHAVIOR_UNKNOWN"
		);
	}
	jlong SubscriptionPlan::TIME_UNKNOWN()
	{
		return getStaticField<jlong>(
			"android.telephony.SubscriptionPlan",
			"TIME_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	JObject SubscriptionPlan::cycleIterator() const
	{
		return callObjectMethod(
			"cycleIterator",
			"()Ljava/util/Iterator;"
		);
	}
	jint SubscriptionPlan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SubscriptionPlan::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint SubscriptionPlan::getDataLimitBehavior() const
	{
		return callMethod<jint>(
			"getDataLimitBehavior",
			"()I"
		);
	}
	jlong SubscriptionPlan::getDataLimitBytes() const
	{
		return callMethod<jlong>(
			"getDataLimitBytes",
			"()J"
		);
	}
	jlong SubscriptionPlan::getDataUsageBytes() const
	{
		return callMethod<jlong>(
			"getDataUsageBytes",
			"()J"
		);
	}
	jlong SubscriptionPlan::getDataUsageTime() const
	{
		return callMethod<jlong>(
			"getDataUsageTime",
			"()J"
		);
	}
	JString SubscriptionPlan::getSummary() const
	{
		return callObjectMethod(
			"getSummary",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString SubscriptionPlan::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint SubscriptionPlan::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString SubscriptionPlan::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void SubscriptionPlan::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

