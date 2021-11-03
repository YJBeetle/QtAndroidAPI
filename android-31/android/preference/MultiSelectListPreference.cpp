#include "../../JArray.hpp"
#include "../app/AlertDialog_Builder.hpp"
#include "../content/Context.hpp"
#include "../content/res/TypedArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./MultiSelectListPreference.hpp"

namespace android::preference
{
	// Fields
	
	// QAndroidJniObject forward
	MultiSelectListPreference::MultiSelectListPreference(QAndroidJniObject obj) : android::preference::DialogPreference(obj) {}
	
	// Constructors
	MultiSelectListPreference::MultiSelectListPreference(android::content::Context arg0)
		: android::preference::DialogPreference(
			"android.preference.MultiSelectListPreference",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	MultiSelectListPreference::MultiSelectListPreference(android::content::Context arg0, JObject arg1)
		: android::preference::DialogPreference(
			"android.preference.MultiSelectListPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	MultiSelectListPreference::MultiSelectListPreference(android::content::Context arg0, JObject arg1, jint arg2)
		: android::preference::DialogPreference(
			"android.preference.MultiSelectListPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	MultiSelectListPreference::MultiSelectListPreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::preference::DialogPreference(
			"android.preference.MultiSelectListPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	jint MultiSelectListPreference::findIndexOfValue(JString arg0) const
	{
		return callMethod<jint>(
			"findIndexOfValue",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	JArray MultiSelectListPreference::getEntries() const
	{
		return callObjectMethod(
			"getEntries",
			"()[Ljava/lang/CharSequence;"
		);
	}
	JArray MultiSelectListPreference::getEntryValues() const
	{
		return callObjectMethod(
			"getEntryValues",
			"()[Ljava/lang/CharSequence;"
		);
	}
	JObject MultiSelectListPreference::getValues() const
	{
		return callObjectMethod(
			"getValues",
			"()Ljava/util/Set;"
		);
	}
	void MultiSelectListPreference::setEntries(JArray arg0) const
	{
		callMethod<void>(
			"setEntries",
			"([Ljava/lang/CharSequence;)V",
			arg0.object<jarray>()
		);
	}
	void MultiSelectListPreference::setEntries(jint arg0) const
	{
		callMethod<void>(
			"setEntries",
			"(I)V",
			arg0
		);
	}
	void MultiSelectListPreference::setEntryValues(JArray arg0) const
	{
		callMethod<void>(
			"setEntryValues",
			"([Ljava/lang/CharSequence;)V",
			arg0.object<jarray>()
		);
	}
	void MultiSelectListPreference::setEntryValues(jint arg0) const
	{
		callMethod<void>(
			"setEntryValues",
			"(I)V",
			arg0
		);
	}
	void MultiSelectListPreference::setValues(JObject arg0) const
	{
		callMethod<void>(
			"setValues",
			"(Ljava/util/Set;)V",
			arg0.object()
		);
	}
} // namespace android::preference

