#pragma once

#include "../../JArray.hpp"
#include "../app/AlertDialog_Builder.def.hpp"
#include "../content/Context.def.hpp"
#include "../content/res/TypedArray.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ListPreference.def.hpp"

namespace android::preference
{
	// Fields
	
	// Constructors
	inline ListPreference::ListPreference(android::content::Context arg0)
		: android::preference::DialogPreference(
			"android.preference.ListPreference",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline ListPreference::ListPreference(android::content::Context arg0, JObject arg1)
		: android::preference::DialogPreference(
			"android.preference.ListPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline ListPreference::ListPreference(android::content::Context arg0, JObject arg1, jint arg2)
		: android::preference::DialogPreference(
			"android.preference.ListPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline ListPreference::ListPreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::preference::DialogPreference(
			"android.preference.ListPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline jint ListPreference::findIndexOfValue(JString arg0) const
	{
		return callMethod<jint>(
			"findIndexOfValue",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline JArray ListPreference::getEntries() const
	{
		return callObjectMethod(
			"getEntries",
			"()[Ljava/lang/CharSequence;"
		);
	}
	inline JString ListPreference::getEntry() const
	{
		return callObjectMethod(
			"getEntry",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JArray ListPreference::getEntryValues() const
	{
		return callObjectMethod(
			"getEntryValues",
			"()[Ljava/lang/CharSequence;"
		);
	}
	inline JString ListPreference::getSummary() const
	{
		return callObjectMethod(
			"getSummary",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString ListPreference::getValue() const
	{
		return callObjectMethod(
			"getValue",
			"()Ljava/lang/String;"
		);
	}
	inline void ListPreference::setEntries(JArray arg0) const
	{
		callMethod<void>(
			"setEntries",
			"([Ljava/lang/CharSequence;)V",
			arg0.object<jarray>()
		);
	}
	inline void ListPreference::setEntries(jint arg0) const
	{
		callMethod<void>(
			"setEntries",
			"(I)V",
			arg0
		);
	}
	inline void ListPreference::setEntryValues(JArray arg0) const
	{
		callMethod<void>(
			"setEntryValues",
			"([Ljava/lang/CharSequence;)V",
			arg0.object<jarray>()
		);
	}
	inline void ListPreference::setEntryValues(jint arg0) const
	{
		callMethod<void>(
			"setEntryValues",
			"(I)V",
			arg0
		);
	}
	inline void ListPreference::setSummary(JString arg0) const
	{
		callMethod<void>(
			"setSummary",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void ListPreference::setValue(JString arg0) const
	{
		callMethod<void>(
			"setValue",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void ListPreference::setValueIndex(jint arg0) const
	{
		callMethod<void>(
			"setValueIndex",
			"(I)V",
			arg0
		);
	}
} // namespace android::preference

// Base class headers
#include "./Preference.hpp"
#include "./DialogPreference.hpp"

