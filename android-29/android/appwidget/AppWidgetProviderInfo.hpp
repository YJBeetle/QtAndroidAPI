#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::content::pm
{
	class PackageManager;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class UserHandle;
}

namespace android::appwidget
{
	class AppWidgetProviderInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint RESIZE_BOTH();
		static jint RESIZE_HORIZONTAL();
		static jint RESIZE_NONE();
		static jint RESIZE_VERTICAL();
		static jint WIDGET_CATEGORY_HOME_SCREEN();
		static jint WIDGET_CATEGORY_KEYGUARD();
		static jint WIDGET_CATEGORY_SEARCHBOX();
		static jint WIDGET_FEATURE_HIDE_FROM_PICKER();
		static jint WIDGET_FEATURE_RECONFIGURABLE();
		jint autoAdvanceViewId();
		QAndroidJniObject configure();
		jint icon();
		jint initialKeyguardLayout();
		jint initialLayout();
		jstring label();
		jint minHeight();
		jint minResizeHeight();
		jint minResizeWidth();
		jint minWidth();
		jint previewImage();
		QAndroidJniObject provider();
		jint resizeMode();
		jint updatePeriodMillis();
		jint widgetCategory();
		jint widgetFeatures();
		
		AppWidgetProviderInfo(QAndroidJniObject obj);
		// Constructors
		AppWidgetProviderInfo();
		AppWidgetProviderInfo(android::os::Parcel arg0);
		
		// Methods
		QAndroidJniObject clone();
		jint describeContents();
		QAndroidJniObject getProfile();
		QAndroidJniObject loadIcon(android::content::Context arg0, jint arg1);
		jstring loadLabel(android::content::pm::PackageManager arg0);
		QAndroidJniObject loadPreviewImage(android::content::Context arg0, jint arg1);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::appwidget

