#pragma once

#include "../content/BroadcastReceiver.hpp"

class JIntArray;
namespace android::appwidget
{
	class AppWidgetManager;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::os
{
	class Bundle;
}

namespace android::appwidget
{
	class AppWidgetProvider : public android::content::BroadcastReceiver
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppWidgetProvider(const char *className, const char *sig, Ts...agv) : android::content::BroadcastReceiver(className, sig, std::forward<Ts>(agv)...) {}
		AppWidgetProvider(QAndroidJniObject obj);
		
		// Constructors
		AppWidgetProvider();
		
		// Methods
		void onAppWidgetOptionsChanged(android::content::Context arg0, android::appwidget::AppWidgetManager arg1, jint arg2, android::os::Bundle arg3);
		void onDeleted(android::content::Context arg0, JIntArray arg1);
		void onDisabled(android::content::Context arg0);
		void onEnabled(android::content::Context arg0);
		void onReceive(android::content::Context arg0, android::content::Intent arg1);
		void onRestored(android::content::Context arg0, JIntArray arg1, JIntArray arg2);
		void onUpdate(android::content::Context arg0, android::appwidget::AppWidgetManager arg1, JIntArray arg2);
	};
} // namespace android::appwidget

