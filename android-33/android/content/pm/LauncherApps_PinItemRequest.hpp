#pragma once

#include "../../appwidget/AppWidgetProviderInfo.def.hpp"
#include "../Context.def.hpp"
#include "./ShortcutInfo.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./LauncherApps_PinItemRequest.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject LauncherApps_PinItemRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.LauncherApps$PinItemRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint LauncherApps_PinItemRequest::REQUEST_TYPE_APPWIDGET()
	{
		return getStaticField<jint>(
			"android.content.pm.LauncherApps$PinItemRequest",
			"REQUEST_TYPE_APPWIDGET"
		);
	}
	inline jint LauncherApps_PinItemRequest::REQUEST_TYPE_SHORTCUT()
	{
		return getStaticField<jint>(
			"android.content.pm.LauncherApps$PinItemRequest",
			"REQUEST_TYPE_SHORTCUT"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean LauncherApps_PinItemRequest::accept() const
	{
		return callMethod<jboolean>(
			"accept",
			"()Z"
		);
	}
	inline jboolean LauncherApps_PinItemRequest::accept(android::os::Bundle arg0) const
	{
		return callMethod<jboolean>(
			"accept",
			"(Landroid/os/Bundle;)Z",
			arg0.object()
		);
	}
	inline jint LauncherApps_PinItemRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::appwidget::AppWidgetProviderInfo LauncherApps_PinItemRequest::getAppWidgetProviderInfo(android::content::Context arg0) const
	{
		return callObjectMethod(
			"getAppWidgetProviderInfo",
			"(Landroid/content/Context;)Landroid/appwidget/AppWidgetProviderInfo;",
			arg0.object()
		);
	}
	inline android::os::Bundle LauncherApps_PinItemRequest::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline jint LauncherApps_PinItemRequest::getRequestType() const
	{
		return callMethod<jint>(
			"getRequestType",
			"()I"
		);
	}
	inline android::content::pm::ShortcutInfo LauncherApps_PinItemRequest::getShortcutInfo() const
	{
		return callObjectMethod(
			"getShortcutInfo",
			"()Landroid/content/pm/ShortcutInfo;"
		);
	}
	inline jboolean LauncherApps_PinItemRequest::isValid() const
	{
		return callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	inline void LauncherApps_PinItemRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
