#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../../JString.hpp"
#include "./ViewSwitcher.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	ViewSwitcher::ViewSwitcher(QJniObject obj) : android::widget::ViewAnimator(obj) {}
	
	// Constructors
	ViewSwitcher::ViewSwitcher(android::content::Context arg0)
		: android::widget::ViewAnimator(
			"android.widget.ViewSwitcher",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	ViewSwitcher::ViewSwitcher(android::content::Context arg0, JObject arg1)
		: android::widget::ViewAnimator(
			"android.widget.ViewSwitcher",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void ViewSwitcher::addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	JString ViewSwitcher::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::view::View ViewSwitcher::getNextView() const
	{
		return callObjectMethod(
			"getNextView",
			"()Landroid/view/View;"
		);
	}
	void ViewSwitcher::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void ViewSwitcher::setFactory(JObject arg0) const
	{
		callMethod<void>(
			"setFactory",
			"(Landroid/widget/ViewSwitcher$ViewFactory;)V",
			arg0.object()
		);
	}
} // namespace android::widget

