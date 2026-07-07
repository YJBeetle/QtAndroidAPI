#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::text::style
{
	class NoWritingToolsSpan : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit NoWritingToolsSpan(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NoWritingToolsSpan(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		NoWritingToolsSpan();
		
		// Methods
		jint describeContents() const;
		jint getSpanTypeId() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::text::style

