#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class LauncherApps_PinItemRequest : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint REQUEST_TYPE_APPWIDGET();
		static jint REQUEST_TYPE_SHORTCUT();
		
		LauncherApps_PinItemRequest(QAndroidJniObject obj);
		// Constructors
		LauncherApps_PinItemRequest() = default;
		
		// Methods
		jboolean accept();
		jboolean accept(android::os::Bundle arg0);
		jint describeContents();
		QAndroidJniObject getAppWidgetProviderInfo(android::content::Context arg0);
		QAndroidJniObject getExtras();
		jint getRequestType();
		QAndroidJniObject getShortcutInfo();
		jboolean isValid();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

