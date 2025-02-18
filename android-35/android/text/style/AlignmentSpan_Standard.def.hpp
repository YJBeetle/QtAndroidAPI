#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::text
{
	class Layout_Alignment;
}
class JString;

namespace android::text::style
{
	class AlignmentSpan_Standard : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AlignmentSpan_Standard(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AlignmentSpan_Standard(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AlignmentSpan_Standard(android::os::Parcel arg0);
		AlignmentSpan_Standard(android::text::Layout_Alignment arg0);
		
		// Methods
		jint describeContents() const;
		android::text::Layout_Alignment getAlignment() const;
		jint getSpanTypeId() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::text::style

