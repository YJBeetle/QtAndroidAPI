#pragma once

#include "../content/Context.def.hpp"
#include "../view/View.def.hpp"
#include "../../JString.hpp"
#include "./SwitchPreference.def.hpp"

namespace android::preference
{
	// Fields
	
	// Constructors
	inline SwitchPreference::SwitchPreference(android::content::Context arg0)
		: android::preference::TwoStatePreference(
			"android.preference.SwitchPreference",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline SwitchPreference::SwitchPreference(android::content::Context arg0, JObject arg1)
		: android::preference::TwoStatePreference(
			"android.preference.SwitchPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline SwitchPreference::SwitchPreference(android::content::Context arg0, JObject arg1, jint arg2)
		: android::preference::TwoStatePreference(
			"android.preference.SwitchPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline SwitchPreference::SwitchPreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::preference::TwoStatePreference(
			"android.preference.SwitchPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline JString SwitchPreference::getSwitchTextOff() const
	{
		return callObjectMethod(
			"getSwitchTextOff",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString SwitchPreference::getSwitchTextOn() const
	{
		return callObjectMethod(
			"getSwitchTextOn",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline void SwitchPreference::setSwitchTextOff(jint arg0) const
	{
		callMethod<void>(
			"setSwitchTextOff",
			"(I)V",
			arg0
		);
	}
	inline void SwitchPreference::setSwitchTextOff(JString arg0) const
	{
		callMethod<void>(
			"setSwitchTextOff",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void SwitchPreference::setSwitchTextOn(jint arg0) const
	{
		callMethod<void>(
			"setSwitchTextOn",
			"(I)V",
			arg0
		);
	}
	inline void SwitchPreference::setSwitchTextOn(JString arg0) const
	{
		callMethod<void>(
			"setSwitchTextOn",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::preference

// Base class headers
#include "./Preference.hpp"
#include "./TwoStatePreference.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::preference;
#endif
