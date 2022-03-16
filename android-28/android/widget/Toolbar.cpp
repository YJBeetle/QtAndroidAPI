#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./Toolbar_LayoutParams.hpp"
#include "../../JString.hpp"
#include "./Toolbar.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	Toolbar::Toolbar(android::content::Context arg0)
		: android::view::ViewGroup(
			"android.widget.Toolbar",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	Toolbar::Toolbar(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup(
			"android.widget.Toolbar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	Toolbar::Toolbar(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::ViewGroup(
			"android.widget.Toolbar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	Toolbar::Toolbar(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::ViewGroup(
			"android.widget.Toolbar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void Toolbar::collapseActionView() const
	{
		callMethod<void>(
			"collapseActionView",
			"()V"
		);
	}
	void Toolbar::dismissPopupMenus() const
	{
		callMethod<void>(
			"dismissPopupMenus",
			"()V"
		);
	}
	android::widget::Toolbar_LayoutParams Toolbar::generateLayoutParams(JObject arg0) const
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/Toolbar$LayoutParams;",
			arg0.object()
		);
	}
	jint Toolbar::getContentInsetEnd() const
	{
		return callMethod<jint>(
			"getContentInsetEnd",
			"()I"
		);
	}
	jint Toolbar::getContentInsetEndWithActions() const
	{
		return callMethod<jint>(
			"getContentInsetEndWithActions",
			"()I"
		);
	}
	jint Toolbar::getContentInsetLeft() const
	{
		return callMethod<jint>(
			"getContentInsetLeft",
			"()I"
		);
	}
	jint Toolbar::getContentInsetRight() const
	{
		return callMethod<jint>(
			"getContentInsetRight",
			"()I"
		);
	}
	jint Toolbar::getContentInsetStart() const
	{
		return callMethod<jint>(
			"getContentInsetStart",
			"()I"
		);
	}
	jint Toolbar::getContentInsetStartWithNavigation() const
	{
		return callMethod<jint>(
			"getContentInsetStartWithNavigation",
			"()I"
		);
	}
	jint Toolbar::getCurrentContentInsetEnd() const
	{
		return callMethod<jint>(
			"getCurrentContentInsetEnd",
			"()I"
		);
	}
	jint Toolbar::getCurrentContentInsetLeft() const
	{
		return callMethod<jint>(
			"getCurrentContentInsetLeft",
			"()I"
		);
	}
	jint Toolbar::getCurrentContentInsetRight() const
	{
		return callMethod<jint>(
			"getCurrentContentInsetRight",
			"()I"
		);
	}
	jint Toolbar::getCurrentContentInsetStart() const
	{
		return callMethod<jint>(
			"getCurrentContentInsetStart",
			"()I"
		);
	}
	android::graphics::drawable::Drawable Toolbar::getLogo() const
	{
		return callObjectMethod(
			"getLogo",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	JString Toolbar::getLogoDescription() const
	{
		return callObjectMethod(
			"getLogoDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	JObject Toolbar::getMenu() const
	{
		return callObjectMethod(
			"getMenu",
			"()Landroid/view/Menu;"
		);
	}
	JString Toolbar::getNavigationContentDescription() const
	{
		return callObjectMethod(
			"getNavigationContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::graphics::drawable::Drawable Toolbar::getNavigationIcon() const
	{
		return callObjectMethod(
			"getNavigationIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::graphics::drawable::Drawable Toolbar::getOverflowIcon() const
	{
		return callObjectMethod(
			"getOverflowIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint Toolbar::getPopupTheme() const
	{
		return callMethod<jint>(
			"getPopupTheme",
			"()I"
		);
	}
	JString Toolbar::getSubtitle() const
	{
		return callObjectMethod(
			"getSubtitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString Toolbar::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint Toolbar::getTitleMarginBottom() const
	{
		return callMethod<jint>(
			"getTitleMarginBottom",
			"()I"
		);
	}
	jint Toolbar::getTitleMarginEnd() const
	{
		return callMethod<jint>(
			"getTitleMarginEnd",
			"()I"
		);
	}
	jint Toolbar::getTitleMarginStart() const
	{
		return callMethod<jint>(
			"getTitleMarginStart",
			"()I"
		);
	}
	jint Toolbar::getTitleMarginTop() const
	{
		return callMethod<jint>(
			"getTitleMarginTop",
			"()I"
		);
	}
	jboolean Toolbar::hasExpandedActionView() const
	{
		return callMethod<jboolean>(
			"hasExpandedActionView",
			"()Z"
		);
	}
	jboolean Toolbar::hideOverflowMenu() const
	{
		return callMethod<jboolean>(
			"hideOverflowMenu",
			"()Z"
		);
	}
	void Toolbar::inflateMenu(jint arg0) const
	{
		callMethod<void>(
			"inflateMenu",
			"(I)V",
			arg0
		);
	}
	jboolean Toolbar::isOverflowMenuShowing() const
	{
		return callMethod<jboolean>(
			"isOverflowMenuShowing",
			"()Z"
		);
	}
	void Toolbar::onRtlPropertiesChanged(jint arg0) const
	{
		callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	jboolean Toolbar::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void Toolbar::setContentInsetEndWithActions(jint arg0) const
	{
		callMethod<void>(
			"setContentInsetEndWithActions",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setContentInsetStartWithNavigation(jint arg0) const
	{
		callMethod<void>(
			"setContentInsetStartWithNavigation",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setContentInsetsAbsolute(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setContentInsetsAbsolute",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Toolbar::setContentInsetsRelative(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setContentInsetsRelative",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Toolbar::setLogo(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setLogo",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void Toolbar::setLogo(jint arg0) const
	{
		callMethod<void>(
			"setLogo",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setLogoDescription(jint arg0) const
	{
		callMethod<void>(
			"setLogoDescription",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setLogoDescription(JString arg0) const
	{
		callMethod<void>(
			"setLogoDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void Toolbar::setNavigationContentDescription(jint arg0) const
	{
		callMethod<void>(
			"setNavigationContentDescription",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setNavigationContentDescription(JString arg0) const
	{
		callMethod<void>(
			"setNavigationContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void Toolbar::setNavigationIcon(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setNavigationIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void Toolbar::setNavigationIcon(jint arg0) const
	{
		callMethod<void>(
			"setNavigationIcon",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setNavigationOnClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setNavigationOnClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.object()
		);
	}
	void Toolbar::setOnMenuItemClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnMenuItemClickListener",
			"(Landroid/widget/Toolbar$OnMenuItemClickListener;)V",
			arg0.object()
		);
	}
	void Toolbar::setOverflowIcon(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setOverflowIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void Toolbar::setPopupTheme(jint arg0) const
	{
		callMethod<void>(
			"setPopupTheme",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setSubtitle(jint arg0) const
	{
		callMethod<void>(
			"setSubtitle",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setSubtitle(JString arg0) const
	{
		callMethod<void>(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void Toolbar::setSubtitleTextAppearance(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setSubtitleTextAppearance",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	void Toolbar::setSubtitleTextColor(jint arg0) const
	{
		callMethod<void>(
			"setSubtitleTextColor",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setTitle(jint arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setTitle(JString arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void Toolbar::setTitleMargin(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	void Toolbar::setTitleMarginBottom(jint arg0) const
	{
		callMethod<void>(
			"setTitleMarginBottom",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setTitleMarginEnd(jint arg0) const
	{
		callMethod<void>(
			"setTitleMarginEnd",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setTitleMarginStart(jint arg0) const
	{
		callMethod<void>(
			"setTitleMarginStart",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setTitleMarginTop(jint arg0) const
	{
		callMethod<void>(
			"setTitleMarginTop",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setTitleTextAppearance(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setTitleTextAppearance",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	void Toolbar::setTitleTextColor(jint arg0) const
	{
		callMethod<void>(
			"setTitleTextColor",
			"(I)V",
			arg0
		);
	}
	jboolean Toolbar::showOverflowMenu() const
	{
		return callMethod<jboolean>(
			"showOverflowMenu",
			"()Z"
		);
	}
} // namespace android::widget

