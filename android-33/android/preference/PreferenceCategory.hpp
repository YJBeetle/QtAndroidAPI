#pragma once

#include "../content/Context.def.hpp"
#include "./Preference.def.hpp"
#include "./PreferenceCategory.def.hpp"

namespace android::preference
{
	// Fields
	
	// Constructors
	inline PreferenceCategory::PreferenceCategory(android::content::Context arg0)
		: android::preference::PreferenceGroup(
			"android.preference.PreferenceCategory",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline PreferenceCategory::PreferenceCategory(android::content::Context arg0, JObject arg1)
		: android::preference::PreferenceGroup(
			"android.preference.PreferenceCategory",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline PreferenceCategory::PreferenceCategory(android::content::Context arg0, JObject arg1, jint arg2)
		: android::preference::PreferenceGroup(
			"android.preference.PreferenceCategory",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline PreferenceCategory::PreferenceCategory(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::preference::PreferenceGroup(
			"android.preference.PreferenceCategory",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline jboolean PreferenceCategory::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline jboolean PreferenceCategory::shouldDisableDependents() const
	{
		return callMethod<jboolean>(
			"shouldDisableDependents",
			"()Z"
		);
	}
} // namespace android::preference

// Base class headers
#include "./Preference.hpp"
#include "./PreferenceGroup.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::preference;
#endif
