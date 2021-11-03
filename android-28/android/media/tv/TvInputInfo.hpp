#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::content::pm
{
	class ServiceInfo;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::media::tv
{
	class TvInputInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jstring EXTRA_INPUT_ID();
		static jint TYPE_COMPONENT();
		static jint TYPE_COMPOSITE();
		static jint TYPE_DISPLAY_PORT();
		static jint TYPE_DVI();
		static jint TYPE_HDMI();
		static jint TYPE_OTHER();
		static jint TYPE_SCART();
		static jint TYPE_SVIDEO();
		static jint TYPE_TUNER();
		static jint TYPE_VGA();
		
		// QJniObject forward
		template<typename ...Ts> explicit TvInputInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvInputInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean canRecord();
		android::content::Intent createSettingsIntent();
		android::content::Intent createSetupIntent();
		jint describeContents();
		jboolean equals(jobject arg0);
		android::os::Bundle getExtras();
		jstring getId();
		jstring getParentId();
		android::content::pm::ServiceInfo getServiceInfo();
		jint getTunerCount();
		jint getType();
		jint hashCode();
		jboolean isHidden(android::content::Context arg0);
		jboolean isPassthroughInput();
		jstring loadCustomLabel(android::content::Context arg0);
		android::graphics::drawable::Drawable loadIcon(android::content::Context arg0);
		jstring loadLabel(android::content::Context arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media::tv

