#include "../../appwidget/AppWidgetProviderInfo.hpp"
#include "../Context.hpp"
#include "./ShortcutInfo.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./LauncherApps_PinItemRequest.hpp"

namespace android::content::pm
{
	// Fields
	QAndroidJniObject LauncherApps_PinItemRequest::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.LauncherApps$PinItemRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint LauncherApps_PinItemRequest::REQUEST_TYPE_APPWIDGET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.LauncherApps$PinItemRequest",
			"REQUEST_TYPE_APPWIDGET"
		);
	}
	jint LauncherApps_PinItemRequest::REQUEST_TYPE_SHORTCUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.LauncherApps$PinItemRequest",
			"REQUEST_TYPE_SHORTCUT"
		);
	}
	
	// QAndroidJniObject forward
	LauncherApps_PinItemRequest::LauncherApps_PinItemRequest(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean LauncherApps_PinItemRequest::accept()
	{
		return callMethod<jboolean>(
			"accept",
			"()Z"
		);
	}
	jboolean LauncherApps_PinItemRequest::accept(android::os::Bundle arg0)
	{
		return callMethod<jboolean>(
			"accept",
			"(Landroid/os/Bundle;)Z",
			arg0.object()
		);
	}
	jint LauncherApps_PinItemRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject LauncherApps_PinItemRequest::getAppWidgetProviderInfo(android::content::Context arg0)
	{
		return callObjectMethod(
			"getAppWidgetProviderInfo",
			"(Landroid/content/Context;)Landroid/appwidget/AppWidgetProviderInfo;",
			arg0.object()
		);
	}
	QAndroidJniObject LauncherApps_PinItemRequest::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint LauncherApps_PinItemRequest::getRequestType()
	{
		return callMethod<jint>(
			"getRequestType",
			"()I"
		);
	}
	QAndroidJniObject LauncherApps_PinItemRequest::getShortcutInfo()
	{
		return callObjectMethod(
			"getShortcutInfo",
			"()Landroid/content/pm/ShortcutInfo;"
		);
	}
	jboolean LauncherApps_PinItemRequest::isValid()
	{
		return callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	void LauncherApps_PinItemRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

