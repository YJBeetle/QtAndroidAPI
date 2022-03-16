#pragma once

#include "../../JArray.hpp"
#include "../app/AlertDialog_Builder.def.hpp"
#include "../content/Context.def.hpp"
#include "../content/res/TypedArray.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./MultiSelectListPreference.def.hpp"

namespace android::preference
{
	// Fields
	
	// Constructors
	inline MultiSelectListPreference::MultiSelectListPreference(android::content::Context arg0)
		: android::preference::DialogPreference(
			"android.preference.MultiSelectListPreference",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline MultiSelectListPreference::MultiSelectListPreference(android::content::Context arg0, JObject arg1)
		: android::preference::DialogPreference(
			"android.preference.MultiSelectListPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline MultiSelectListPreference::MultiSelectListPreference(android::content::Context arg0, JObject arg1, jint arg2)
		: android::preference::DialogPreference(
			"android.preference.MultiSelectListPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline MultiSelectListPreference::MultiSelectListPreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::preference::DialogPreference(
			"android.preference.MultiSelectListPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline jint MultiSelectListPreference::findIndexOfValue(JString arg0) const
	{
		return callMethod<jint>(
			"findIndexOfValue",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline JArray MultiSelectListPreference::getEntries() const
	{
		return callObjectMethod(
			"getEntries",
			"()[Ljava/lang/CharSequence;"
		);
	}
	inline JArray MultiSelectListPreference::getEntryValues() const
	{
		return callObjectMethod(
			"getEntryValues",
			"()[Ljava/lang/CharSequence;"
		);
	}
	inline JObject MultiSelectListPreference::getValues() const
	{
		return callObjectMethod(
			"getValues",
			"()Ljava/util/Set;"
		);
	}
	inline void MultiSelectListPreference::setEntries(JArray arg0) const
	{
		callMethod<void>(
			"setEntries",
			"([Ljava/lang/CharSequence;)V",
			arg0.object<jarray>()
		);
	}
	inline void MultiSelectListPreference::setEntries(jint arg0) const
	{
		callMethod<void>(
			"setEntries",
			"(I)V",
			arg0
		);
	}
	inline void MultiSelectListPreference::setEntryValues(JArray arg0) const
	{
		callMethod<void>(
			"setEntryValues",
			"([Ljava/lang/CharSequence;)V",
			arg0.object<jarray>()
		);
	}
	inline void MultiSelectListPreference::setEntryValues(jint arg0) const
	{
		callMethod<void>(
			"setEntryValues",
			"(I)V",
			arg0
		);
	}
	inline void MultiSelectListPreference::setValues(JObject arg0) const
	{
		callMethod<void>(
			"setValues",
			"(Ljava/util/Set;)V",
			arg0.object()
		);
	}
} // namespace android::preference

// Base class headers
#include "./Preference.hpp"
#include "./DialogPreference.hpp"

