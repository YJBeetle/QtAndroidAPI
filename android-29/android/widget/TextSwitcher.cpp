#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./TextSwitcher.hpp"

namespace android::widget
{
	// Fields
	
	TextSwitcher::TextSwitcher(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TextSwitcher::TextSwitcher(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TextSwitcher",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	TextSwitcher::TextSwitcher(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TextSwitcher",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void TextSwitcher::addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jstring TextSwitcher::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void TextSwitcher::setCurrentText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setCurrentText",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void TextSwitcher::setCurrentText(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setCurrentText",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void TextSwitcher::setText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void TextSwitcher::setText(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace android::widget

