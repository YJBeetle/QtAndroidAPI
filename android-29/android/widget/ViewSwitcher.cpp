#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./ViewSwitcher.hpp"

namespace android::widget
{
	// Fields
	
	ViewSwitcher::ViewSwitcher(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ViewSwitcher::ViewSwitcher(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ViewSwitcher",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	ViewSwitcher::ViewSwitcher(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ViewSwitcher",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void ViewSwitcher::addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jstring ViewSwitcher::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject ViewSwitcher::getNextView()
	{
		return __thiz.callObjectMethod(
			"getNextView",
			"()Landroid/view/View;"
		);
	}
	void ViewSwitcher::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void ViewSwitcher::setFactory(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setFactory",
			"(Landroid/widget/ViewSwitcher$ViewFactory;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::widget

