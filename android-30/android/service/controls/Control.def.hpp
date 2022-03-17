#pragma once

#include "../../../JObject.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::content::res
{
	class ColorStateList;
}
namespace android::graphics::drawable
{
	class Icon;
}
namespace android::os
{
	class Parcel;
}
namespace android::service::controls::templates
{
	class ControlTemplate;
}
class JString;
class JString;

namespace android::service::controls
{
	class Control : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint STATUS_DISABLED();
		static jint STATUS_ERROR();
		static jint STATUS_NOT_FOUND();
		static jint STATUS_OK();
		static jint STATUS_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Control(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Control(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::app::PendingIntent getAppIntent() const;
		JString getControlId() const;
		android::service::controls::templates::ControlTemplate getControlTemplate() const;
		android::content::res::ColorStateList getCustomColor() const;
		android::graphics::drawable::Icon getCustomIcon() const;
		jint getDeviceType() const;
		jint getStatus() const;
		JString getStatusText() const;
		JString getStructure() const;
		JString getSubtitle() const;
		JString getTitle() const;
		JString getZone() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::controls

