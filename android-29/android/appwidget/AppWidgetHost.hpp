#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class Activity;
}
namespace __jni_impl::android::appwidget
{
	class AppWidgetHostView;
}
namespace __jni_impl::android::appwidget
{
	class AppWidgetProviderInfo;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::appwidget
{
	class AppWidgetHost : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1);
		
		// Methods
		static void deleteAllHosts();
		jint allocateAppWidgetId();
		QAndroidJniObject createView(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::appwidget::AppWidgetProviderInfo arg2);
		void deleteAppWidgetId(jint arg0);
		void deleteHost();
		jintArray getAppWidgetIds();
		void startAppWidgetConfigureActivityForResult(__jni_impl::android::app::Activity arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::os::Bundle arg4);
		void startListening();
		void stopListening();
	};
} // namespace __jni_impl::android::appwidget

#include "../app/Activity.hpp"
#include "./AppWidgetHostView.hpp"
#include "./AppWidgetProviderInfo.hpp"
#include "../content/Context.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::appwidget
{
	// Fields
	
	// Constructors
	void AppWidgetHost::__constructor(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.appwidget.AppWidgetHost",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void AppWidgetHost::deleteAllHosts()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.appwidget.AppWidgetHost",
			"deleteAllHosts",
			"()V"
		);
	}
	jint AppWidgetHost::allocateAppWidgetId()
	{
		return __thiz.callMethod<jint>(
			"allocateAppWidgetId",
			"()I"
		);
	}
	QAndroidJniObject AppWidgetHost::createView(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::appwidget::AppWidgetProviderInfo arg2)
	{
		return __thiz.callObjectMethod(
			"createView",
			"(Landroid/content/Context;ILandroid/appwidget/AppWidgetProviderInfo;)Landroid/appwidget/AppWidgetHostView;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void AppWidgetHost::deleteAppWidgetId(jint arg0)
	{
		__thiz.callMethod<void>(
			"deleteAppWidgetId",
			"(I)V",
			arg0
		);
	}
	void AppWidgetHost::deleteHost()
	{
		__thiz.callMethod<void>(
			"deleteHost",
			"()V"
		);
	}
	jintArray AppWidgetHost::getAppWidgetIds()
	{
		return __thiz.callObjectMethod(
			"getAppWidgetIds",
			"()[I"
		).object<jintArray>();
	}
	void AppWidgetHost::startAppWidgetConfigureActivityForResult(__jni_impl::android::app::Activity arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::os::Bundle arg4)
	{
		__thiz.callMethod<void>(
			"startAppWidgetConfigureActivityForResult",
			"(Landroid/app/Activity;IIILandroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void AppWidgetHost::startListening()
	{
		__thiz.callMethod<void>(
			"startListening",
			"()V"
		);
	}
	void AppWidgetHost::stopListening()
	{
		__thiz.callMethod<void>(
			"stopListening",
			"()V"
		);
	}
} // namespace __jni_impl::android::appwidget

namespace android::appwidget
{
	class AppWidgetHost : public __jni_impl::android::appwidget::AppWidgetHost
	{
	public:
		AppWidgetHost(QAndroidJniObject obj) { __thiz = obj; }
		AppWidgetHost(__jni_impl::android::content::Context arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::appwidget

