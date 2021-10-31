#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "./SwitchPreference.hpp"

namespace android::preference
{
	// Fields
	
	SwitchPreference::SwitchPreference(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SwitchPreference::SwitchPreference(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.preference.SwitchPreference",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	SwitchPreference::SwitchPreference(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.preference.SwitchPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	SwitchPreference::SwitchPreference(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.preference.SwitchPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	SwitchPreference::SwitchPreference(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.preference.SwitchPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jstring SwitchPreference::getSwitchTextOff()
	{
		return __thiz.callObjectMethod(
			"getSwitchTextOff",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring SwitchPreference::getSwitchTextOn()
	{
		return __thiz.callObjectMethod(
			"getSwitchTextOn",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void SwitchPreference::setSwitchTextOff(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSwitchTextOff",
			"(I)V",
			arg0
		);
	}
	void SwitchPreference::setSwitchTextOff(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSwitchTextOff",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void SwitchPreference::setSwitchTextOn(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSwitchTextOn",
			"(I)V",
			arg0
		);
	}
	void SwitchPreference::setSwitchTextOn(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSwitchTextOn",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
} // namespace android::preference

