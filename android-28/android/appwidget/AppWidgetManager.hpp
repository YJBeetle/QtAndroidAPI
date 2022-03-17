#pragma once

#include "../../JIntArray.hpp"
#include "../app/PendingIntent.def.hpp"
#include "./AppWidgetProviderInfo.def.hpp"
#include "../content/ComponentName.def.hpp"
#include "../content/Context.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/UserHandle.def.hpp"
#include "../widget/RemoteViews.def.hpp"
#include "../../JString.hpp"
#include "./AppWidgetManager.def.hpp"

namespace android::appwidget
{
	// Fields
	inline JString AppWidgetManager::ACTION_APPWIDGET_BIND()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_BIND",
			"Ljava/lang/String;"
		);
	}
	inline JString AppWidgetManager::ACTION_APPWIDGET_CONFIGURE()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_CONFIGURE",
			"Ljava/lang/String;"
		);
	}
	inline JString AppWidgetManager::ACTION_APPWIDGET_DELETED()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_DELETED",
			"Ljava/lang/String;"
		);
	}
	inline JString AppWidgetManager::ACTION_APPWIDGET_DISABLED()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_DISABLED",
			"Ljava/lang/String;"
		);
	}
	inline JString AppWidgetManager::ACTION_APPWIDGET_ENABLED()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_ENABLED",
			"Ljava/lang/String;"
		);
	}
	inline JString AppWidgetManager::ACTION_APPWIDGET_HOST_RESTORED()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_HOST_RESTORED",
			"Ljava/lang/String;"
		);
	}
	inline JString AppWidgetManager::ACTION_APPWIDGET_OPTIONS_CHANGED()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_OPTIONS_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString AppWidgetManager::ACTION_APPWIDGET_PICK()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_PICK",
			"Ljava/lang/String;"
		);
	}
	inline JString AppWidgetManager::ACTION_APPWIDGET_RESTORED()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_RESTORED",
			"Ljava/lang/String;"
		);
	}
	inline JString AppWidgetManager::ACTION_APPWIDGET_UPDATE()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_UPDATE",
			"Ljava/lang/String;"
		);
	}
	inline JString AppWidgetManager::EXTRA_APPWIDGET_ID()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_APPWIDGET_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString AppWidgetManager::EXTRA_APPWIDGET_IDS()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_APPWIDGET_IDS",
			"Ljava/lang/String;"
		);
	}
	inline JString AppWidgetManager::EXTRA_APPWIDGET_OLD_IDS()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_APPWIDGET_OLD_IDS",
			"Ljava/lang/String;"
		);
	}
	inline JString AppWidgetManager::EXTRA_APPWIDGET_OPTIONS()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_APPWIDGET_OPTIONS",
			"Ljava/lang/String;"
		);
	}
	inline JString AppWidgetManager::EXTRA_APPWIDGET_PREVIEW()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_APPWIDGET_PREVIEW",
			"Ljava/lang/String;"
		);
	}
	inline JString AppWidgetManager::EXTRA_APPWIDGET_PROVIDER()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_APPWIDGET_PROVIDER",
			"Ljava/lang/String;"
		);
	}
	inline JString AppWidgetManager::EXTRA_APPWIDGET_PROVIDER_PROFILE()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_APPWIDGET_PROVIDER_PROFILE",
			"Ljava/lang/String;"
		);
	}
	inline JString AppWidgetManager::EXTRA_CUSTOM_EXTRAS()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_CUSTOM_EXTRAS",
			"Ljava/lang/String;"
		);
	}
	inline JString AppWidgetManager::EXTRA_CUSTOM_INFO()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_CUSTOM_INFO",
			"Ljava/lang/String;"
		);
	}
	inline JString AppWidgetManager::EXTRA_HOST_ID()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_HOST_ID",
			"Ljava/lang/String;"
		);
	}
	inline jint AppWidgetManager::INVALID_APPWIDGET_ID()
	{
		return getStaticField<jint>(
			"android.appwidget.AppWidgetManager",
			"INVALID_APPWIDGET_ID"
		);
	}
	inline JString AppWidgetManager::META_DATA_APPWIDGET_PROVIDER()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"META_DATA_APPWIDGET_PROVIDER",
			"Ljava/lang/String;"
		);
	}
	inline JString AppWidgetManager::OPTION_APPWIDGET_HOST_CATEGORY()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"OPTION_APPWIDGET_HOST_CATEGORY",
			"Ljava/lang/String;"
		);
	}
	inline JString AppWidgetManager::OPTION_APPWIDGET_MAX_HEIGHT()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"OPTION_APPWIDGET_MAX_HEIGHT",
			"Ljava/lang/String;"
		);
	}
	inline JString AppWidgetManager::OPTION_APPWIDGET_MAX_WIDTH()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"OPTION_APPWIDGET_MAX_WIDTH",
			"Ljava/lang/String;"
		);
	}
	inline JString AppWidgetManager::OPTION_APPWIDGET_MIN_HEIGHT()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"OPTION_APPWIDGET_MIN_HEIGHT",
			"Ljava/lang/String;"
		);
	}
	inline JString AppWidgetManager::OPTION_APPWIDGET_MIN_WIDTH()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"OPTION_APPWIDGET_MIN_WIDTH",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::appwidget::AppWidgetManager AppWidgetManager::getInstance(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.appwidget.AppWidgetManager",
			"getInstance",
			"(Landroid/content/Context;)Landroid/appwidget/AppWidgetManager;",
			arg0.object()
		);
	}
	inline jboolean AppWidgetManager::bindAppWidgetIdIfAllowed(jint arg0, android::content::ComponentName arg1) const
	{
		return callMethod<jboolean>(
			"bindAppWidgetIdIfAllowed",
			"(ILandroid/content/ComponentName;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean AppWidgetManager::bindAppWidgetIdIfAllowed(jint arg0, android::content::ComponentName arg1, android::os::Bundle arg2) const
	{
		return callMethod<jboolean>(
			"bindAppWidgetIdIfAllowed",
			"(ILandroid/content/ComponentName;Landroid/os/Bundle;)Z",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline jboolean AppWidgetManager::bindAppWidgetIdIfAllowed(jint arg0, android::os::UserHandle arg1, android::content::ComponentName arg2, android::os::Bundle arg3) const
	{
		return callMethod<jboolean>(
			"bindAppWidgetIdIfAllowed",
			"(ILandroid/os/UserHandle;Landroid/content/ComponentName;Landroid/os/Bundle;)Z",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline JIntArray AppWidgetManager::getAppWidgetIds(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getAppWidgetIds",
			"(Landroid/content/ComponentName;)[I",
			arg0.object()
		);
	}
	inline android::appwidget::AppWidgetProviderInfo AppWidgetManager::getAppWidgetInfo(jint arg0) const
	{
		return callObjectMethod(
			"getAppWidgetInfo",
			"(I)Landroid/appwidget/AppWidgetProviderInfo;",
			arg0
		);
	}
	inline android::os::Bundle AppWidgetManager::getAppWidgetOptions(jint arg0) const
	{
		return callObjectMethod(
			"getAppWidgetOptions",
			"(I)Landroid/os/Bundle;",
			arg0
		);
	}
	inline JObject AppWidgetManager::getInstalledProviders() const
	{
		return callObjectMethod(
			"getInstalledProviders",
			"()Ljava/util/List;"
		);
	}
	inline JObject AppWidgetManager::getInstalledProvidersForPackage(JString arg0, android::os::UserHandle arg1) const
	{
		return callObjectMethod(
			"getInstalledProvidersForPackage",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Ljava/util/List;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject AppWidgetManager::getInstalledProvidersForProfile(android::os::UserHandle arg0) const
	{
		return callObjectMethod(
			"getInstalledProvidersForProfile",
			"(Landroid/os/UserHandle;)Ljava/util/List;",
			arg0.object()
		);
	}
	inline jboolean AppWidgetManager::isRequestPinAppWidgetSupported() const
	{
		return callMethod<jboolean>(
			"isRequestPinAppWidgetSupported",
			"()Z"
		);
	}
	inline void AppWidgetManager::notifyAppWidgetViewDataChanged(JIntArray arg0, jint arg1) const
	{
		callMethod<void>(
			"notifyAppWidgetViewDataChanged",
			"([II)V",
			arg0.object<jintArray>(),
			arg1
		);
	}
	inline void AppWidgetManager::notifyAppWidgetViewDataChanged(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"notifyAppWidgetViewDataChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void AppWidgetManager::partiallyUpdateAppWidget(JIntArray arg0, android::widget::RemoteViews arg1) const
	{
		callMethod<void>(
			"partiallyUpdateAppWidget",
			"([ILandroid/widget/RemoteViews;)V",
			arg0.object<jintArray>(),
			arg1.object()
		);
	}
	inline void AppWidgetManager::partiallyUpdateAppWidget(jint arg0, android::widget::RemoteViews arg1) const
	{
		callMethod<void>(
			"partiallyUpdateAppWidget",
			"(ILandroid/widget/RemoteViews;)V",
			arg0,
			arg1.object()
		);
	}
	inline jboolean AppWidgetManager::requestPinAppWidget(android::content::ComponentName arg0, android::os::Bundle arg1, android::app::PendingIntent arg2) const
	{
		return callMethod<jboolean>(
			"requestPinAppWidget",
			"(Landroid/content/ComponentName;Landroid/os/Bundle;Landroid/app/PendingIntent;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void AppWidgetManager::updateAppWidget(JIntArray arg0, android::widget::RemoteViews arg1) const
	{
		callMethod<void>(
			"updateAppWidget",
			"([ILandroid/widget/RemoteViews;)V",
			arg0.object<jintArray>(),
			arg1.object()
		);
	}
	inline void AppWidgetManager::updateAppWidget(android::content::ComponentName arg0, android::widget::RemoteViews arg1) const
	{
		callMethod<void>(
			"updateAppWidget",
			"(Landroid/content/ComponentName;Landroid/widget/RemoteViews;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void AppWidgetManager::updateAppWidget(jint arg0, android::widget::RemoteViews arg1) const
	{
		callMethod<void>(
			"updateAppWidget",
			"(ILandroid/widget/RemoteViews;)V",
			arg0,
			arg1.object()
		);
	}
	inline void AppWidgetManager::updateAppWidgetOptions(jint arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"updateAppWidgetOptions",
			"(ILandroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
	inline void AppWidgetManager::updateAppWidgetProviderInfo(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"updateAppWidgetProviderInfo",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
} // namespace android::appwidget

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::appwidget;
#endif
