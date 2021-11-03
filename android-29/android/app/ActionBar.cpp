#include "./ActionBar_LayoutParams.hpp"
#include "./ActionBar_Tab.hpp"
#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/View.hpp"
#include "../../JString.hpp"
#include "./ActionBar.hpp"

namespace android::app
{
	// Fields
	jint ActionBar::DISPLAY_HOME_AS_UP()
	{
		return getStaticField<jint>(
			"android.app.ActionBar",
			"DISPLAY_HOME_AS_UP"
		);
	}
	jint ActionBar::DISPLAY_SHOW_CUSTOM()
	{
		return getStaticField<jint>(
			"android.app.ActionBar",
			"DISPLAY_SHOW_CUSTOM"
		);
	}
	jint ActionBar::DISPLAY_SHOW_HOME()
	{
		return getStaticField<jint>(
			"android.app.ActionBar",
			"DISPLAY_SHOW_HOME"
		);
	}
	jint ActionBar::DISPLAY_SHOW_TITLE()
	{
		return getStaticField<jint>(
			"android.app.ActionBar",
			"DISPLAY_SHOW_TITLE"
		);
	}
	jint ActionBar::DISPLAY_USE_LOGO()
	{
		return getStaticField<jint>(
			"android.app.ActionBar",
			"DISPLAY_USE_LOGO"
		);
	}
	jint ActionBar::NAVIGATION_MODE_LIST()
	{
		return getStaticField<jint>(
			"android.app.ActionBar",
			"NAVIGATION_MODE_LIST"
		);
	}
	jint ActionBar::NAVIGATION_MODE_STANDARD()
	{
		return getStaticField<jint>(
			"android.app.ActionBar",
			"NAVIGATION_MODE_STANDARD"
		);
	}
	jint ActionBar::NAVIGATION_MODE_TABS()
	{
		return getStaticField<jint>(
			"android.app.ActionBar",
			"NAVIGATION_MODE_TABS"
		);
	}
	
	// QAndroidJniObject forward
	ActionBar::ActionBar(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ActionBar::ActionBar()
		: JObject(
			"android.app.ActionBar",
			"()V"
		) {}
	
	// Methods
	void ActionBar::addOnMenuVisibilityListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnMenuVisibilityListener",
			"(Landroid/app/ActionBar$OnMenuVisibilityListener;)V",
			arg0.object()
		);
	}
	void ActionBar::addTab(android::app::ActionBar_Tab arg0) const
	{
		callMethod<void>(
			"addTab",
			"(Landroid/app/ActionBar$Tab;)V",
			arg0.object()
		);
	}
	void ActionBar::addTab(android::app::ActionBar_Tab arg0, jboolean arg1) const
	{
		callMethod<void>(
			"addTab",
			"(Landroid/app/ActionBar$Tab;Z)V",
			arg0.object(),
			arg1
		);
	}
	void ActionBar::addTab(android::app::ActionBar_Tab arg0, jint arg1) const
	{
		callMethod<void>(
			"addTab",
			"(Landroid/app/ActionBar$Tab;I)V",
			arg0.object(),
			arg1
		);
	}
	void ActionBar::addTab(android::app::ActionBar_Tab arg0, jint arg1, jboolean arg2) const
	{
		callMethod<void>(
			"addTab",
			"(Landroid/app/ActionBar$Tab;IZ)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	android::view::View ActionBar::getCustomView() const
	{
		return callObjectMethod(
			"getCustomView",
			"()Landroid/view/View;"
		);
	}
	jint ActionBar::getDisplayOptions() const
	{
		return callMethod<jint>(
			"getDisplayOptions",
			"()I"
		);
	}
	jfloat ActionBar::getElevation() const
	{
		return callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	jint ActionBar::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint ActionBar::getHideOffset() const
	{
		return callMethod<jint>(
			"getHideOffset",
			"()I"
		);
	}
	jint ActionBar::getNavigationItemCount() const
	{
		return callMethod<jint>(
			"getNavigationItemCount",
			"()I"
		);
	}
	jint ActionBar::getNavigationMode() const
	{
		return callMethod<jint>(
			"getNavigationMode",
			"()I"
		);
	}
	jint ActionBar::getSelectedNavigationIndex() const
	{
		return callMethod<jint>(
			"getSelectedNavigationIndex",
			"()I"
		);
	}
	android::app::ActionBar_Tab ActionBar::getSelectedTab() const
	{
		return callObjectMethod(
			"getSelectedTab",
			"()Landroid/app/ActionBar$Tab;"
		);
	}
	JString ActionBar::getSubtitle() const
	{
		return callObjectMethod(
			"getSubtitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::app::ActionBar_Tab ActionBar::getTabAt(jint arg0) const
	{
		return callObjectMethod(
			"getTabAt",
			"(I)Landroid/app/ActionBar$Tab;",
			arg0
		);
	}
	jint ActionBar::getTabCount() const
	{
		return callMethod<jint>(
			"getTabCount",
			"()I"
		);
	}
	android::content::Context ActionBar::getThemedContext() const
	{
		return callObjectMethod(
			"getThemedContext",
			"()Landroid/content/Context;"
		);
	}
	JString ActionBar::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	void ActionBar::hide() const
	{
		callMethod<void>(
			"hide",
			"()V"
		);
	}
	jboolean ActionBar::isHideOnContentScrollEnabled() const
	{
		return callMethod<jboolean>(
			"isHideOnContentScrollEnabled",
			"()Z"
		);
	}
	jboolean ActionBar::isShowing() const
	{
		return callMethod<jboolean>(
			"isShowing",
			"()Z"
		);
	}
	android::app::ActionBar_Tab ActionBar::newTab() const
	{
		return callObjectMethod(
			"newTab",
			"()Landroid/app/ActionBar$Tab;"
		);
	}
	void ActionBar::removeAllTabs() const
	{
		callMethod<void>(
			"removeAllTabs",
			"()V"
		);
	}
	void ActionBar::removeOnMenuVisibilityListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnMenuVisibilityListener",
			"(Landroid/app/ActionBar$OnMenuVisibilityListener;)V",
			arg0.object()
		);
	}
	void ActionBar::removeTab(android::app::ActionBar_Tab arg0) const
	{
		callMethod<void>(
			"removeTab",
			"(Landroid/app/ActionBar$Tab;)V",
			arg0.object()
		);
	}
	void ActionBar::removeTabAt(jint arg0) const
	{
		callMethod<void>(
			"removeTabAt",
			"(I)V",
			arg0
		);
	}
	void ActionBar::selectTab(android::app::ActionBar_Tab arg0) const
	{
		callMethod<void>(
			"selectTab",
			"(Landroid/app/ActionBar$Tab;)V",
			arg0.object()
		);
	}
	void ActionBar::setBackgroundDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void ActionBar::setCustomView(android::view::View arg0) const
	{
		callMethod<void>(
			"setCustomView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void ActionBar::setCustomView(jint arg0) const
	{
		callMethod<void>(
			"setCustomView",
			"(I)V",
			arg0
		);
	}
	void ActionBar::setCustomView(android::view::View arg0, android::app::ActionBar_LayoutParams arg1) const
	{
		callMethod<void>(
			"setCustomView",
			"(Landroid/view/View;Landroid/app/ActionBar$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ActionBar::setDisplayHomeAsUpEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setDisplayHomeAsUpEnabled",
			"(Z)V",
			arg0
		);
	}
	void ActionBar::setDisplayOptions(jint arg0) const
	{
		callMethod<void>(
			"setDisplayOptions",
			"(I)V",
			arg0
		);
	}
	void ActionBar::setDisplayOptions(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setDisplayOptions",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ActionBar::setDisplayShowCustomEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setDisplayShowCustomEnabled",
			"(Z)V",
			arg0
		);
	}
	void ActionBar::setDisplayShowHomeEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setDisplayShowHomeEnabled",
			"(Z)V",
			arg0
		);
	}
	void ActionBar::setDisplayShowTitleEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setDisplayShowTitleEnabled",
			"(Z)V",
			arg0
		);
	}
	void ActionBar::setDisplayUseLogoEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setDisplayUseLogoEnabled",
			"(Z)V",
			arg0
		);
	}
	void ActionBar::setElevation(jfloat arg0) const
	{
		callMethod<void>(
			"setElevation",
			"(F)V",
			arg0
		);
	}
	void ActionBar::setHideOffset(jint arg0) const
	{
		callMethod<void>(
			"setHideOffset",
			"(I)V",
			arg0
		);
	}
	void ActionBar::setHideOnContentScrollEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setHideOnContentScrollEnabled",
			"(Z)V",
			arg0
		);
	}
	void ActionBar::setHomeActionContentDescription(jint arg0) const
	{
		callMethod<void>(
			"setHomeActionContentDescription",
			"(I)V",
			arg0
		);
	}
	void ActionBar::setHomeActionContentDescription(JString arg0) const
	{
		callMethod<void>(
			"setHomeActionContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void ActionBar::setHomeAsUpIndicator(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setHomeAsUpIndicator",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void ActionBar::setHomeAsUpIndicator(jint arg0) const
	{
		callMethod<void>(
			"setHomeAsUpIndicator",
			"(I)V",
			arg0
		);
	}
	void ActionBar::setHomeButtonEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setHomeButtonEnabled",
			"(Z)V",
			arg0
		);
	}
	void ActionBar::setIcon(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void ActionBar::setIcon(jint arg0) const
	{
		callMethod<void>(
			"setIcon",
			"(I)V",
			arg0
		);
	}
	void ActionBar::setListNavigationCallbacks(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"setListNavigationCallbacks",
			"(Landroid/widget/SpinnerAdapter;Landroid/app/ActionBar$OnNavigationListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ActionBar::setLogo(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setLogo",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void ActionBar::setLogo(jint arg0) const
	{
		callMethod<void>(
			"setLogo",
			"(I)V",
			arg0
		);
	}
	void ActionBar::setNavigationMode(jint arg0) const
	{
		callMethod<void>(
			"setNavigationMode",
			"(I)V",
			arg0
		);
	}
	void ActionBar::setSelectedNavigationItem(jint arg0) const
	{
		callMethod<void>(
			"setSelectedNavigationItem",
			"(I)V",
			arg0
		);
	}
	void ActionBar::setSplitBackgroundDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setSplitBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void ActionBar::setStackedBackgroundDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setStackedBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void ActionBar::setSubtitle(jint arg0) const
	{
		callMethod<void>(
			"setSubtitle",
			"(I)V",
			arg0
		);
	}
	void ActionBar::setSubtitle(JString arg0) const
	{
		callMethod<void>(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void ActionBar::setTitle(jint arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(I)V",
			arg0
		);
	}
	void ActionBar::setTitle(JString arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void ActionBar::show() const
	{
		callMethod<void>(
			"show",
			"()V"
		);
	}
} // namespace android::app

