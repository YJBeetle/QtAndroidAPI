#pragma once

#include "../../../JObject.hpp"

namespace android::appwidget
{
	class AppWidgetProviderInfo;
}
namespace android::content
{
	class Context;
}
namespace android::content::pm
{
	class ShortcutInfo;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class LauncherApps_PinItemRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint REQUEST_TYPE_APPWIDGET();
		static jint REQUEST_TYPE_SHORTCUT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LauncherApps_PinItemRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LauncherApps_PinItemRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean accept();
		jboolean accept(android::os::Bundle arg0);
		jint describeContents();
		android::appwidget::AppWidgetProviderInfo getAppWidgetProviderInfo(android::content::Context arg0);
		android::os::Bundle getExtras();
		jint getRequestType();
		android::content::pm::ShortcutInfo getShortcutInfo();
		jboolean isValid();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

