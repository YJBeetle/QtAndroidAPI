#pragma once

#include "../../../JObject.hpp"

namespace android::graphics::text
{
	class LineBreakConfig;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::text::style
{
	class LineBreakConfigSpan : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit LineBreakConfigSpan(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LineBreakConfigSpan(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		LineBreakConfigSpan(android::graphics::text::LineBreakConfig arg0);
		
		// Methods
		static android::text::style::LineBreakConfigSpan createNoBreakSpan();
		static android::text::style::LineBreakConfigSpan createNoHyphenationSpan();
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::graphics::text::LineBreakConfig getLineBreakConfig() const;
		jint getSpanTypeId() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::text::style

