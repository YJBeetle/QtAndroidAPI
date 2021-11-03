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
	
	// QJniObject forward
	ActionMenuView::ActionMenuView(QJniObject obj) : android::widget::LinearLayout(obj) {}
	
	// Constructors
	ActionMenuView::ActionMenuView(android::content::Context arg0)
		: android::widget::LinearLayout(
			"android.widget.ActionMenuView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	ActionMenuView::ActionMenuView(android::content::Context arg0, JObject arg1)
		: android::widget::LinearLayout(
			"android.widget.ActionMenuView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void ActionMenuView::dismissPopupMenus() const
	{
		callMethod<void>(
			"dismissPopupMenus",
			"()V"
		);
	}
	android::widget::ActionMenuView_LayoutParams ActionMenuView::generateLayoutParams(JObject arg0) const
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/ActionMenuView$LayoutParams;",
			arg0.object()
		);
	}
	JObject ActionMenuView::getMenu() const
	{
		return callObjectMethod(
			"getMenu",
			"()Landroid/view/Menu;"
		);
	}
	android::graphics::drawable::Drawable ActionMenuView::getOverflowIcon() const
	{
		return callObjectMethod(
			"getOverflowIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint ActionMenuView::getPopupTheme() const
	{
		return callMethod<jint>(
			"getPopupTheme",
			"()I"
		);
	}
	jboolean ActionMenuView::hideOverflowMenu() const
	{
		return callMethod<jboolean>(
			"hideOverflowMenu",
			"()Z"
		);
	}
	jboolean ActionMenuView::isOverflowMenuShowing() const
	{
		return callMethod<jboolean>(
			"isOverflowMenuShowing",
			"()Z"
		);
	}
	void ActionMenuView::onConfigurationChanged(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	void ActionMenuView::onDetachedFromWindow() const
	{
		callMethod<void>(
			"onDetachedFromWindow",
			"()V"
		);
	}
	void ActionMenuView::setOnMenuItemClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnMenuItemClickListener",
			"(Landroid/widget/ActionMenuView$OnMenuItemClickListener;)V",
			arg0.object()
		);
	}
	void ActionMenuView::setOverflowIcon(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setOverflowIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void ActionMenuView::setPopupTheme(jint arg0) const
	{
		callMethod<void>(
			"setPopupTheme",
			"(I)V",
			arg0
		);
	}
	jboolean ActionMenuView::showOverflowMenu() const
	{
		return callMethod<jboolean>(
			"showOverflowMenu",
			"()Z"
		);
	}
} // namespace android::widget

