#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../../JString.hpp"
#include "./TextSwitcher.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	TextSwitcher::TextSwitcher(QAndroidJniObject obj) : android::widget::ViewSwitcher(obj) {}
	
	// Constructors
	TextSwitcher::TextSwitcher(android::content::Context arg0)
		: android::widget::ViewSwitcher(
			"android.widget.TextSwitcher",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	TextSwitcher::TextSwitcher(android::content::Context arg0, JObject arg1)
		: android::widget::ViewSwitcher(
			"android.widget.TextSwitcher",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void TextSwitcher::addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2)
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	JString TextSwitcher::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	void TextSwitcher::setCurrentText(JString arg0)
	{
		callMethod<void>(
			"setCurrentText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void TextSwitcher::setText(JString arg0)
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::widget

