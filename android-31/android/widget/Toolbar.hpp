#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "./Toolbar_LayoutParams.def.hpp"
#include "../../JString.hpp"
#include "./Toolbar.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline Toolbar::Toolbar(android::content::Context arg0)
		: android::view::ViewGroup(
			"android.widget.Toolbar",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline Toolbar::Toolbar(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup(
			"android.widget.Toolbar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline Toolbar::Toolbar(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::ViewGroup(
			"android.widget.Toolbar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline Toolbar::Toolbar(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::ViewGroup(
			"android.widget.Toolbar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void Toolbar::collapseActionView() const
	{
		callMethod<void>(
			"collapseActionView",
			"()V"
		);
	}
	inline void Toolbar::dismissPopupMenus() const
	{
		callMethod<void>(
			"dismissPopupMenus",
			"()V"
		);
	}
	inline android::widget::Toolbar_LayoutParams Toolbar::generateLayoutParams(JObject arg0) const
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/Toolbar$LayoutParams;",
			arg0.object()
		);
	}
	inline JString Toolbar::getCollapseContentDescription() const
	{
		return callObjectMethod(
			"getCollapseContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::graphics::drawable::Drawable Toolbar::getCollapseIcon() const
	{
		return callObjectMethod(
			"getCollapseIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jint Toolbar::getContentInsetEnd() const
	{
		return callMethod<jint>(
			"getContentInsetEnd",
			"()I"
		);
	}
	inline jint Toolbar::getContentInsetEndWithActions() const
	{
		return callMethod<jint>(
			"getContentInsetEndWithActions",
			"()I"
		);
	}
	inline jint Toolbar::getContentInsetLeft() const
	{
		return callMethod<jint>(
			"getContentInsetLeft",
			"()I"
		);
	}
	inline jint Toolbar::getContentInsetRight() const
	{
		return callMethod<jint>(
			"getContentInsetRight",
			"()I"
		);
	}
	inline jint Toolbar::getContentInsetStart() const
	{
		return callMethod<jint>(
			"getContentInsetStart",
			"()I"
		);
	}
	inline jint Toolbar::getContentInsetStartWithNavigation() const
	{
		return callMethod<jint>(
			"getContentInsetStartWithNavigation",
			"()I"
		);
	}
	inline jint Toolbar::getCurrentContentInsetEnd() const
	{
		return callMethod<jint>(
			"getCurrentContentInsetEnd",
			"()I"
		);
	}
	inline jint Toolbar::getCurrentContentInsetLeft() const
	{
		return callMethod<jint>(
			"getCurrentContentInsetLeft",
			"()I"
		);
	}
	inline jint Toolbar::getCurrentContentInsetRight() const
	{
		return callMethod<jint>(
			"getCurrentContentInsetRight",
			"()I"
		);
	}
	inline jint Toolbar::getCurrentContentInsetStart() const
	{
		return callMethod<jint>(
			"getCurrentContentInsetStart",
			"()I"
		);
	}
	inline android::graphics::drawable::Drawable Toolbar::getLogo() const
	{
		return callObjectMethod(
			"getLogo",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline JString Toolbar::getLogoDescription() const
	{
		return callObjectMethod(
			"getLogoDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JObject Toolbar::getMenu() const
	{
		return callObjectMethod(
			"getMenu",
			"()Landroid/view/Menu;"
		);
	}
	inline JString Toolbar::getNavigationContentDescription() const
	{
		return callObjectMethod(
			"getNavigationContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::graphics::drawable::Drawable Toolbar::getNavigationIcon() const
	{
		return callObjectMethod(
			"getNavigationIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline android::graphics::drawable::Drawable Toolbar::getOverflowIcon() const
	{
		return callObjectMethod(
			"getOverflowIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jint Toolbar::getPopupTheme() const
	{
		return callMethod<jint>(
			"getPopupTheme",
			"()I"
		);
	}
	inline JString Toolbar::getSubtitle() const
	{
		return callObjectMethod(
			"getSubtitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString Toolbar::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint Toolbar::getTitleMarginBottom() const
	{
		return callMethod<jint>(
			"getTitleMarginBottom",
			"()I"
		);
	}
	inline jint Toolbar::getTitleMarginEnd() const
	{
		return callMethod<jint>(
			"getTitleMarginEnd",
			"()I"
		);
	}
	inline jint Toolbar::getTitleMarginStart() const
	{
		return callMethod<jint>(
			"getTitleMarginStart",
			"()I"
		);
	}
	inline jint Toolbar::getTitleMarginTop() const
	{
		return callMethod<jint>(
			"getTitleMarginTop",
			"()I"
		);
	}
	inline jboolean Toolbar::hasExpandedActionView() const
	{
		return callMethod<jboolean>(
			"hasExpandedActionView",
			"()Z"
		);
	}
	inline jboolean Toolbar::hideOverflowMenu() const
	{
		return callMethod<jboolean>(
			"hideOverflowMenu",
			"()Z"
		);
	}
	inline void Toolbar::inflateMenu(jint arg0) const
	{
		callMethod<void>(
			"inflateMenu",
			"(I)V",
			arg0
		);
	}
	inline jboolean Toolbar::isOverflowMenuShowing() const
	{
		return callMethod<jboolean>(
			"isOverflowMenuShowing",
			"()Z"
		);
	}
	inline void Toolbar::onRtlPropertiesChanged(jint arg0) const
	{
		callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	inline jboolean Toolbar::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void Toolbar::setCollapseContentDescription(jint arg0) const
	{
		callMethod<void>(
			"setCollapseContentDescription",
			"(I)V",
			arg0
		);
	}
	inline void Toolbar::setCollapseContentDescription(JString arg0) const
	{
		callMethod<void>(
			"setCollapseContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void Toolbar::setCollapseIcon(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setCollapseIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void Toolbar::setCollapseIcon(jint arg0) const
	{
		callMethod<void>(
			"setCollapseIcon",
			"(I)V",
			arg0
		);
	}
	inline void Toolbar::setContentInsetEndWithActions(jint arg0) const
	{
		callMethod<void>(
			"setContentInsetEndWithActions",
			"(I)V",
			arg0
		);
	}
	inline void Toolbar::setContentInsetStartWithNavigation(jint arg0) const
	{
		callMethod<void>(
			"setContentInsetStartWithNavigation",
			"(I)V",
			arg0
		);
	}
	inline void Toolbar::setContentInsetsAbsolute(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setContentInsetsAbsolute",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Toolbar::setContentInsetsRelative(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setContentInsetsRelative",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Toolbar::setLogo(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setLogo",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void Toolbar::setLogo(jint arg0) const
	{
		callMethod<void>(
			"setLogo",
			"(I)V",
			arg0
		);
	}
	inline void Toolbar::setLogoDescription(jint arg0) const
	{
		callMethod<void>(
			"setLogoDescription",
			"(I)V",
			arg0
		);
	}
	inline void Toolbar::setLogoDescription(JString arg0) const
	{
		callMethod<void>(
			"setLogoDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void Toolbar::setNavigationContentDescription(jint arg0) const
	{
		callMethod<void>(
			"setNavigationContentDescription",
			"(I)V",
			arg0
		);
	}
	inline void Toolbar::setNavigationContentDescription(JString arg0) const
	{
		callMethod<void>(
			"setNavigationContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void Toolbar::setNavigationIcon(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setNavigationIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void Toolbar::setNavigationIcon(jint arg0) const
	{
		callMethod<void>(
			"setNavigationIcon",
			"(I)V",
			arg0
		);
	}
	inline void Toolbar::setNavigationOnClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setNavigationOnClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.object()
		);
	}
	inline void Toolbar::setOnMenuItemClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnMenuItemClickListener",
			"(Landroid/widget/Toolbar$OnMenuItemClickListener;)V",
			arg0.object()
		);
	}
	inline void Toolbar::setOverflowIcon(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setOverflowIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void Toolbar::setPopupTheme(jint arg0) const
	{
		callMethod<void>(
			"setPopupTheme",
			"(I)V",
			arg0
		);
	}
	inline void Toolbar::setSubtitle(jint arg0) const
	{
		callMethod<void>(
			"setSubtitle",
			"(I)V",
			arg0
		);
	}
	inline void Toolbar::setSubtitle(JString arg0) const
	{
		callMethod<void>(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void Toolbar::setSubtitleTextAppearance(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setSubtitleTextAppearance",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void Toolbar::setSubtitleTextColor(jint arg0) const
	{
		callMethod<void>(
			"setSubtitleTextColor",
			"(I)V",
			arg0
		);
	}
	inline void Toolbar::setTitle(jint arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(I)V",
			arg0
		);
	}
	inline void Toolbar::setTitle(JString arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void Toolbar::setTitleMargin(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"setTitleMargin",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void Toolbar::setTitleMarginBottom(jint arg0) const
	{
		callMethod<void>(
			"setTitleMarginBottom",
			"(I)V",
			arg0
		);
	}
	inline void Toolbar::setTitleMarginEnd(jint arg0) const
	{
		callMethod<void>(
			"setTitleMarginEnd",
			"(I)V",
			arg0
		);
	}
	inline void Toolbar::setTitleMarginStart(jint arg0) const
	{
		callMethod<void>(
			"setTitleMarginStart",
			"(I)V",
			arg0
		);
	}
	inline void Toolbar::setTitleMarginTop(jint arg0) const
	{
		callMethod<void>(
			"setTitleMarginTop",
			"(I)V",
			arg0
		);
	}
	inline void Toolbar::setTitleTextAppearance(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setTitleTextAppearance",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void Toolbar::setTitleTextColor(jint arg0) const
	{
		callMethod<void>(
			"setTitleTextColor",
			"(I)V",
			arg0
		);
	}
	inline jboolean Toolbar::showOverflowMenu() const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
