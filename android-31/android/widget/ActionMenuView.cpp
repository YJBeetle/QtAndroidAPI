#include "../content/Context.hpp"
#include "../content/res/Configuration.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./ActionMenuView_LayoutParams.hpp"
#include "./LinearLayout_LayoutParams.hpp"
#include "./ActionMenuView.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	ActionMenuView::ActionMenuView(QAndroidJniObject obj) : android::widget::LinearLayout(obj) {}
	
	// Constructors
	ActionMenuView::ActionMenuView(android::content::Context arg0)
		: android::widget::LinearLayout(
			"android.widget.ActionMenuView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	ActionMenuView::ActionMenuView(android::content::Context arg0, __JniBaseClass arg1)
		: android::widget::LinearLayout(
			"android.widget.ActionMenuView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void ActionMenuView::dismissPopupMenus()
	{
		callMethod<void>(
			"dismissPopupMenus",
			"()V"
		);
	}
	android::widget::ActionMenuView_LayoutParams ActionMenuView::generateLayoutParams(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/ActionMenuView$LayoutParams;",
			arg0.object()
		);
	}
	__JniBaseClass ActionMenuView::getMenu()
	{
		return callObjectMethod(
			"getMenu",
			"()Landroid/view/Menu;"
		);
	}
	android::graphics::drawable::Drawable ActionMenuView::getOverflowIcon()
	{
		return callObjectMethod(
			"getOverflowIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint ActionMenuView::getPopupTheme()
	{
		return callMethod<jint>(
			"getPopupTheme",
			"()I"
		);
	}
	jboolean ActionMenuView::hideOverflowMenu()
	{
		return callMethod<jboolean>(
			"hideOverflowMenu",
			"()Z"
		);
	}
	jboolean ActionMenuView::isOverflowMenuShowing()
	{
		return callMethod<jboolean>(
			"isOverflowMenuShowing",
			"()Z"
		);
	}
	void ActionMenuView::onConfigurationChanged(android::content::res::Configuration arg0)
	{
		callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	void ActionMenuView::onDetachedFromWindow()
	{
		callMethod<void>(
			"onDetachedFromWindow",
			"()V"
		);
	}
	void ActionMenuView::setOnMenuItemClickListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnMenuItemClickListener",
			"(Landroid/widget/ActionMenuView$OnMenuItemClickListener;)V",
			arg0.object()
		);
	}
	void ActionMenuView::setOverflowIcon(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setOverflowIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void ActionMenuView::setPopupTheme(jint arg0)
	{
		callMethod<void>(
			"setPopupTheme",
			"(I)V",
			arg0
		);
	}
	jboolean ActionMenuView::showOverflowMenu()
	{
		return callMethod<jboolean>(
			"showOverflowMenu",
			"()Z"
		);
	}
} // namespace android::widget

