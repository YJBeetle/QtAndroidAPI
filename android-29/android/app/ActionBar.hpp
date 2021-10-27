#pragma once

#ifndef ANDROID_APP_ACTIONBAR
#define ANDROID_APP_ACTIONBAR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class ActionBar_LayoutParams;
}
namespace __jni_impl::android::app
{
	class ActionBar_Tab;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::app
{
	class ActionBar : public __JniBaseClass
	{
	public:
		// Fields
		static jint DISPLAY_HOME_AS_UP();
		static jint DISPLAY_SHOW_CUSTOM();
		static jint DISPLAY_SHOW_HOME();
		static jint DISPLAY_SHOW_TITLE();
		static jint DISPLAY_USE_LOGO();
		static jint NAVIGATION_MODE_LIST();
		static jint NAVIGATION_MODE_STANDARD();
		static jint NAVIGATION_MODE_TABS();
		
		// Constructors
		void __constructor();
		
		// Methods
		void addOnMenuVisibilityListener(__jni_impl::__JniBaseClass arg0);
		void addTab(__jni_impl::android::app::ActionBar_Tab arg0);
		void addTab(__jni_impl::android::app::ActionBar_Tab arg0, jboolean arg1);
		void addTab(__jni_impl::android::app::ActionBar_Tab arg0, jint arg1);
		void addTab(__jni_impl::android::app::ActionBar_Tab arg0, jint arg1, jboolean arg2);
		QAndroidJniObject getCustomView();
		jint getDisplayOptions();
		jfloat getElevation();
		jint getHeight();
		jint getHideOffset();
		jint getNavigationItemCount();
		jint getNavigationMode();
		jint getSelectedNavigationIndex();
		QAndroidJniObject getSelectedTab();
		jstring getSubtitle();
		QAndroidJniObject getTabAt(jint arg0);
		jint getTabCount();
		QAndroidJniObject getThemedContext();
		jstring getTitle();
		void hide();
		jboolean isHideOnContentScrollEnabled();
		jboolean isShowing();
		QAndroidJniObject newTab();
		void removeAllTabs();
		void removeOnMenuVisibilityListener(__jni_impl::__JniBaseClass arg0);
		void removeTab(__jni_impl::android::app::ActionBar_Tab arg0);
		void removeTabAt(jint arg0);
		void selectTab(__jni_impl::android::app::ActionBar_Tab arg0);
		void setBackgroundDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setCustomView(__jni_impl::android::view::View arg0);
		void setCustomView(jint arg0);
		void setCustomView(__jni_impl::android::view::View arg0, __jni_impl::android::app::ActionBar_LayoutParams arg1);
		void setDisplayHomeAsUpEnabled(jboolean arg0);
		void setDisplayOptions(jint arg0);
		void setDisplayOptions(jint arg0, jint arg1);
		void setDisplayShowCustomEnabled(jboolean arg0);
		void setDisplayShowHomeEnabled(jboolean arg0);
		void setDisplayShowTitleEnabled(jboolean arg0);
		void setDisplayUseLogoEnabled(jboolean arg0);
		void setElevation(jfloat arg0);
		void setHideOffset(jint arg0);
		void setHideOnContentScrollEnabled(jboolean arg0);
		void setHomeActionContentDescription(jint arg0);
		void setHomeActionContentDescription(jstring arg0);
		void setHomeActionContentDescription(const QString &arg0);
		void setHomeAsUpIndicator(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setHomeAsUpIndicator(jint arg0);
		void setHomeButtonEnabled(jboolean arg0);
		void setIcon(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setIcon(jint arg0);
		void setListNavigationCallbacks(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		void setLogo(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setLogo(jint arg0);
		void setNavigationMode(jint arg0);
		void setSelectedNavigationItem(jint arg0);
		void setSplitBackgroundDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setStackedBackgroundDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setSubtitle(jint arg0);
		void setSubtitle(jstring arg0);
		void setSubtitle(const QString &arg0);
		void setTitle(jint arg0);
		void setTitle(jstring arg0);
		void setTitle(const QString &arg0);
		void show();
	};
} // namespace __jni_impl::android::app

#include "ActionBar_LayoutParams.hpp"
#include "ActionBar_Tab.hpp"
#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/View.hpp"

namespace __jni_impl::android::app
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
	
	// Constructors
	void ActionBar::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.ActionBar",
			"()V"
		);
	}
	
	// Methods
	void ActionBar::addOnMenuVisibilityListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnMenuVisibilityListener",
			"(Landroid/app/ActionBar$OnMenuVisibilityListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ActionBar::addTab(__jni_impl::android::app::ActionBar_Tab arg0)
	{
		__thiz.callMethod<void>(
			"addTab",
			"(Landroid/app/ActionBar$Tab;)V",
			arg0.__jniObject().object()
		);
	}
	void ActionBar::addTab(__jni_impl::android::app::ActionBar_Tab arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"addTab",
			"(Landroid/app/ActionBar$Tab;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ActionBar::addTab(__jni_impl::android::app::ActionBar_Tab arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"addTab",
			"(Landroid/app/ActionBar$Tab;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ActionBar::addTab(__jni_impl::android::app::ActionBar_Tab arg0, jint arg1, jboolean arg2)
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
	void ActionBar::removeOnMenuVisibilityListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnMenuVisibilityListener",
			"(Landroid/app/ActionBar$OnMenuVisibilityListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ActionBar::removeTab(__jni_impl::android::app::ActionBar_Tab arg0)
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
	void ActionBar::selectTab(__jni_impl::android::app::ActionBar_Tab arg0)
	{
		__thiz.callMethod<void>(
			"selectTab",
			"(Landroid/app/ActionBar$Tab;)V",
			arg0.__jniObject().object()
		);
	}
	void ActionBar::setBackgroundDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ActionBar::setCustomView(__jni_impl::android::view::View arg0)
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
	void ActionBar::setCustomView(__jni_impl::android::view::View arg0, __jni_impl::android::app::ActionBar_LayoutParams arg1)
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
	void ActionBar::setHomeActionContentDescription(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setHomeActionContentDescription",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ActionBar::setHomeAsUpIndicator(__jni_impl::android::graphics::drawable::Drawable arg0)
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
	void ActionBar::setIcon(__jni_impl::android::graphics::drawable::Drawable arg0)
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
	void ActionBar::setListNavigationCallbacks(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setListNavigationCallbacks",
			"(Landroid/widget/SpinnerAdapter;Landroid/app/ActionBar$OnNavigationListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ActionBar::setLogo(__jni_impl::android::graphics::drawable::Drawable arg0)
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
	void ActionBar::setSplitBackgroundDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setSplitBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ActionBar::setStackedBackgroundDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
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
	void ActionBar::setSubtitle(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	void ActionBar::setTitle(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ActionBar::show()
	{
		__thiz.callMethod<void>(
			"show",
			"()V"
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class ActionBar : public __jni_impl::android::app::ActionBar
	{
	public:
		ActionBar(QAndroidJniObject obj) { __thiz = obj; }
		ActionBar()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_ACTIONBAR

