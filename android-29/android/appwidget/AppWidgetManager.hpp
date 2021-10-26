#pragma once

#ifndef ANDROID_APPWIDGET_APPWIDGETMANAGER
#define ANDROID_APPWIDGET_APPWIDGETMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::widget
{
	class RemoteViews;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class UserHandle;
}
namespace __jni_impl::android::appwidget
{
	class AppWidgetProviderInfo;
}
namespace __jni_impl::android::app
{
	class PendingIntent;
}

namespace __jni_impl::android::appwidget
{
	class AppWidgetManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_APPWIDGET_BIND();
		static jstring ACTION_APPWIDGET_CONFIGURE();
		static jstring ACTION_APPWIDGET_DELETED();
		static jstring ACTION_APPWIDGET_DISABLED();
		static jstring ACTION_APPWIDGET_ENABLED();
		static jstring ACTION_APPWIDGET_HOST_RESTORED();
		static jstring ACTION_APPWIDGET_OPTIONS_CHANGED();
		static jstring ACTION_APPWIDGET_PICK();
		static jstring ACTION_APPWIDGET_RESTORED();
		static jstring ACTION_APPWIDGET_UPDATE();
		static jstring EXTRA_APPWIDGET_ID();
		static jstring EXTRA_APPWIDGET_IDS();
		static jstring EXTRA_APPWIDGET_OLD_IDS();
		static jstring EXTRA_APPWIDGET_OPTIONS();
		static jstring EXTRA_APPWIDGET_PREVIEW();
		static jstring EXTRA_APPWIDGET_PROVIDER();
		static jstring EXTRA_APPWIDGET_PROVIDER_PROFILE();
		static jstring EXTRA_CUSTOM_EXTRAS();
		static jstring EXTRA_CUSTOM_INFO();
		static jstring EXTRA_HOST_ID();
		static jint INVALID_APPWIDGET_ID();
		static jstring META_DATA_APPWIDGET_PROVIDER();
		static jstring OPTION_APPWIDGET_HOST_CATEGORY();
		static jstring OPTION_APPWIDGET_MAX_HEIGHT();
		static jstring OPTION_APPWIDGET_MAX_WIDTH();
		static jstring OPTION_APPWIDGET_MIN_HEIGHT();
		static jstring OPTION_APPWIDGET_MIN_WIDTH();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance(__jni_impl::android::content::Context arg0);
		void updateAppWidget(jint arg0, __jni_impl::android::widget::RemoteViews arg1);
		void updateAppWidget(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::widget::RemoteViews arg1);
		void updateAppWidget(jintArray arg0, __jni_impl::android::widget::RemoteViews arg1);
		void updateAppWidgetOptions(jint arg0, __jni_impl::android::os::Bundle arg1);
		QAndroidJniObject getAppWidgetOptions(jint arg0);
		void partiallyUpdateAppWidget(jint arg0, __jni_impl::android::widget::RemoteViews arg1);
		void partiallyUpdateAppWidget(jintArray arg0, __jni_impl::android::widget::RemoteViews arg1);
		void updateAppWidgetProviderInfo(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		void updateAppWidgetProviderInfo(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		void notifyAppWidgetViewDataChanged(jint arg0, jint arg1);
		void notifyAppWidgetViewDataChanged(jintArray arg0, jint arg1);
		QAndroidJniObject getInstalledProvidersForProfile(__jni_impl::android::os::UserHandle arg0);
		QAndroidJniObject getInstalledProvidersForPackage(jstring arg0, __jni_impl::android::os::UserHandle arg1);
		QAndroidJniObject getInstalledProvidersForPackage(const QString &arg0, __jni_impl::android::os::UserHandle arg1);
		QAndroidJniObject getInstalledProviders();
		QAndroidJniObject getAppWidgetInfo(jint arg0);
		jboolean bindAppWidgetIdIfAllowed(jint arg0, __jni_impl::android::os::UserHandle arg1, __jni_impl::android::content::ComponentName arg2, __jni_impl::android::os::Bundle arg3);
		jboolean bindAppWidgetIdIfAllowed(jint arg0, __jni_impl::android::content::ComponentName arg1, __jni_impl::android::os::Bundle arg2);
		jboolean bindAppWidgetIdIfAllowed(jint arg0, __jni_impl::android::content::ComponentName arg1);
		jintArray getAppWidgetIds(__jni_impl::android::content::ComponentName arg0);
		jboolean isRequestPinAppWidgetSupported();
		jboolean requestPinAppWidget(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::app::PendingIntent arg2);
	};
} // namespace __jni_impl::android::appwidget

#include "../content/Context.hpp"
#include "../widget/RemoteViews.hpp"
#include "../content/ComponentName.hpp"
#include "../os/Bundle.hpp"
#include "../os/UserHandle.hpp"
#include "AppWidgetProviderInfo.hpp"
#include "../app/PendingIntent.hpp"

namespace __jni_impl::android::appwidget
{
	// Fields
	jstring AppWidgetManager::ACTION_APPWIDGET_BIND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_BIND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppWidgetManager::ACTION_APPWIDGET_CONFIGURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_CONFIGURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppWidgetManager::ACTION_APPWIDGET_DELETED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_DELETED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppWidgetManager::ACTION_APPWIDGET_DISABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_DISABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppWidgetManager::ACTION_APPWIDGET_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppWidgetManager::ACTION_APPWIDGET_HOST_RESTORED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_HOST_RESTORED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppWidgetManager::ACTION_APPWIDGET_OPTIONS_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_OPTIONS_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppWidgetManager::ACTION_APPWIDGET_PICK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_PICK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppWidgetManager::ACTION_APPWIDGET_RESTORED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_RESTORED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppWidgetManager::ACTION_APPWIDGET_UPDATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_UPDATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppWidgetManager::EXTRA_APPWIDGET_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_APPWIDGET_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppWidgetManager::EXTRA_APPWIDGET_IDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_APPWIDGET_IDS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppWidgetManager::EXTRA_APPWIDGET_OLD_IDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_APPWIDGET_OLD_IDS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppWidgetManager::EXTRA_APPWIDGET_OPTIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_APPWIDGET_OPTIONS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppWidgetManager::EXTRA_APPWIDGET_PREVIEW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_APPWIDGET_PREVIEW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppWidgetManager::EXTRA_APPWIDGET_PROVIDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_APPWIDGET_PROVIDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppWidgetManager::EXTRA_APPWIDGET_PROVIDER_PROFILE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_APPWIDGET_PROVIDER_PROFILE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppWidgetManager::EXTRA_CUSTOM_EXTRAS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_CUSTOM_EXTRAS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppWidgetManager::EXTRA_CUSTOM_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_CUSTOM_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppWidgetManager::EXTRA_HOST_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_HOST_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AppWidgetManager::INVALID_APPWIDGET_ID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetManager",
			"INVALID_APPWIDGET_ID"
		);
	}
	jstring AppWidgetManager::META_DATA_APPWIDGET_PROVIDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"META_DATA_APPWIDGET_PROVIDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppWidgetManager::OPTION_APPWIDGET_HOST_CATEGORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"OPTION_APPWIDGET_HOST_CATEGORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppWidgetManager::OPTION_APPWIDGET_MAX_HEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"OPTION_APPWIDGET_MAX_HEIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppWidgetManager::OPTION_APPWIDGET_MAX_WIDTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"OPTION_APPWIDGET_MAX_WIDTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppWidgetManager::OPTION_APPWIDGET_MIN_HEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"OPTION_APPWIDGET_MIN_HEIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppWidgetManager::OPTION_APPWIDGET_MIN_WIDTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"OPTION_APPWIDGET_MIN_WIDTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void AppWidgetManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.appwidget.AppWidgetManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AppWidgetManager::getInstance(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.appwidget.AppWidgetManager",
			"getInstance",
			"(Landroid/content/Context;)Landroid/appwidget/AppWidgetManager;",
			arg0.__jniObject().object()
		);
	}
	void AppWidgetManager::updateAppWidget(jint arg0, __jni_impl::android::widget::RemoteViews arg1)
	{
		__thiz.callMethod<void>(
			"updateAppWidget",
			"(ILandroid/widget/RemoteViews;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AppWidgetManager::updateAppWidget(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::widget::RemoteViews arg1)
	{
		__thiz.callMethod<void>(
			"updateAppWidget",
			"(Landroid/content/ComponentName;Landroid/widget/RemoteViews;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void AppWidgetManager::updateAppWidget(jintArray arg0, __jni_impl::android::widget::RemoteViews arg1)
	{
		__thiz.callMethod<void>(
			"updateAppWidget",
			"([ILandroid/widget/RemoteViews;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AppWidgetManager::updateAppWidgetOptions(jint arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"updateAppWidgetOptions",
			"(ILandroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AppWidgetManager::getAppWidgetOptions(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getAppWidgetOptions",
			"(I)Landroid/os/Bundle;",
			arg0
		);
	}
	void AppWidgetManager::partiallyUpdateAppWidget(jint arg0, __jni_impl::android::widget::RemoteViews arg1)
	{
		__thiz.callMethod<void>(
			"partiallyUpdateAppWidget",
			"(ILandroid/widget/RemoteViews;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AppWidgetManager::partiallyUpdateAppWidget(jintArray arg0, __jni_impl::android::widget::RemoteViews arg1)
	{
		__thiz.callMethod<void>(
			"partiallyUpdateAppWidget",
			"([ILandroid/widget/RemoteViews;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AppWidgetManager::updateAppWidgetProviderInfo(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"updateAppWidgetProviderInfo",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AppWidgetManager::updateAppWidgetProviderInfo(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"updateAppWidgetProviderInfo",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void AppWidgetManager::notifyAppWidgetViewDataChanged(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"notifyAppWidgetViewDataChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	void AppWidgetManager::notifyAppWidgetViewDataChanged(jintArray arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"notifyAppWidgetViewDataChanged",
			"([II)V",
			arg0,
			arg1
		);
	}
	QAndroidJniObject AppWidgetManager::getInstalledProvidersForProfile(__jni_impl::android::os::UserHandle arg0)
	{
		return __thiz.callObjectMethod(
			"getInstalledProvidersForProfile",
			"(Landroid/os/UserHandle;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AppWidgetManager::getInstalledProvidersForPackage(jstring arg0, __jni_impl::android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"getInstalledProvidersForPackage",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Ljava/util/List;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AppWidgetManager::getInstalledProvidersForPackage(const QString &arg0, __jni_impl::android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"getInstalledProvidersForPackage",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Ljava/util/List;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AppWidgetManager::getInstalledProviders()
	{
		return __thiz.callObjectMethod(
			"getInstalledProviders",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject AppWidgetManager::getAppWidgetInfo(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getAppWidgetInfo",
			"(I)Landroid/appwidget/AppWidgetProviderInfo;",
			arg0
		);
	}
	jboolean AppWidgetManager::bindAppWidgetIdIfAllowed(jint arg0, __jni_impl::android::os::UserHandle arg1, __jni_impl::android::content::ComponentName arg2, __jni_impl::android::os::Bundle arg3)
	{
		return __thiz.callMethod<jboolean>(
			"bindAppWidgetIdIfAllowed",
			"(ILandroid/os/UserHandle;Landroid/content/ComponentName;Landroid/os/Bundle;)Z",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jboolean AppWidgetManager::bindAppWidgetIdIfAllowed(jint arg0, __jni_impl::android::content::ComponentName arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callMethod<jboolean>(
			"bindAppWidgetIdIfAllowed",
			"(ILandroid/content/ComponentName;Landroid/os/Bundle;)Z",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean AppWidgetManager::bindAppWidgetIdIfAllowed(jint arg0, __jni_impl::android::content::ComponentName arg1)
	{
		return __thiz.callMethod<jboolean>(
			"bindAppWidgetIdIfAllowed",
			"(ILandroid/content/ComponentName;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jintArray AppWidgetManager::getAppWidgetIds(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getAppWidgetIds",
			"(Landroid/content/ComponentName;)[I",
			arg0.__jniObject().object()
		).object<jintArray>();
	}
	jboolean AppWidgetManager::isRequestPinAppWidgetSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isRequestPinAppWidgetSupported",
			"()Z"
		);
	}
	jboolean AppWidgetManager::requestPinAppWidget(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::app::PendingIntent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"requestPinAppWidget",
			"(Landroid/content/ComponentName;Landroid/os/Bundle;Landroid/app/PendingIntent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::appwidget

namespace android::appwidget
{
	class AppWidgetManager : public __jni_impl::android::appwidget::AppWidgetManager
	{
	public:
		AppWidgetManager(QAndroidJniObject obj) { __thiz = obj; }
		AppWidgetManager()
		{
			__constructor();
		}
	};
} // namespace android::appwidget

#endif // ANDROID_APPWIDGET_APPWIDGETMANAGER

