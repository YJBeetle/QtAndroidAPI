#pragma once

#include "../../../JObject.hpp"

class JObject;

namespace android::graphics::text
{
	class LineBreakConfig : public JObject
	{
	public:
		// Fields
		static jint LINE_BREAK_STYLE_LOOSE();
		static jint LINE_BREAK_STYLE_NONE();
		static jint LINE_BREAK_STYLE_NORMAL();
		static jint LINE_BREAK_STYLE_STRICT();
		static jint LINE_BREAK_WORD_STYLE_NONE();
		static jint LINE_BREAK_WORD_STYLE_PHRASE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LineBreakConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LineBreakConfig(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getLineBreakStyle() const;
		jint getLineBreakWordStyle() const;
		jint hashCode() const;
	};
} // namespace android::graphics::text

