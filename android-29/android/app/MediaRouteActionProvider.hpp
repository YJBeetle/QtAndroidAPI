#pragma once

#ifndef ANDROID_APP_MEDIAROUTEACTIONPROVIDER
#define ANDROID_APP_MEDIAROUTEACTIONPROVIDER

#include "../../__JniBaseClass.hpp"
#include "../view/ActionProvider.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::app
{
	class MediaRouteActionProvider : public __jni_impl::android::view::ActionProvider
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		jboolean isVisible();
		void setRouteTypes(jint arg0);
		void setExtendedSettingsClickListener(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject onCreateActionView(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject onCreateActionView();
		jboolean onPerformDefaultAction();
		jboolean overridesItemVisibility();
	};
} // namespace __jni_impl::android::app

#include "../content/Context.hpp"
#include "../view/View.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void MediaRouteActionProvider::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.MediaRouteActionProvider",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean MediaRouteActionProvider::isVisible()
	{
		return __thiz.callMethod<jboolean>(
			"isVisible",
			"()Z"
		);
	}
	void MediaRouteActionProvider::setRouteTypes(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRouteTypes",
			"(I)V",
			arg0
		);
	}
	void MediaRouteActionProvider::setExtendedSettingsClickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setExtendedSettingsClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MediaRouteActionProvider::onCreateActionView(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"onCreateActionView",
			"(Landroid/view/MenuItem;)Landroid/view/View;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MediaRouteActionProvider::onCreateActionView()
	{
		return __thiz.callObjectMethod(
			"onCreateActionView",
			"()Landroid/view/View;"
		);
	}
	jboolean MediaRouteActionProvider::onPerformDefaultAction()
	{
		return __thiz.callMethod<jboolean>(
			"onPerformDefaultAction",
			"()Z"
		);
	}
	jboolean MediaRouteActionProvider::overridesItemVisibility()
	{
		return __thiz.callMethod<jboolean>(
			"overridesItemVisibility",
			"()Z"
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class MediaRouteActionProvider : public __jni_impl::android::app::MediaRouteActionProvider
	{
	public:
		MediaRouteActionProvider(QAndroidJniObject obj) { __thiz = obj; }
		MediaRouteActionProvider(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_MEDIAROUTEACTIONPROVIDER

