#pragma once

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
		QAndroidJniObject onCreateActionView();
		QAndroidJniObject onCreateActionView(__jni_impl::__JniBaseClass arg0);
		jboolean onPerformDefaultAction();
		jboolean overridesItemVisibility();
		void setExtendedSettingsClickListener(__jni_impl::__JniBaseClass arg0);
		void setRouteTypes(jint arg0);
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
	QAndroidJniObject MediaRouteActionProvider::onCreateActionView()
	{
		return __thiz.callObjectMethod(
			"onCreateActionView",
			"()Landroid/view/View;"
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
	void MediaRouteActionProvider::setExtendedSettingsClickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setExtendedSettingsClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.__jniObject().object()
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

