#pragma once

#include "../os/Bundle.def.hpp"
#include "../../JString.hpp"
#include "./BroadcastOptions.def.hpp"

namespace android::app
{
	// Fields
	inline jint BroadcastOptions::DEFERRAL_POLICY_DEFAULT()
	{
		return getStaticField<jint>(
			"android.app.BroadcastOptions",
			"DEFERRAL_POLICY_DEFAULT"
		);
	}
	inline jint BroadcastOptions::DEFERRAL_POLICY_NONE()
	{
		return getStaticField<jint>(
			"android.app.BroadcastOptions",
			"DEFERRAL_POLICY_NONE"
		);
	}
	inline jint BroadcastOptions::DEFERRAL_POLICY_UNTIL_ACTIVE()
	{
		return getStaticField<jint>(
			"android.app.BroadcastOptions",
			"DEFERRAL_POLICY_UNTIL_ACTIVE"
		);
	}
	inline jint BroadcastOptions::DELIVERY_GROUP_POLICY_ALL()
	{
		return getStaticField<jint>(
			"android.app.BroadcastOptions",
			"DELIVERY_GROUP_POLICY_ALL"
		);
	}
	inline jint BroadcastOptions::DELIVERY_GROUP_POLICY_MOST_RECENT()
	{
		return getStaticField<jint>(
			"android.app.BroadcastOptions",
			"DELIVERY_GROUP_POLICY_MOST_RECENT"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::app::BroadcastOptions BroadcastOptions::fromBundle(android::os::Bundle arg0)
	{
		return callStaticObjectMethod(
			"android.app.BroadcastOptions",
			"fromBundle",
			"(Landroid/os/Bundle;)Landroid/app/BroadcastOptions;",
			arg0.object()
		);
	}
	inline android::app::BroadcastOptions BroadcastOptions::makeBasic()
	{
		return callStaticObjectMethod(
			"android.app.BroadcastOptions",
			"makeBasic",
			"()Landroid/app/BroadcastOptions;"
		);
	}
	inline void BroadcastOptions::clearDeferralPolicy() const
	{
		callMethod<void>(
			"clearDeferralPolicy",
			"()V"
		);
	}
	inline void BroadcastOptions::clearDeliveryGroupMatchingKey() const
	{
		callMethod<void>(
			"clearDeliveryGroupMatchingKey",
			"()V"
		);
	}
	inline void BroadcastOptions::clearDeliveryGroupPolicy() const
	{
		callMethod<void>(
			"clearDeliveryGroupPolicy",
			"()V"
		);
	}
	inline jint BroadcastOptions::getDeferralPolicy() const
	{
		return callMethod<jint>(
			"getDeferralPolicy",
			"()I"
		);
	}
	inline JString BroadcastOptions::getDeliveryGroupMatchingKey() const
	{
		return callObjectMethod(
			"getDeliveryGroupMatchingKey",
			"()Ljava/lang/String;"
		);
	}
	inline jint BroadcastOptions::getDeliveryGroupPolicy() const
	{
		return callMethod<jint>(
			"getDeliveryGroupPolicy",
			"()I"
		);
	}
	inline jboolean BroadcastOptions::isShareIdentityEnabled() const
	{
		return callMethod<jboolean>(
			"isShareIdentityEnabled",
			"()Z"
		);
	}
	inline android::app::BroadcastOptions BroadcastOptions::setDeferralPolicy(jint arg0) const
	{
		return callObjectMethod(
			"setDeferralPolicy",
			"(I)Landroid/app/BroadcastOptions;",
			arg0
		);
	}
	inline android::app::BroadcastOptions BroadcastOptions::setDeliveryGroupMatchingKey(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"setDeliveryGroupMatchingKey",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/app/BroadcastOptions;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline android::app::BroadcastOptions BroadcastOptions::setDeliveryGroupPolicy(jint arg0) const
	{
		return callObjectMethod(
			"setDeliveryGroupPolicy",
			"(I)Landroid/app/BroadcastOptions;",
			arg0
		);
	}
	inline android::app::BroadcastOptions BroadcastOptions::setShareIdentityEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setShareIdentityEnabled",
			"(Z)Landroid/app/BroadcastOptions;",
			arg0
		);
	}
	inline android::os::Bundle BroadcastOptions::toBundle() const
	{
		return callObjectMethod(
			"toBundle",
			"()Landroid/os/Bundle;"
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
