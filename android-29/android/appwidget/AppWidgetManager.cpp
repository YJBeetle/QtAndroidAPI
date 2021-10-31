#include "../app/PendingIntent.hpp"
#include "./AppWidgetProviderInfo.hpp"
#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "../os/Bundle.hpp"
#include "../os/UserHandle.hpp"
#include "../widget/RemoteViews.hpp"
#include "./AppWidgetManager.hpp"

namespace android::appwidget
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
	
	AppWidgetManager::AppWidgetManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject AppWidgetManager::getInstance(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.appwidget.AppWidgetManager",
			"getInstance",
			"(Landroid/content/Context;)Landroid/appwidget/AppWidgetManager;",
			arg0.__jniObject().object()
		);
	}
	jboolean AppWidgetManager::bindAppWidgetIdIfAllowed(jint arg0, android::content::ComponentName arg1)
	{
		return __thiz.callMethod<jboolean>(
			"bindAppWidgetIdIfAllowed",
			"(ILandroid/content/ComponentName;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean AppWidgetManager::bindAppWidgetIdIfAllowed(jint arg0, android::content::ComponentName arg1, android::os::Bundle arg2)
	{
		return __thiz.callMethod<jboolean>(
			"bindAppWidgetIdIfAllowed",
			"(ILandroid/content/ComponentName;Landroid/os/Bundle;)Z",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean AppWidgetManager::bindAppWidgetIdIfAllowed(jint arg0, android::os::UserHandle arg1, android::content::ComponentName arg2, android::os::Bundle arg3)
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
	jintArray AppWidgetManager::getAppWidgetIds(android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getAppWidgetIds",
			"(Landroid/content/ComponentName;)[I",
			arg0.__jniObject().object()
		).object<jintArray>();
	}
	QAndroidJniObject AppWidgetManager::getAppWidgetInfo(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getAppWidgetInfo",
			"(I)Landroid/appwidget/AppWidgetProviderInfo;",
			arg0
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
	QAndroidJniObject AppWidgetManager::getInstalledProviders()
	{
		return __thiz.callObjectMethod(
			"getInstalledProviders",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject AppWidgetManager::getInstalledProvidersForPackage(jstring arg0, android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"getInstalledProvidersForPackage",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Ljava/util/List;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AppWidgetManager::getInstalledProvidersForProfile(android::os::UserHandle arg0)
	{
		return __thiz.callObjectMethod(
			"getInstalledProvidersForProfile",
			"(Landroid/os/UserHandle;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
	jboolean AppWidgetManager::isRequestPinAppWidgetSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isRequestPinAppWidgetSupported",
			"()Z"
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
	void AppWidgetManager::notifyAppWidgetViewDataChanged(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"notifyAppWidgetViewDataChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	void AppWidgetManager::partiallyUpdateAppWidget(jintArray arg0, android::widget::RemoteViews arg1)
	{
		__thiz.callMethod<void>(
			"partiallyUpdateAppWidget",
			"([ILandroid/widget/RemoteViews;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AppWidgetManager::partiallyUpdateAppWidget(jint arg0, android::widget::RemoteViews arg1)
	{
		__thiz.callMethod<void>(
			"partiallyUpdateAppWidget",
			"(ILandroid/widget/RemoteViews;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean AppWidgetManager::requestPinAppWidget(android::content::ComponentName arg0, android::os::Bundle arg1, android::app::PendingIntent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"requestPinAppWidget",
			"(Landroid/content/ComponentName;Landroid/os/Bundle;Landroid/app/PendingIntent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void AppWidgetManager::updateAppWidget(jintArray arg0, android::widget::RemoteViews arg1)
	{
		__thiz.callMethod<void>(
			"updateAppWidget",
			"([ILandroid/widget/RemoteViews;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AppWidgetManager::updateAppWidget(android::content::ComponentName arg0, android::widget::RemoteViews arg1)
	{
		__thiz.callMethod<void>(
			"updateAppWidget",
			"(Landroid/content/ComponentName;Landroid/widget/RemoteViews;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void AppWidgetManager::updateAppWidget(jint arg0, android::widget::RemoteViews arg1)
	{
		__thiz.callMethod<void>(
			"updateAppWidget",
			"(ILandroid/widget/RemoteViews;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AppWidgetManager::updateAppWidgetOptions(jint arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"updateAppWidgetOptions",
			"(ILandroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AppWidgetManager::updateAppWidgetProviderInfo(android::content::ComponentName arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"updateAppWidgetProviderInfo",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::appwidget

