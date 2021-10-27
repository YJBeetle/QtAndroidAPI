#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class TvInputInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
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
		
		TvInputInfo(QAndroidJniObject obj);
		// Constructors
		TvInputInfo() = default;
		
		// Methods
		jboolean canRecord();
		QAndroidJniObject createSettingsIntent();
		QAndroidJniObject createSetupIntent();
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getExtras();
		jstring getId();
		jstring getParentId();
		QAndroidJniObject getServiceInfo();
		jint getTunerCount();
		jint getType();
		jint hashCode();
		jboolean isHidden(android::content::Context arg0);
		jboolean isPassthroughInput();
		jstring loadCustomLabel(android::content::Context arg0);
		QAndroidJniObject loadIcon(android::content::Context arg0);
		jstring loadLabel(android::content::Context arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media::tv

