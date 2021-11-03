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
	
	// QJniObject forward
	Toolbar::Toolbar(QJniObject obj) : android::view::ViewGroup(obj) {}
	
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
	void Toolbar::collapseActionView()
	{
		callMethod<void>(
			"collapseActionView",
			"()V"
		);
	}
	void Toolbar::dismissPopupMenus()
	{
		callMethod<void>(
			"dismissPopupMenus",
			"()V"
		);
	}
	android::widget::Toolbar_LayoutParams Toolbar::generateLayoutParams(JObject arg0)
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/Toolbar$LayoutParams;",
			arg0.object()
		);
	}
	jint Toolbar::getContentInsetEnd()
	{
		return callMethod<jint>(
			"getContentInsetEnd",
			"()I"
		);
	}
	jint Toolbar::getContentInsetEndWithActions()
	{
		return callMethod<jint>(
			"getContentInsetEndWithActions",
			"()I"
		);
	}
	jint Toolbar::getContentInsetLeft()
	{
		return callMethod<jint>(
			"getContentInsetLeft",
			"()I"
		);
	}
	jint Toolbar::getContentInsetRight()
	{
		return callMethod<jint>(
			"getContentInsetRight",
			"()I"
		);
	}
	jint Toolbar::getContentInsetStart()
	{
		return callMethod<jint>(
			"getContentInsetStart",
			"()I"
		);
	}
	jint Toolbar::getContentInsetStartWithNavigation()
	{
		return callMethod<jint>(
			"getContentInsetStartWithNavigation",
			"()I"
		);
	}
	jint Toolbar::getCurrentContentInsetEnd()
	{
		return callMethod<jint>(
			"getCurrentContentInsetEnd",
			"()I"
		);
	}
	jint Toolbar::getCurrentContentInsetLeft()
	{
		return callMethod<jint>(
			"getCurrentContentInsetLeft",
			"()I"
		);
	}
	jint Toolbar::getCurrentContentInsetRight()
	{
		return callMethod<jint>(
			"getCurrentContentInsetRight",
			"()I"
		);
	}
	jint Toolbar::getCurrentContentInsetStart()
	{
		return callMethod<jint>(
			"getCurrentContentInsetStart",
			"()I"
		);
	}
	android::graphics::drawable::Drawable Toolbar::getLogo()
	{
		return callObjectMethod(
			"getLogo",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	JString Toolbar::getLogoDescription()
	{
		return callObjectMethod(
			"getLogoDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	JObject Toolbar::getMenu()
	{
		return callObjectMethod(
			"getMenu",
			"()Landroid/view/Menu;"
		);
	}
	JString Toolbar::getNavigationContentDescription()
	{
		return callObjectMethod(
			"getNavigationContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::graphics::drawable::Drawable Toolbar::getNavigationIcon()
	{
		return callObjectMethod(
			"getNavigationIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::graphics::drawable::Drawable Toolbar::getOverflowIcon()
	{
		return callObjectMethod(
			"getOverflowIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint Toolbar::getPopupTheme()
	{
		return callMethod<jint>(
			"getPopupTheme",
			"()I"
		);
	}
	JString Toolbar::getSubtitle()
	{
		return callObjectMethod(
			"getSubtitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString Toolbar::getTitle()
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint Toolbar::getTitleMarginBottom()
	{
		return callMethod<jint>(
			"getTitleMarginBottom",
			"()I"
		);
	}
	jint Toolbar::getTitleMarginEnd()
	{
		return callMethod<jint>(
			"getTitleMarginEnd",
			"()I"
		);
	}
	jint Toolbar::getTitleMarginStart()
	{
		return callMethod<jint>(
			"getTitleMarginStart",
			"()I"
		);
	}
	jint Toolbar::getTitleMarginTop()
	{
		return callMethod<jint>(
			"getTitleMarginTop",
			"()I"
		);
	}
	jboolean Toolbar::hasExpandedActionView()
	{
		return callMethod<jboolean>(
			"hasExpandedActionView",
			"()Z"
		);
	}
	jboolean Toolbar::hideOverflowMenu()
	{
		return callMethod<jboolean>(
			"hideOverflowMenu",
			"()Z"
		);
	}
	void Toolbar::inflateMenu(jint arg0)
	{
		callMethod<void>(
			"inflateMenu",
			"(I)V",
			arg0
		);
	}
	jboolean Toolbar::isOverflowMenuShowing()
	{
		return callMethod<jboolean>(
			"isOverflowMenuShowing",
			"()Z"
		);
	}
	void Toolbar::onRtlPropertiesChanged(jint arg0)
	{
		callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	jboolean Toolbar::onTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void Toolbar::setContentInsetEndWithActions(jint arg0)
	{
		callMethod<void>(
			"setContentInsetEndWithActions",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setContentInsetStartWithNavigation(jint arg0)
	{
		callMethod<void>(
			"setContentInsetStartWithNavigation",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setContentInsetsAbsolute(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setContentInsetsAbsolute",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Toolbar::setContentInsetsRelative(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setContentInsetsRelative",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Toolbar::setLogo(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setLogo",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void Toolbar::setLogo(jint arg0)
	{
		callMethod<void>(
			"setLogo",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setLogoDescription(jint arg0)
	{
		callMethod<void>(
			"setLogoDescription",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setLogoDescription(JString arg0)
	{
		callMethod<void>(
			"setLogoDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void Toolbar::setNavigationContentDescription(jint arg0)
	{
		callMethod<void>(
			"setNavigationContentDescription",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setNavigationContentDescription(JString arg0)
	{
		callMethod<void>(
			"setNavigationContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void Toolbar::setNavigationIcon(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setNavigationIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void Toolbar::setNavigationIcon(jint arg0)
	{
		callMethod<void>(
			"setNavigationIcon",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setNavigationOnClickListener(JObject arg0)
	{
		callMethod<void>(
			"setNavigationOnClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.object()
		);
	}
	void Toolbar::setOnMenuItemClickListener(JObject arg0)
	{
		callMethod<void>(
			"setOnMenuItemClickListener",
			"(Landroid/widget/Toolbar$OnMenuItemClickListener;)V",
			arg0.object()
		);
	}
	void Toolbar::setOverflowIcon(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setOverflowIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void Toolbar::setPopupTheme(jint arg0)
	{
		callMethod<void>(
			"setPopupTheme",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setSubtitle(jint arg0)
	{
		callMethod<void>(
			"setSubtitle",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setSubtitle(JString arg0)
	{
		callMethod<void>(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void Toolbar::setSubtitleTextAppearance(android::content::Context arg0, jint arg1)
	{
		callMethod<void>(
			"setSubtitleTextAppearance",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	void Toolbar::setSubtitleTextColor(jint arg0)
	{
		callMethod<void>(
			"setSubtitleTextColor",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setTitle(jint arg0)
	{
		callMethod<void>(
			"setTitle",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setTitle(JString arg0)
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void Toolbar::setTitleMargin(jint arg0, jint arg1, jint arg2, jint arg3)
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
	void Toolbar::setTitleMarginBottom(jint arg0)
	{
		callMethod<void>(
			"setTitleMarginBottom",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setTitleMarginEnd(jint arg0)
	{
		callMethod<void>(
			"setTitleMarginEnd",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setTitleMarginStart(jint arg0)
	{
		callMethod<void>(
			"setTitleMarginStart",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setTitleMarginTop(jint arg0)
	{
		callMethod<void>(
			"setTitleMarginTop",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setTitleTextAppearance(android::content::Context arg0, jint arg1)
	{
		callMethod<void>(
			"setTitleTextAppearance",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	void Toolbar::setTitleTextColor(jint arg0)
	{
		callMethod<void>(
			"setTitleTextColor",
			"(I)V",
			arg0
		);
	}
	jboolean Toolbar::showOverflowMenu()
	{
		return callMethod<jboolean>(
			"showOverflowMenu",
			"()Z"
		);
	}
} // namespace android::widget

