#pragma once

#include "./Intent.def.hpp"
#include "../../JObject.hpp"
#include "./Intent_FilterComparison.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	inline Intent_FilterComparison::Intent_FilterComparison(android::content::Intent arg0)
		: JObject(
			"android.content.Intent$FilterComparison",
			"(Landroid/content/Intent;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean Intent_FilterComparison::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::content::Intent Intent_FilterComparison::getIntent() const
	{
		return callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	inline jint Intent_FilterComparison::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::content

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
