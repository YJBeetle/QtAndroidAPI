#pragma once

#ifndef ANDROID_VIEW_ACTIONPROVIDER
#define ANDROID_VIEW_ACTIONPROVIDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::view
{
	class ActionProvider : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		jboolean isVisible();
		QAndroidJniObject onCreateActionView();
		QAndroidJniObject onCreateActionView(__jni_impl::__JniBaseClass arg0);
		jboolean onPerformDefaultAction();
		jboolean overridesItemVisibility();
		void refreshVisibility();
		void onPrepareSubMenu(__jni_impl::__JniBaseClass arg0);
		void setVisibilityListener(__jni_impl::__JniBaseClass arg0);
		jboolean hasSubMenu();
	};
} // namespace __jni_impl::android::view

#include "../content/Context.hpp"
#include "View.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void ActionProvider::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.ActionProvider",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean ActionProvider::isVisible()
	{
		return __thiz.callMethod<jboolean>(
			"isVisible",
			"()Z");
	}
	QAndroidJniObject ActionProvider::onCreateActionView()
	{
		return __thiz.callObjectMethod(
			"onCreateActionView",
			"()Landroid/view/View;");
	}
	QAndroidJniObject ActionProvider::onCreateActionView(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"onCreateActionView",
			"(Landroid/view/MenuItem;)Landroid/view/View;",
			arg0.__jniObject().object());
	}
	jboolean ActionProvider::onPerformDefaultAction()
	{
		return __thiz.callMethod<jboolean>(
			"onPerformDefaultAction",
			"()Z");
	}
	jboolean ActionProvider::overridesItemVisibility()
	{
		return __thiz.callMethod<jboolean>(
			"overridesItemVisibility",
			"()Z");
	}
	void ActionProvider::refreshVisibility()
	{
		__thiz.callMethod<void>(
			"refreshVisibility",
			"()V");
	}
	void ActionProvider::onPrepareSubMenu(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onPrepareSubMenu",
			"(Landroid/view/SubMenu;)V",
			arg0.__jniObject().object());
	}
	void ActionProvider::setVisibilityListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setVisibilityListener",
			"(Landroid/view/ActionProvider$VisibilityListener;)V",
			arg0.__jniObject().object());
	}
	jboolean ActionProvider::hasSubMenu()
	{
		return __thiz.callMethod<jboolean>(
			"hasSubMenu",
			"()Z");
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class ActionProvider : public __jni_impl::android::view::ActionProvider
	{
	public:
		ActionProvider(QAndroidJniObject obj) { __thiz = obj; }
		ActionProvider(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_ACTIONPROVIDER

