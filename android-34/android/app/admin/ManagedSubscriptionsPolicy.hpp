#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ManagedSubscriptionsPolicy.def.hpp"

namespace android::app::admin
{
	// Fields
	inline JObject ManagedSubscriptionsPolicy::CREATOR()
	{
		return getStaticObjectField(
			"android.app.admin.ManagedSubscriptionsPolicy",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ManagedSubscriptionsPolicy::TYPE_ALL_MANAGED_SUBSCRIPTIONS()
	{
		return getStaticField<jint>(
			"android.app.admin.ManagedSubscriptionsPolicy",
			"TYPE_ALL_MANAGED_SUBSCRIPTIONS"
		);
	}
	inline jint ManagedSubscriptionsPolicy::TYPE_ALL_PERSONAL_SUBSCRIPTIONS()
	{
		return getStaticField<jint>(
			"android.app.admin.ManagedSubscriptionsPolicy",
			"TYPE_ALL_PERSONAL_SUBSCRIPTIONS"
		);
	}
	
	// Constructors
	inline ManagedSubscriptionsPolicy::ManagedSubscriptionsPolicy(jint arg0)
		: JObject(
			"android.app.admin.ManagedSubscriptionsPolicy",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jint ManagedSubscriptionsPolicy::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ManagedSubscriptionsPolicy::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ManagedSubscriptionsPolicy::getPolicyType() const
	{
		return callMethod<jint>(
			"getPolicyType",
			"()I"
		);
	}
	inline jint ManagedSubscriptionsPolicy::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString ManagedSubscriptionsPolicy::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ManagedSubscriptionsPolicy::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::admin

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::admin;
#endif
