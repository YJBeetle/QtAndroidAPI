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
		
		// QJniObject forward
		template<typename ...Ts> explicit AppWidgetManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppWidgetManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::appwidget::AppWidgetManager getInstance(android::content::Context arg0);
		jboolean bindAppWidgetIdIfAllowed(jint arg0, android::content::ComponentName arg1) const;
		jboolean bindAppWidgetIdIfAllowed(jint arg0, android::content::ComponentName arg1, android::os::Bundle arg2) const;
		jboolean bindAppWidgetIdIfAllowed(jint arg0, android::os::UserHandle arg1, android::content::ComponentName arg2, android::os::Bundle arg3) const;
		JIntArray getAppWidgetIds(android::content::ComponentName arg0) const;
		android::appwidget::AppWidgetProviderInfo getAppWidgetInfo(jint arg0) const;
		android::os::Bundle getAppWidgetOptions(jint arg0) const;
		JObject getInstalledProviders() const;
		JObject getInstalledProvidersForPackage(JString arg0, android::os::UserHandle arg1) const;
		JObject getInstalledProvidersForProfile(android::os::UserHandle arg0) const;
		jboolean isRequestPinAppWidgetSupported() const;
		void notifyAppWidgetViewDataChanged(JIntArray arg0, jint arg1) const;
		void notifyAppWidgetViewDataChanged(jint arg0, jint arg1) const;
		void partiallyUpdateAppWidget(JIntArray arg0, android::widget::RemoteViews arg1) const;
		void partiallyUpdateAppWidget(jint arg0, android::widget::RemoteViews arg1) const;
		jboolean requestPinAppWidget(android::content::ComponentName arg0, android::os::Bundle arg1, android::app::PendingIntent arg2) const;
		void updateAppWidget(JIntArray arg0, android::widget::RemoteViews arg1) const;
		void updateAppWidget(android::content::ComponentName arg0, android::widget::RemoteViews arg1) const;
		void updateAppWidget(jint arg0, android::widget::RemoteViews arg1) const;
		void updateAppWidgetOptions(jint arg0, android::os::Bundle arg1) const;
		void updateAppWidgetProviderInfo(android::content::ComponentName arg0, JString arg1) const;
	};
} // namespace android::appwidget

