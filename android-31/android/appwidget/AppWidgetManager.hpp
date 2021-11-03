#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::appwidget
{
	class AppWidgetProviderInfo;
}
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class UserHandle;
}
namespace android::widget
{
	class RemoteViews;
}

namespace android::appwidget
{
	class AppWidgetManager : public JObject
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
		static jstring OPTION_APPWIDGET_RESTORE_COMPLETED();
		static jstring OPTION_APPWIDGET_SIZES();
		
		// QJniObject forward
		template<typename ...Ts> explicit AppWidgetManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppWidgetManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::appwidget::AppWidgetManager getInstance(android::content::Context arg0);
		jboolean bindAppWidgetIdIfAllowed(jint arg0, android::content::ComponentName arg1);
		jboolean bindAppWidgetIdIfAllowed(jint arg0, android::content::ComponentName arg1, android::os::Bundle arg2);
		jboolean bindAppWidgetIdIfAllowed(jint arg0, android::os::UserHandle arg1, android::content::ComponentName arg2, android::os::Bundle arg3);
		jintArray getAppWidgetIds(android::content::ComponentName arg0);
		android::appwidget::AppWidgetProviderInfo getAppWidgetInfo(jint arg0);
		android::os::Bundle getAppWidgetOptions(jint arg0);
		JObject getInstalledProviders();
		JObject getInstalledProvidersForPackage(jstring arg0, android::os::UserHandle arg1);
		JObject getInstalledProvidersForProfile(android::os::UserHandle arg0);
		jboolean isRequestPinAppWidgetSupported();
		void notifyAppWidgetViewDataChanged(jintArray arg0, jint arg1);
		void notifyAppWidgetViewDataChanged(jint arg0, jint arg1);
		void partiallyUpdateAppWidget(jintArray arg0, android::widget::RemoteViews arg1);
		void partiallyUpdateAppWidget(jint arg0, android::widget::RemoteViews arg1);
		jboolean requestPinAppWidget(android::content::ComponentName arg0, android::os::Bundle arg1, android::app::PendingIntent arg2);
		void updateAppWidget(jintArray arg0, android::widget::RemoteViews arg1);
		void updateAppWidget(android::content::ComponentName arg0, android::widget::RemoteViews arg1);
		void updateAppWidget(jint arg0, android::widget::RemoteViews arg1);
		void updateAppWidgetOptions(jint arg0, android::os::Bundle arg1);
		void updateAppWidgetProviderInfo(android::content::ComponentName arg0, jstring arg1);
	};
} // namespace android::appwidget

