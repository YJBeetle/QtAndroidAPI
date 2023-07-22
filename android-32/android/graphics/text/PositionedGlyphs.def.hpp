#pragma once

#include "../../../JObject.hpp"

namespace android::graphics::fonts
{
	class Font;
}
class JObject;
class JString;

namespace android::graphics::text
{
	class PositionedGlyphs : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PositionedGlyphs(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PositionedGlyphs(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jfloat getAdvance() const;
		jfloat getAscent() const;
		jfloat getDescent() const;
		android::graphics::fonts::Font getFont(jint arg0) const;
		jint getGlyphId(jint arg0) const;
		jfloat getGlyphX(jint arg0) const;
		jfloat getGlyphY(jint arg0) const;
		jfloat getOffsetX() const;
		jfloat getOffsetY() const;
		jint glyphCount() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::graphics::text

