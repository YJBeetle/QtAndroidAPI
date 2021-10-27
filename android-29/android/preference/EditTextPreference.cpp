#include "../content/Context.hpp"
#include "../content/res/TypedArray.hpp"
#include "../view/View.hpp"
#include "../widget/EditText.hpp"
#include "./EditTextPreference.hpp"

namespace android::preference
{
	// Fields
	
	EditTextPreference::EditTextPreference(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	EditTextPreference::EditTextPreference(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.preference.EditTextPreference",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	EditTextPreference::EditTextPreference(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.preference.EditTextPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	EditTextPreference::EditTextPreference(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.preference.EditTextPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	EditTextPreference::EditTextPreference(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.preference.EditTextPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	QAndroidJniObject EditTextPreference::getEditText()
	{
		return __thiz.callObjectMethod(
			"getEditText",
			"()Landroid/widget/EditText;"
		);
	}
	jstring EditTextPreference::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void EditTextPreference::setText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void EditTextPreference::setText(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean EditTextPreference::shouldDisableDependents()
	{
		return __thiz.callMethod<jboolean>(
			"shouldDisableDependents",
			"()Z"
		);
	}
} // namespace android::preference

