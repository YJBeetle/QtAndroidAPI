#pragma once

#include "../../JObject.hpp"

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
class JObject;
class JString;

namespace android::appwidget
{
	class AppWidgetProviderInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
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
		android::content::ComponentName configure();
		jint icon();
		jint initialKeyguardLayout();
		jint initialLayout();
		JString label();
		jint minHeight();
		jint minResizeHeight();
		jint minResizeWidth();
		jint minWidth();
		jint previewImage();
		android::content::ComponentName provider();
		jint resizeMode();
		jint updatePeriodMillis();
		jint widgetCategory();
		jint widgetFeatures();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppWidgetProviderInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppWidgetProviderInfo(QAndroidJniObject obj);
		
		// Constructors
		AppWidgetProviderInfo();
		AppWidgetProviderInfo(android::os::Parcel arg0);
		
		// Methods
		android::appwidget::AppWidgetProviderInfo clone() const;
		jint describeContents() const;
		android::os::UserHandle getProfile() const;
		android::graphics::drawable::Drawable loadIcon(android::content::Context arg0, jint arg1) const;
		JString loadLabel(android::content::pm::PackageManager arg0) const;
		android::graphics::drawable::Drawable loadPreviewImage(android::content::Context arg0, jint arg1) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::appwidget

