#pragma once

#include "../../JObject.hpp"
#include "../content/BroadcastReceiver.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit AppWidgetProvider(const char *className, const char *sig, Ts...agv) : android::content::BroadcastReceiver(className, sig, std::forward<Ts>(agv)...) {}
		AppWidgetProvider(QJniObject obj);
		
		// Constructors
		AppWidgetProvider();
		
		// Methods
		void onAppWidgetOptionsChanged(android::content::Context arg0, android::appwidget::AppWidgetManager arg1, jint arg2, android::os::Bundle arg3);
		void onDeleted(android::content::Context arg0, jintArray arg1);
		void onDisabled(android::content::Context arg0);
		void onEnabled(android::content::Context arg0);
		void onReceive(android::content::Context arg0, android::content::Intent arg1);
		void onRestored(android::content::Context arg0, jintArray arg1, jintArray arg2);
		void onUpdate(android::content::Context arg0, android::appwidget::AppWidgetManager arg1, jintArray arg2);
	};
} // namespace android::appwidget

