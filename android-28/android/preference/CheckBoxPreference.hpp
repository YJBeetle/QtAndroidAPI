#pragma once

#include "../content/Context.def.hpp"
#include "../view/View.def.hpp"
#include "./CheckBoxPreference.def.hpp"

namespace android::preference
{
	// Fields
	
	// Constructors
	inline CheckBoxPreference::CheckBoxPreference(android::content::Context arg0)
		: android::preference::TwoStatePreference(
			"android.preference.CheckBoxPreference",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline CheckBoxPreference::CheckBoxPreference(android::content::Context arg0, JObject arg1)
		: android::preference::TwoStatePreference(
			"android.preference.CheckBoxPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline CheckBoxPreference::CheckBoxPreference(android::content::Context arg0, JObject arg1, jint arg2)
		: android::preference::TwoStatePreference(
			"android.preference.CheckBoxPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline CheckBoxPreference::CheckBoxPreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::preference::TwoStatePreference(
			"android.preference.CheckBoxPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace android::preference

// Base class headers
#include "./Preference.hpp"
#include "./TwoStatePreference.hpp"

