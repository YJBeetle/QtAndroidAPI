#pragma once

#include "../../JIntArray.hpp"
#include "./AppWidgetManager.def.hpp"
#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../os/Bundle.def.hpp"
#include "./AppWidgetProvider.def.hpp"

namespace android::appwidget
{
	// Fields
	
	// Constructors
	inline AppWidgetProvider::AppWidgetProvider()
		: android::content::BroadcastReceiver(
			"android.appwidget.AppWidgetProvider",
			"()V"
		) {}
	
	// Methods
	inline void AppWidgetProvider::onAppWidgetOptionsChanged(android::content::Context arg0, android::appwidget::AppWidgetManager arg1, jint arg2, android::os::Bundle arg3) const
	{
		callMethod<void>(
			"onAppWidgetOptionsChanged",
			"(Landroid/content/Context;Landroid/appwidget/AppWidgetManager;ILandroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	inline void AppWidgetProvider::onDeleted(android::content::Context arg0, JIntArray arg1) const
	{
		callMethod<void>(
			"onDeleted",
			"(Landroid/content/Context;[I)V",
			arg0.object(),
			arg1.object<jintArray>()
		);
	}
	inline void AppWidgetProvider::onDisabled(android::content::Context arg0) const
	{
		callMethod<void>(
			"onDisabled",
			"(Landroid/content/Context;)V",
			arg0.object()
		);
	}
	inline void AppWidgetProvider::onEnabled(android::content::Context arg0) const
	{
		callMethod<void>(
			"onEnabled",
			"(Landroid/content/Context;)V",
			arg0.object()
		);
	}
	inline void AppWidgetProvider::onReceive(android::content::Context arg0, android::content::Intent arg1) const
	{
		callMethod<void>(
			"onReceive",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void AppWidgetProvider::onRestored(android::content::Context arg0, JIntArray arg1, JIntArray arg2) const
	{
		callMethod<void>(
			"onRestored",
			"(Landroid/content/Context;[I[I)V",
			arg0.object(),
			arg1.object<jintArray>(),
			arg2.object<jintArray>()
		);
	}
	inline void AppWidgetProvider::onUpdate(android::content::Context arg0, android::appwidget::AppWidgetManager arg1, JIntArray arg2) const
	{
		callMethod<void>(
			"onUpdate",
			"(Landroid/content/Context;Landroid/appwidget/AppWidgetManager;[I)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jintArray>()
		);
	}
} // namespace android::appwidget

// Base class headers
#include "../content/BroadcastReceiver.hpp"

