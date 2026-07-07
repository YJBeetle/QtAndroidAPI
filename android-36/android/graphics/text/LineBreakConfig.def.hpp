#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::graphics::text
{
	class LineBreakConfig : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint HYPHENATION_DISABLED();
		static jint HYPHENATION_ENABLED();
		static jint HYPHENATION_UNSPECIFIED();
		static jint LINE_BREAK_STYLE_AUTO();
		static jint LINE_BREAK_STYLE_LOOSE();
		static jint LINE_BREAK_STYLE_NONE();
		static jint LINE_BREAK_STYLE_NORMAL();
		static jint LINE_BREAK_STYLE_NO_BREAK();
		static jint LINE_BREAK_STYLE_STRICT();
		static jint LINE_BREAK_STYLE_UNSPECIFIED();
		static jint LINE_BREAK_WORD_STYLE_AUTO();
		static jint LINE_BREAK_WORD_STYLE_NONE();
		static jint LINE_BREAK_WORD_STYLE_PHRASE();
		static jint LINE_BREAK_WORD_STYLE_UNSPECIFIED();
		
		// QJniObject forward
		template<typename ...Ts> explicit LineBreakConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LineBreakConfig(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getHyphenation() const;
		jint getLineBreakStyle() const;
		jint getLineBreakWordStyle() const;
		jint hashCode() const;
		android::graphics::text::LineBreakConfig merge(android::graphics::text::LineBreakConfig arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::graphics::text

