#include "../content/Context.hpp"
#include "../content/res/TypedArray.hpp"
#include "./TwoStatePreference.hpp"

namespace android::preference
{
	// Fields
	
	TwoStatePreference::TwoStatePreference(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TwoStatePreference::TwoStatePreference(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.preference.TwoStatePreference",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	TwoStatePreference::TwoStatePreference(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.preference.TwoStatePreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	TwoStatePreference::TwoStatePreference(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.preference.TwoStatePreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	TwoStatePreference::TwoStatePreference(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.preference.TwoStatePreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jboolean TwoStatePreference::getDisableDependentsState()
	{
		return __thiz.callMethod<jboolean>(
			"getDisableDependentsState",
			"()Z"
		);
	}
	jstring TwoStatePreference::getSummaryOff()
	{
		return __thiz.callObjectMethod(
			"getSummaryOff",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring TwoStatePreference::getSummaryOn()
	{
		return __thiz.callObjectMethod(
			"getSummaryOn",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean TwoStatePreference::isChecked()
	{
		return __thiz.callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	void TwoStatePreference::setChecked(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	void TwoStatePreference::setDisableDependentsState(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDisableDependentsState",
			"(Z)V",
			arg0
		);
	}
	void TwoStatePreference::setSummaryOff(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSummaryOff",
			"(I)V",
			arg0
		);
	}
	void TwoStatePreference::setSummaryOff(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSummaryOff",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void TwoStatePreference::setSummaryOff(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSummaryOff",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void TwoStatePreference::setSummaryOn(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSummaryOn",
			"(I)V",
			arg0
		);
	}
	void TwoStatePreference::setSummaryOn(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSummaryOn",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void TwoStatePreference::setSummaryOn(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSummaryOn",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean TwoStatePreference::shouldDisableDependents()
	{
		return __thiz.callMethod<jboolean>(
			"shouldDisableDependents",
			"()Z"
		);
	}
} // namespace android::preference

