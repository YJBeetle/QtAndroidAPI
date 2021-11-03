#pragma once

#include "../../../JObject.hpp"

namespace android::app::slice
{
	class SliceSpec;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}

namespace android::app::slice
{
	class Slice : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jstring EXTRA_RANGE_VALUE();
		static jstring EXTRA_TOGGLE_STATE();
		static jstring HINT_ACTIONS();
		static jstring HINT_ERROR();
		static jstring HINT_HORIZONTAL();
		static jstring HINT_KEYWORDS();
		static jstring HINT_LARGE();
		static jstring HINT_LAST_UPDATED();
		static jstring HINT_LIST();
		static jstring HINT_LIST_ITEM();
		static jstring HINT_NO_TINT();
		static jstring HINT_PARTIAL();
		static jstring HINT_PERMISSION_REQUEST();
		static jstring HINT_SEE_MORE();
		static jstring HINT_SELECTED();
		static jstring HINT_SHORTCUT();
		static jstring HINT_SUMMARY();
		static jstring HINT_TITLE();
		static jstring HINT_TTL();
		static jstring SUBTYPE_COLOR();
		static jstring SUBTYPE_CONTENT_DESCRIPTION();
		static jstring SUBTYPE_LAYOUT_DIRECTION();
		static jstring SUBTYPE_MAX();
		static jstring SUBTYPE_MESSAGE();
		static jstring SUBTYPE_MILLIS();
		static jstring SUBTYPE_PRIORITY();
		static jstring SUBTYPE_RANGE();
		static jstring SUBTYPE_SOURCE();
		static jstring SUBTYPE_TOGGLE();
		static jstring SUBTYPE_VALUE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Slice(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Slice(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		JObject getHints();
		JObject getItems();
		android::app::slice::SliceSpec getSpec();
		android::net::Uri getUri();
		jboolean isCallerNeeded();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::slice

