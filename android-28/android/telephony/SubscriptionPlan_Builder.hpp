#pragma once

#include "./SubscriptionPlan.def.hpp"
#include "../../JString.hpp"
#include "../../java/time/Period.def.hpp"
#include "../../java/time/ZonedDateTime.def.hpp"
#include "./SubscriptionPlan_Builder.def.hpp"

namespace android::telephony
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::telephony::SubscriptionPlan_Builder SubscriptionPlan_Builder::createNonrecurring(java::time::ZonedDateTime arg0, java::time::ZonedDateTime arg1)
	{
		return callStaticObjectMethod(
			"android.telephony.SubscriptionPlan$Builder",
			"createNonrecurring",
			"(Ljava/time/ZonedDateTime;Ljava/time/ZonedDateTime;)Landroid/telephony/SubscriptionPlan$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::telephony::SubscriptionPlan_Builder SubscriptionPlan_Builder::createRecurring(java::time::ZonedDateTime arg0, java::time::Period arg1)
	{
		return callStaticObjectMethod(
			"android.telephony.SubscriptionPlan$Builder",
			"createRecurring",
			"(Ljava/time/ZonedDateTime;Ljava/time/Period;)Landroid/telephony/SubscriptionPlan$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::telephony::SubscriptionPlan SubscriptionPlan_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/telephony/SubscriptionPlan;"
		);
	}
	inline android::telephony::SubscriptionPlan_Builder SubscriptionPlan_Builder::setDataLimit(jlong arg0, jint arg1) const
	{
		return callObjectMethod(
			"setDataLimit",
			"(JI)Landroid/telephony/SubscriptionPlan$Builder;",
			arg0,
			arg1
		);
	}
	inline android::telephony::SubscriptionPlan_Builder SubscriptionPlan_Builder::setDataUsage(jlong arg0, jlong arg1) const
	{
		return callObjectMethod(
			"setDataUsage",
			"(JJ)Landroid/telephony/SubscriptionPlan$Builder;",
			arg0,
			arg1
		);
	}
	inline android::telephony::SubscriptionPlan_Builder SubscriptionPlan_Builder::setSummary(JString arg0) const
	{
		return callObjectMethod(
			"setSummary",
			"(Ljava/lang/CharSequence;)Landroid/telephony/SubscriptionPlan$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::telephony::SubscriptionPlan_Builder SubscriptionPlan_Builder::setTitle(JString arg0) const
	{
		return callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/telephony/SubscriptionPlan$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::telephony

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
