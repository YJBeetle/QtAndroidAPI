#include "../app/AlertDialog_Builder.hpp"
#include "../content/Context.hpp"
#include "../content/res/TypedArray.hpp"
#include "./ListPreference.hpp"

namespace android::preference
{
	// Fields
	
	ListPreference::ListPreference(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ListPreference::ListPreference(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.preference.ListPreference",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	ListPreference::ListPreference(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.preference.ListPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	ListPreference::ListPreference(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.preference.ListPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	ListPreference::ListPreference(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.preference.ListPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jint ListPreference::findIndexOfValue(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"findIndexOfValue",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jarray ListPreference::getEntries()
	{
		return __thiz.callObjectMethod(
			"getEntries",
			"()[Ljava/lang/CharSequence;"
		).object<jarray>();
	}
	jstring ListPreference::getEntry()
	{
		return __thiz.callObjectMethod(
			"getEntry",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jarray ListPreference::getEntryValues()
	{
		return __thiz.callObjectMethod(
			"getEntryValues",
			"()[Ljava/lang/CharSequence;"
		).object<jarray>();
	}
	jstring ListPreference::getSummary()
	{
		return __thiz.callObjectMethod(
			"getSummary",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring ListPreference::getValue()
	{
		return __thiz.callObjectMethod(
			"getValue",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ListPreference::setEntries(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setEntries",
			"([Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void ListPreference::setEntries(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEntries",
			"(I)V",
			arg0
		);
	}
	void ListPreference::setEntryValues(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setEntryValues",
			"([Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void ListPreference::setEntryValues(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEntryValues",
			"(I)V",
			arg0
		);
	}
	void ListPreference::setSummary(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSummary",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void ListPreference::setValue(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setValue",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ListPreference::setValueIndex(jint arg0)
	{
		__thiz.callMethod<void>(
			"setValueIndex",
			"(I)V",
			arg0
		);
	}
} // namespace android::preference

