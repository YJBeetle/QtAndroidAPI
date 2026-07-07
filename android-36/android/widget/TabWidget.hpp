#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "../view/PointerIcon.def.hpp"
#include "../view/View.def.hpp"
#include "../../JString.hpp"
#include "./TabWidget.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline TabWidget::TabWidget(android::content::Context arg0)
		: android::widget::LinearLayout(
			"android.widget.TabWidget",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline TabWidget::TabWidget(android::content::Context arg0, JObject arg1)
		: android::widget::LinearLayout(
			"android.widget.TabWidget",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline TabWidget::TabWidget(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::LinearLayout(
			"android.widget.TabWidget",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline TabWidget::TabWidget(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::LinearLayout(
			"android.widget.TabWidget",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void TabWidget::addView(android::view::View arg0) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void TabWidget::childDrawableStateChanged(android::view::View arg0) const
	{
		callMethod<void>(
			"childDrawableStateChanged",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void TabWidget::dispatchDraw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"dispatchDraw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline void TabWidget::focusCurrentTab(jint arg0) const
	{
		callMethod<void>(
			"focusCurrentTab",
			"(I)V",
			arg0
		);
	}
	inline JString TabWidget::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::view::View TabWidget::getChildTabViewAt(jint arg0) const
	{
		return callObjectMethod(
			"getChildTabViewAt",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	inline android::graphics::drawable::Drawable TabWidget::getLeftStripDrawable() const
	{
		return callObjectMethod(
			"getLeftStripDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline android::graphics::drawable::Drawable TabWidget::getRightStripDrawable() const
	{
		return callObjectMethod(
			"getRightStripDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jint TabWidget::getTabCount() const
	{
		return callMethod<jint>(
			"getTabCount",
			"()I"
		);
	}
	inline jboolean TabWidget::isStripEnabled() const
	{
		return callMethod<jboolean>(
			"isStripEnabled",
			"()Z"
		);
	}
	inline void TabWidget::onFocusChange(android::view::View arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onFocusChange",
			"(Landroid/view/View;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline android::view::PointerIcon TabWidget::onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1) const
	{
		return callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.object(),
			arg1
		);
	}
	inline void TabWidget::removeAllViews() const
	{
		callMethod<void>(
			"removeAllViews",
			"()V"
		);
	}
	inline void TabWidget::setCurrentTab(jint arg0) const
	{
		callMethod<void>(
			"setCurrentTab",
			"(I)V",
			arg0
		);
	}
	inline void TabWidget::setDividerDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setDividerDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void TabWidget::setDividerDrawable(jint arg0) const
	{
		callMethod<void>(
			"setDividerDrawable",
			"(I)V",
			arg0
		);
	}
	inline void TabWidget::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void TabWidget::setLeftStripDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setLeftStripDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void TabWidget::setLeftStripDrawable(jint arg0) const
	{
		callMethod<void>(
			"setLeftStripDrawable",
			"(I)V",
			arg0
		);
	}
	inline void TabWidget::setRightStripDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setRightStripDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void TabWidget::setRightStripDrawable(jint arg0) const
	{
		callMethod<void>(
			"setRightStripDrawable",
			"(I)V",
			arg0
		);
	}
	inline void TabWidget::setStripEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setStripEnabled",
			"(Z)V",
			arg0
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
