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
class JString;
class JString;

namespace android::app::slice
{
	class SliceItem : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString FORMAT_ACTION();
		static JString FORMAT_BUNDLE();
		static JString FORMAT_IMAGE();
		static JString FORMAT_INT();
		static JString FORMAT_LONG();
		static JString FORMAT_REMOTE_INPUT();
		static JString FORMAT_SLICE();
		static JString FORMAT_TEXT();
		
		// QJniObject forward
		template<typename ...Ts> explicit SliceItem(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SliceItem(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::app::PendingIntent getAction() const;
		android::os::Bundle getBundle() const;
		JString getFormat() const;
		JObject getHints() const;
		android::graphics::drawable::Icon getIcon() const;
		jint getInt() const;
		jlong getLong() const;
		android::app::RemoteInput getRemoteInput() const;
		android::app::slice::Slice getSlice() const;
		JString getSubType() const;
		JString getText() const;
		jboolean hasHint(JString arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::slice

