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
		PositionedGlyphs(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		jfloat getAdvance();
		jfloat getAscent();
		jfloat getDescent();
		android::graphics::fonts::Font getFont(jint arg0);
		jint getGlyphId(jint arg0);
		jfloat getGlyphX(jint arg0);
		jfloat getGlyphY(jint arg0);
		jfloat getOffsetX();
		jfloat getOffsetY();
		jint glyphCount();
		jint hashCode();
		JString toString();
	};
} // namespace android::graphics::text

