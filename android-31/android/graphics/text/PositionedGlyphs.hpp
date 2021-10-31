#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics::fonts
{
	class Font;
}

namespace android::graphics::text
{
	class PositionedGlyphs : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PositionedGlyphs(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PositionedGlyphs(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
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
		jstring toString();
	};
} // namespace android::graphics::text

