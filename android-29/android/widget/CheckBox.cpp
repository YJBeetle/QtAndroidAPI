#include "../content/Context.hpp"
#include "./CheckBox.hpp"

namespace android::widget
{
	// Fields
	
	CheckBox::CheckBox(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CheckBox::CheckBox(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CheckBox",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	CheckBox::CheckBox(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CheckBox",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	CheckBox::CheckBox(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CheckBox",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	CheckBox::CheckBox(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CheckBox",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jstring CheckBox::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
} // namespace android::widget

