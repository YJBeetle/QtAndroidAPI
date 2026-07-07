#pragma once

#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "./UsageEventsQuery.def.hpp"
#include "./UsageEventsQuery_Builder.def.hpp"

namespace android::app::usage
{
	// Fields
	
	// Constructors
	inline UsageEventsQuery_Builder::UsageEventsQuery_Builder(jlong arg0, jlong arg1)
		: JObject(
			"android.app.usage.UsageEventsQuery$Builder",
			"(JJ)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline android::app::usage::UsageEventsQuery UsageEventsQuery_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/usage/UsageEventsQuery;"
		);
	}
	inline android::app::usage::UsageEventsQuery_Builder UsageEventsQuery_Builder::setEventTypes(JIntArray arg0) const
	{
		return callObjectMethod(
			"setEventTypes",
			"([I)Landroid/app/usage/UsageEventsQuery$Builder;",
			arg0.object<jintArray>()
		);
	}
	inline android::app::usage::UsageEventsQuery_Builder UsageEventsQuery_Builder::setPackageNames(JArray arg0) const
	{
		return callObjectMethod(
			"setPackageNames",
			"([Ljava/lang/String;)Landroid/app/usage/UsageEventsQuery$Builder;",
			arg0.object<jarray>()
		);
	}
} // namespace android::app::usage

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::usage;
#endif
