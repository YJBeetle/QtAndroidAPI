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
class JString;
class JObject;
class JString;

namespace android::media::tv
{
	class TvInputInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString EXTRA_INPUT_ID();
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
		jboolean canRecord() const;
		android::content::Intent createSettingsIntent() const;
		android::content::Intent createSetupIntent() const;
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::os::Bundle getExtras() const;
		JString getId() const;
		JString getParentId() const;
		android::content::pm::ServiceInfo getServiceInfo() const;
		jint getTunerCount() const;
		jint getType() const;
		jint hashCode() const;
		jboolean isHidden(android::content::Context arg0) const;
		jboolean isPassthroughInput() const;
		JString loadCustomLabel(android::content::Context arg0) const;
		android::graphics::drawable::Drawable loadIcon(android::content::Context arg0) const;
		JString loadLabel(android::content::Context arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv

