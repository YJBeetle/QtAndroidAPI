#pragma once

#include "../../JObject.hpp"

class JIntArray;
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
class JString;

namespace android::appwidget
{
	class AppWidgetManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_APPWIDGET_BIND();
		static JString ACTION_APPWIDGET_CONFIGURE();
		static JString ACTION_APPWIDGET_DELETED();
		static JString ACTION_APPWIDGET_DISABLED();
		static JString ACTION_APPWIDGET_ENABLED();
		static JString ACTION_APPWIDGET_HOST_RESTORED();
		static JString ACTION_APPWIDGET_OPTIONS_CHANGED();
		static JString ACTION_APPWIDGET_PICK();
		static JString ACTION_APPWIDGET_RESTORED();
		static JString ACTION_APPWIDGET_UPDATE();
		static JString EXTRA_APPWIDGET_ID();
		static JString EXTRA_APPWIDGET_IDS();
		static JString EXTRA_APPWIDGET_OLD_IDS();
		static JString EXTRA_APPWIDGET_OPTIONS();
		static JString EXTRA_APPWIDGET_PREVIEW();
		static JString EXTRA_APPWIDGET_PROVIDER();
		static JString EXTRA_APPWIDGET_PROVIDER_PROFILE();
		static JString EXTRA_CUSTOM_EXTRAS();
		static JString EXTRA_CUSTOM_INFO();
		static JString EXTRA_HOST_ID();
		static jint INVALID_APPWIDGET_ID();
		static JString META_DATA_APPWIDGET_PROVIDER();
		static JString OPTION_APPWIDGET_HOST_CATEGORY();
		static JString OPTION_APPWIDGET_MAX_HEIGHT();
		static JString OPTION_APPWIDGET_MAX_WIDTH();
		static JString OPTION_APPWIDGET_MIN_HEIGHT();
		static JString OPTION_APPWIDGET_MIN_WIDTH();
		static JString OPTION_APPWIDGET_RESTORE_COMPLETED();
		static JString OPTION_APPWIDGET_SIZES();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppWidgetManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppWidgetManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::appwidget::AppWidgetManager getInstance(android::content::Context arg0);
		jboolean bindAppWidgetIdIfAllowed(jint arg0, android::content::ComponentName arg1);
		jboolean bindAppWidgetIdIfAllowed(jint arg0, android::content::ComponentName arg1, android::os::Bundle arg2);
		jboolean bindAppWidgetIdIfAllowed(jint arg0, android::os::UserHandle arg1, android::content::ComponentName arg2, android::os::Bundle arg3);
		JIntArray getAppWidgetIds(android::content::ComponentName arg0);
		android::appwidget::AppWidgetProviderInfo getAppWidgetInfo(jint arg0);
		android::os::Bundle getAppWidgetOptions(jint arg0);
		JObject getInstalledProviders();
		JObject getInstalledProvidersForPackage(JString arg0, android::os::UserHandle arg1);
		JObject getInstalledProvidersForProfile(android::os::UserHandle arg0);
		jboolean isRequestPinAppWidgetSupported();
		void notifyAppWidgetViewDataChanged(JIntArray arg0, jint arg1);
		void notifyAppWidgetViewDataChanged(jint arg0, jint arg1);
		void partiallyUpdateAppWidget(JIntArray arg0, android::widget::RemoteViews arg1);
		void partiallyUpdateAppWidget(jint arg0, android::widget::RemoteViews arg1);
		jboolean requestPinAppWidget(android::content::ComponentName arg0, android::os::Bundle arg1, android::app::PendingIntent arg2);
		void updateAppWidget(JIntArray arg0, android::widget::RemoteViews arg1);
		void updateAppWidget(android::content::ComponentName arg0, android::widget::RemoteViews arg1);
		void updateAppWidget(jint arg0, android::widget::RemoteViews arg1);
		void updateAppWidgetOptions(jint arg0, android::os::Bundle arg1);
		void updateAppWidgetProviderInfo(android::content::ComponentName arg0, JString arg1);
	};
} // namespace android::appwidget

