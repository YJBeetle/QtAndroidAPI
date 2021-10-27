#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "./CheckBoxPreference.hpp"

namespace android::preference
{
	// Fields
	
	CheckBoxPreference::CheckBoxPreference(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CheckBoxPreference::CheckBoxPreference(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.preference.CheckBoxPreference",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	CheckBoxPreference::CheckBoxPreference(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.preference.CheckBoxPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	CheckBoxPreference::CheckBoxPreference(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.preference.CheckBoxPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	CheckBoxPreference::CheckBoxPreference(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.preference.CheckBoxPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
} // namespace android::preference

