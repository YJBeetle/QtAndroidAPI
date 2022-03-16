#pragma once

#include "../content/Context.def.hpp"
#include "../content/res/TypedArray.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../view/View.def.hpp"
#include "../widget/EditText.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./EditTextPreference.def.hpp"

namespace android::preference
{
	// Fields
	
	// Constructors
	inline EditTextPreference::EditTextPreference(android::content::Context arg0)
		: android::preference::DialogPreference(
			"android.preference.EditTextPreference",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline EditTextPreference::EditTextPreference(android::content::Context arg0, JObject arg1)
		: android::preference::DialogPreference(
			"android.preference.EditTextPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline EditTextPreference::EditTextPreference(android::content::Context arg0, JObject arg1, jint arg2)
		: android::preference::DialogPreference(
			"android.preference.EditTextPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline EditTextPreference::EditTextPreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::preference::DialogPreference(
			"android.preference.EditTextPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline android::widget::EditText EditTextPreference::getEditText() const
	{
		return callObjectMethod(
			"getEditText",
			"()Landroid/widget/EditText;"
		);
	}
	inline JString EditTextPreference::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/String;"
		);
	}
	inline void EditTextPreference::setText(JString arg0) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline jboolean EditTextPreference::shouldDisableDependents() const
	{
		return callMethod<jboolean>(
			"shouldDisableDependents",
			"()Z"
		);
	}
} // namespace android::preference

// Base class headers
#include "./Preference.hpp"
#include "./DialogPreference.hpp"

