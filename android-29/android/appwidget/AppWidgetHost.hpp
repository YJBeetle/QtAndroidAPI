#pragma once

#include "../../JIntArray.hpp"
#include "../app/Activity.def.hpp"
#include "./AppWidgetHostView.def.hpp"
#include "./AppWidgetProviderInfo.def.hpp"
#include "../content/Context.def.hpp"
#include "../os/Bundle.def.hpp"
#include "./AppWidgetHost.def.hpp"

namespace android::appwidget
{
	// Fields
	
	// Constructors
	inline AppWidgetHost::AppWidgetHost(android::content::Context arg0, jint arg1)
		: JObject(
			"android.appwidget.AppWidgetHost",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline void AppWidgetHost::deleteAllHosts()
	{
		callStaticMethod<void>(
			"android.appwidget.AppWidgetHost",
			"deleteAllHosts",
			"()V"
		);
	}
	inline jint AppWidgetHost::allocateAppWidgetId() const
	{
		return callMethod<jint>(
			"allocateAppWidgetId",
			"()I"
		);
	}
	inline android::appwidget::AppWidgetHostView AppWidgetHost::createView(android::content::Context arg0, jint arg1, android::appwidget::AppWidgetProviderInfo arg2) const
	{
		return callObjectMethod(
			"createView",
			"(Landroid/content/Context;ILandroid/appwidget/AppWidgetProviderInfo;)Landroid/appwidget/AppWidgetHostView;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void AppWidgetHost::deleteAppWidgetId(jint arg0) const
	{
		callMethod<void>(
			"deleteAppWidgetId",
			"(I)V",
			arg0
		);
	}
	inline void AppWidgetHost::deleteHost() const
	{
		callMethod<void>(
			"deleteHost",
			"()V"
		);
	}
	inline JIntArray AppWidgetHost::getAppWidgetIds() const
	{
		return callObjectMethod(
			"getAppWidgetIds",
			"()[I"
		);
	}
	inline void AppWidgetHost::startAppWidgetConfigureActivityForResult(android::app::Activity arg0, jint arg1, jint arg2, jint arg3, android::os::Bundle arg4) const
	{
		callMethod<void>(
			"startAppWidgetConfigureActivityForResult",
			"(Landroid/app/Activity;IIILandroid/os/Bundle;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	inline void AppWidgetHost::startListening() const
	{
		callMethod<void>(
			"startListening",
			"()V"
		);
	}
	inline void AppWidgetHost::stopListening() const
	{
		callMethod<void>(
			"stopListening",
			"()V"
		);
	}
} // namespace android::appwidget

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::appwidget;
#endif
