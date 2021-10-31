#include "../app/AlertDialog_Builder.hpp"
#include "../content/Context.hpp"
#include "../content/res/TypedArray.hpp"
#include "./MultiSelectListPreference.hpp"

namespace android::preference
{
	// Fields
	
	MultiSelectListPreference::MultiSelectListPreference(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MultiSelectListPreference::MultiSelectListPreference(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.preference.MultiSelectListPreference",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	MultiSelectListPreference::MultiSelectListPreference(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.preference.MultiSelectListPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	MultiSelectListPreference::MultiSelectListPreference(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.preference.MultiSelectListPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	MultiSelectListPreference::MultiSelectListPreference(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.preference.MultiSelectListPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jint MultiSelectListPreference::findIndexOfValue(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"findIndexOfValue",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jarray MultiSelectListPreference::getEntries()
	{
		return __thiz.callObjectMethod(
			"getEntries",
			"()[Ljava/lang/CharSequence;"
		).object<jarray>();
	}
	jarray MultiSelectListPreference::getEntryValues()
	{
		return __thiz.callObjectMethod(
			"getEntryValues",
			"()[Ljava/lang/CharSequence;"
		).object<jarray>();
	}
	QAndroidJniObject MultiSelectListPreference::getValues()
	{
		return __thiz.callObjectMethod(
			"getValues",
			"()Ljava/util/Set;"
		);
	}
	void MultiSelectListPreference::setEntries(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setEntries",
			"([Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void MultiSelectListPreference::setEntries(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEntries",
			"(I)V",
			arg0
		);
	}
	void MultiSelectListPreference::setEntryValues(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setEntryValues",
			"([Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void MultiSelectListPreference::setEntryValues(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEntryValues",
			"(I)V",
			arg0
		);
	}
	void MultiSelectListPreference::setValues(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setValues",
			"(Ljava/util/Set;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::preference

