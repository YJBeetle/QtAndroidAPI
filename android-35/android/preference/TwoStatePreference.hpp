#pragma once

#include "../content/Context.def.hpp"
#include "../content/res/TypedArray.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "./TwoStatePreference.def.hpp"

namespace android::preference
{
	// Fields
	
	// Constructors
	inline TwoStatePreference::TwoStatePreference(android::content::Context arg0)
		: android::preference::Preference(
			"android.preference.TwoStatePreference",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline TwoStatePreference::TwoStatePreference(android::content::Context arg0, JObject arg1)
		: android::preference::Preference(
			"android.preference.TwoStatePreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline TwoStatePreference::TwoStatePreference(android::content::Context arg0, JObject arg1, jint arg2)
		: android::preference::Preference(
			"android.preference.TwoStatePreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline TwoStatePreference::TwoStatePreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::preference::Preference(
			"android.preference.TwoStatePreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline jboolean TwoStatePreference::getDisableDependentsState() const
	{
		return callMethod<jboolean>(
			"getDisableDependentsState",
			"()Z"
		);
	}
	inline JString TwoStatePreference::getSummaryOff() const
	{
		return callObjectMethod(
			"getSummaryOff",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString TwoStatePreference::getSummaryOn() const
	{
		return callObjectMethod(
			"getSummaryOn",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jboolean TwoStatePreference::isChecked() const
	{
		return callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	inline void TwoStatePreference::setChecked(jboolean arg0) const
	{
		callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	inline void TwoStatePreference::setDisableDependentsState(jboolean arg0) const
	{
		callMethod<void>(
			"setDisableDependentsState",
			"(Z)V",
			arg0
		);
	}
	inline void TwoStatePreference::setSummaryOff(jint arg0) const
	{
		callMethod<void>(
			"setSummaryOff",
			"(I)V",
			arg0
		);
	}
	inline void TwoStatePreference::setSummaryOff(JString arg0) const
	{
		callMethod<void>(
			"setSummaryOff",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void TwoStatePreference::setSummaryOn(jint arg0) const
	{
		callMethod<void>(
			"setSummaryOn",
			"(I)V",
			arg0
		);
	}
	inline void TwoStatePreference::setSummaryOn(JString arg0) const
	{
		callMethod<void>(
			"setSummaryOn",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline jboolean TwoStatePreference::shouldDisableDependents() const
	{
		return callMethod<jboolean>(
			"shouldDisableDependents",
			"()Z"
		);
	}
} // namespace android::preference

// Base class headers
#include "./Preference.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::preference;
#endif
