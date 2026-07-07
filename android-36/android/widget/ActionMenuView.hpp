#pragma once

#include "../content/Context.def.hpp"
#include "../content/res/Configuration.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "./ActionMenuView_LayoutParams.def.hpp"
#include "./LinearLayout_LayoutParams.def.hpp"
#include "./ActionMenuView.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline ActionMenuView::ActionMenuView(android::content::Context arg0)
		: android::widget::LinearLayout(
			"android.widget.ActionMenuView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline ActionMenuView::ActionMenuView(android::content::Context arg0, JObject arg1)
		: android::widget::LinearLayout(
			"android.widget.ActionMenuView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void ActionMenuView::dismissPopupMenus() const
	{
		callMethod<void>(
			"dismissPopupMenus",
			"()V"
		);
	}
	inline android::widget::ActionMenuView_LayoutParams ActionMenuView::generateLayoutParams(JObject arg0) const
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/ActionMenuView$LayoutParams;",
			arg0.object()
		);
	}
	inline JObject ActionMenuView::getMenu() const
	{
		return callObjectMethod(
			"getMenu",
			"()Landroid/view/Menu;"
		);
	}
	inline android::graphics::drawable::Drawable ActionMenuView::getOverflowIcon() const
	{
		return callObjectMethod(
			"getOverflowIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jint ActionMenuView::getPopupTheme() const
	{
		return callMethod<jint>(
			"getPopupTheme",
			"()I"
		);
	}
	inline jboolean ActionMenuView::hideOverflowMenu() const
	{
		return callMethod<jboolean>(
			"hideOverflowMenu",
			"()Z"
		);
	}
	inline jboolean ActionMenuView::isOverflowMenuShowing() const
	{
		return callMethod<jboolean>(
			"isOverflowMenuShowing",
			"()Z"
		);
	}
	inline void ActionMenuView::onConfigurationChanged(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	inline void ActionMenuView::onDetachedFromWindow() const
	{
		callMethod<void>(
			"onDetachedFromWindow",
			"()V"
		);
	}
	inline void ActionMenuView::setOnMenuItemClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnMenuItemClickListener",
			"(Landroid/widget/ActionMenuView$OnMenuItemClickListener;)V",
			arg0.object()
		);
	}
	inline void ActionMenuView::setOverflowIcon(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setOverflowIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void ActionMenuView::setPopupTheme(jint arg0) const
	{
		callMethod<void>(
			"setPopupTheme",
			"(I)V",
			arg0
		);
	}
	inline jboolean ActionMenuView::showOverflowMenu() const
	{
		return callMethod<jboolean>(
			"showOverflowMenu",
			"()Z"
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./LinearLayout.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
