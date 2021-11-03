#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ClipData;
}
namespace android::net
{
	class Uri;
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

namespace android::view
{
	class ContentInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_CONVERT_TO_PLAIN_TEXT();
		static jint SOURCE_APP();
		static jint SOURCE_AUTOFILL();
		static jint SOURCE_CLIPBOARD();
		static jint SOURCE_DRAG_AND_DROP();
		static jint SOURCE_INPUT_METHOD();
		static jint SOURCE_PROCESS_TEXT();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContentInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContentInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::content::ClipData getClip() const;
		android::os::Bundle getExtras() const;
		jint getFlags() const;
		android::net::Uri getLinkUri() const;
		jint getSource() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view

