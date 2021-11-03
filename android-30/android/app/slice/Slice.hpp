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
class JString;

namespace android::app::slice
{
	class Slice : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString EXTRA_RANGE_VALUE();
		static JString EXTRA_TOGGLE_STATE();
		static JString HINT_ACTIONS();
		static JString HINT_ERROR();
		static JString HINT_HORIZONTAL();
		static JString HINT_KEYWORDS();
		static JString HINT_LARGE();
		static JString HINT_LAST_UPDATED();
		static JString HINT_LIST();
		static JString HINT_LIST_ITEM();
		static JString HINT_NO_TINT();
		static JString HINT_PARTIAL();
		static JString HINT_PERMISSION_REQUEST();
		static JString HINT_SEE_MORE();
		static JString HINT_SELECTED();
		static JString HINT_SHORTCUT();
		static JString HINT_SUMMARY();
		static JString HINT_TITLE();
		static JString HINT_TTL();
		static JString SUBTYPE_COLOR();
		static JString SUBTYPE_CONTENT_DESCRIPTION();
		static JString SUBTYPE_LAYOUT_DIRECTION();
		static JString SUBTYPE_MAX();
		static JString SUBTYPE_MESSAGE();
		static JString SUBTYPE_MILLIS();
		static JString SUBTYPE_PRIORITY();
		static JString SUBTYPE_RANGE();
		static JString SUBTYPE_SOURCE();
		static JString SUBTYPE_TOGGLE();
		static JString SUBTYPE_VALUE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Slice(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Slice(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JObject getHints() const;
		JObject getItems() const;
		android::app::slice::SliceSpec getSpec() const;
		android::net::Uri getUri() const;
		jboolean isCallerNeeded() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::slice

