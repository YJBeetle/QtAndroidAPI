#include "./ActionBar_LayoutParams.hpp"
#include "./ActionBar_Tab.hpp"
#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/View.hpp"
#include "./ActionBar.hpp"

namespace android::app
{
	// Fields
	jint ActionBar::DISPLAY_HOME_AS_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActionBar",
			"DISPLAY_HOME_AS_UP"
		);
	}
	jint ActionBar::DISPLAY_SHOW_CUSTOM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActionBar",
			"DISPLAY_SHOW_CUSTOM"
		);
	}
	jint ActionBar::DISPLAY_SHOW_HOME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActionBar",
			"DISPLAY_SHOW_HOME"
		);
	}
	jint ActionBar::DISPLAY_SHOW_TITLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActionBar",
			"DISPLAY_SHOW_TITLE"
		);
	}
	jint ActionBar::DISPLAY_USE_LOGO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActionBar",
			"DISPLAY_USE_LOGO"
		);
	}
	jint ActionBar::NAVIGATION_MODE_LIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActionBar",
			"NAVIGATION_MODE_LIST"
		);
	}
	jint ActionBar::NAVIGATION_MODE_STANDARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActionBar",
			"NAVIGATION_MODE_STANDARD"
		);
	}
	jint ActionBar::NAVIGATION_MODE_TABS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActionBar",
			"NAVIGATION_MODE_TABS"
		);
	}
	
	ActionBar::ActionBar(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ActionBar::ActionBar()
	{
		__thiz = QAndroidJniObject(
			"android.app.ActionBar",
			"()V"
		);
	}
	
	// Methods
	void ActionBar::addOnMenuVisibilityListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnMenuVisibilityListener",
			"(Landroid/app/ActionBar$OnMenuVisibilityListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ActionBar::addTab(android::app::ActionBar_Tab arg0)
	{
		__thiz.callMethod<void>(
			"addTab",
			"(Landroid/app/ActionBar$Tab;)V",
			arg0.__jniObject().object()
		);
	}
	void ActionBar::addTab(android::app::ActionBar_Tab arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"addTab",
			"(Landroid/app/ActionBar$Tab;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ActionBar::addTab(android::app::ActionBar_Tab arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"addTab",
			"(Landroid/app/ActionBar$Tab;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ActionBar::addTab(android::app::ActionBar_Tab arg0, jint arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"addTab",
			"(Landroid/app/ActionBar$Tab;IZ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject ActionBar::getCustomView()
	{
		return __thiz.callObjectMethod(
			"getCustomView",
			"()Landroid/view/View;"
		);
	}
	jint ActionBar::getDisplayOptions()
	{
		return __thiz.callMethod<jint>(
			"getDisplayOptions",
			"()I"
		);
	}
	jfloat ActionBar::getElevation()
	{
		return __thiz.callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	jint ActionBar::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint ActionBar::getHideOffset()
	{
		return __thiz.callMethod<jint>(
			"getHideOffset",
			"()I"
		);
	}
	jint ActionBar::getNavigationItemCount()
	{
		return __thiz.callMethod<jint>(
			"getNavigationItemCount",
			"()I"
		);
	}
	jint ActionBar::getNavigationMode()
	{
		return __thiz.callMethod<jint>(
			"getNavigationMode",
			"()I"
		);
	}
	jint ActionBar::getSelectedNavigationIndex()
	{
		return __thiz.callMethod<jint>(
			"getSelectedNavigationIndex",
			"()I"
		);
	}
	QAndroidJniObject ActionBar::getSelectedTab()
	{
		return __thiz.callObjectMethod(
			"getSelectedTab",
			"()Landroid/app/ActionBar$Tab;"
		);
	}
	jstring ActionBar::getSubtitle()
	{
		return __thiz.callObjectMethod(
			"getSubtitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject ActionBar::getTabAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getTabAt",
			"(I)Landroid/app/ActionBar$Tab;",
			arg0
		);
	}
	jint ActionBar::getTabCount()
	{
		return __thiz.callMethod<jint>(
			"getTabCount",
			"()I"
		);
	}
	QAndroidJniObject ActionBar::getThemedContext()
	{
		return __thiz.callObjectMethod(
			"getThemedContext",
			"()Landroid/content/Context;"
		);
	}
	jstring ActionBar::getTitle()
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void ActionBar::hide()
	{
		__thiz.callMethod<void>(
			"hide",
			"()V"
		);
	}
	jboolean ActionBar::isHideOnContentScrollEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isHideOnContentScrollEnabled",
			"()Z"
		);
	}
	jboolean ActionBar::isShowing()
	{
		return __thiz.callMethod<jboolean>(
			"isShowing",
			"()Z"
		);
	}
	QAndroidJniObject ActionBar::newTab()
	{
		return __thiz.callObjectMethod(
			"newTab",
			"()Landroid/app/ActionBar$Tab;"
		);
	}
	void ActionBar::removeAllTabs()
	{
		__thiz.callMethod<void>(
			"removeAllTabs",
			"()V"
		);
	}
	void ActionBar::removeOnMenuVisibilityListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnMenuVisibilityListener",
			"(Landroid/app/ActionBar$OnMenuVisibilityListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ActionBar::removeTab(android::app::ActionBar_Tab arg0)
	{
		__thiz.callMethod<void>(
			"removeTab",
			"(Landroid/app/ActionBar$Tab;)V",
			arg0.__jniObject().object()
		);
	}
	void ActionBar::removeTabAt(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeTabAt",
			"(I)V",
			arg0
		);
	}
	void ActionBar::selectTab(android::app::ActionBar_Tab arg0)
	{
		__thiz.callMethod<void>(
			"selectTab",
			"(Landroid/app/ActionBar$Tab;)V",
			arg0.__jniObject().object()
		);
	}
	void ActionBar::setBackgroundDrawable(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ActionBar::setCustomView(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setCustomView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ActionBar::setCustomView(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCustomView",
			"(I)V",
			arg0
		);
	}
	void ActionBar::setCustomView(android::view::View arg0, android::app::ActionBar_LayoutParams arg1)
	{
		__thiz.callMethod<void>(
			"setCustomView",
			"(Landroid/view/View;Landroid/app/ActionBar$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ActionBar::setDisplayHomeAsUpEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDisplayHomeAsUpEnabled",
			"(Z)V",
			arg0
		);
	}
	void ActionBar::setDisplayOptions(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDisplayOptions",
			"(I)V",
			arg0
		);
	}
	void ActionBar::setDisplayOptions(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setDisplayOptions",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ActionBar::setDisplayShowCustomEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDisplayShowCustomEnabled",
			"(Z)V",
			arg0
		);
	}
	void ActionBar::setDisplayShowHomeEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDisplayShowHomeEnabled",
			"(Z)V",
			arg0
		);
	}
	void ActionBar::setDisplayShowTitleEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDisplayShowTitleEnabled",
			"(Z)V",
			arg0
		);
	}
	void ActionBar::setDisplayUseLogoEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDisplayUseLogoEnabled",
			"(Z)V",
			arg0
		);
	}
	void ActionBar::setElevation(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setElevation",
			"(F)V",
			arg0
		);
	}
	void ActionBar::setHideOffset(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHideOffset",
			"(I)V",
			arg0
		);
	}
	void ActionBar::setHideOnContentScrollEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setHideOnContentScrollEnabled",
			"(Z)V",
			arg0
		);
	}
	void ActionBar::setHomeActionContentDescription(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHomeActionContentDescription",
			"(I)V",
			arg0
		);
	}
	void ActionBar::setHomeActionContentDescription(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setHomeActionContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void ActionBar::setHomeAsUpIndicator(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setHomeAsUpIndicator",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ActionBar::setHomeAsUpIndicator(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHomeAsUpIndicator",
			"(I)V",
			arg0
		);
	}
	void ActionBar::setHomeButtonEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setHomeButtonEnabled",
			"(Z)V",
			arg0
		);
	}
	void ActionBar::setIcon(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ActionBar::setIcon(jint arg0)
	{
		__thiz.callMethod<void>(
			"setIcon",
			"(I)V",
			arg0
		);
	}
	void ActionBar::setListNavigationCallbacks(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setListNavigationCallbacks",
			"(Landroid/widget/SpinnerAdapter;Landroid/app/ActionBar$OnNavigationListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ActionBar::setLogo(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setLogo",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ActionBar::setLogo(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLogo",
			"(I)V",
			arg0
		);
	}
	void ActionBar::setNavigationMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setNavigationMode",
			"(I)V",
			arg0
		);
	}
	void ActionBar::setSelectedNavigationItem(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSelectedNavigationItem",
			"(I)V",
			arg0
		);
	}
	void ActionBar::setSplitBackgroundDrawable(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setSplitBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ActionBar::setStackedBackgroundDrawable(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setStackedBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ActionBar::setSubtitle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSubtitle",
			"(I)V",
			arg0
		);
	}
	void ActionBar::setSubtitle(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void ActionBar::setTitle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(I)V",
			arg0
		);
	}
	void ActionBar::setTitle(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void ActionBar::show()
	{
		__thiz.callMethod<void>(
			"show",
			"()V"
		);
	}
} // namespace android::app

