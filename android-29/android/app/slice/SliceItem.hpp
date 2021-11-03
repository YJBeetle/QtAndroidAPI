#pragma once

#include "../../../JObject.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::app
{
	class RemoteInput;
}
namespace android::app::slice
{
	class Slice;
}
namespace android::graphics::drawable
{
	class Icon;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::app::slice
{
	class SliceItem : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jstring FORMAT_ACTION();
		static jstring FORMAT_BUNDLE();
		static jstring FORMAT_IMAGE();
		static jstring FORMAT_INT();
		static jstring FORMAT_LONG();
		static jstring FORMAT_REMOTE_INPUT();
		static jstring FORMAT_SLICE();
		static jstring FORMAT_TEXT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SliceItem(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SliceItem(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::app::PendingIntent getAction();
		android::os::Bundle getBundle();
		jstring getFormat();
		JObject getHints();
		android::graphics::drawable::Icon getIcon();
		jint getInt();
		jlong getLong();
		android::app::RemoteInput getRemoteInput();
		android::app::slice::Slice getSlice();
		jstring getSubType();
		jstring getText();
		jboolean hasHint(jstring arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::slice

