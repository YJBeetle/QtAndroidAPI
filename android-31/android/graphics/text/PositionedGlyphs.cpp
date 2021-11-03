#include "../fonts/Font.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./PositionedGlyphs.hpp"

namespace android::graphics::text
{
	// Fields
	
	// QJniObject forward
	PositionedGlyphs::PositionedGlyphs(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean PositionedGlyphs::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jfloat PositionedGlyphs::getAdvance()
	{
		return callMethod<jfloat>(
			"getAdvance",
			"()F"
		);
	}
	jfloat PositionedGlyphs::getAscent()
	{
		return callMethod<jfloat>(
			"getAscent",
			"()F"
		);
	}
	jfloat PositionedGlyphs::getDescent()
	{
		return callMethod<jfloat>(
			"getDescent",
			"()F"
		);
	}
	android::graphics::fonts::Font PositionedGlyphs::getFont(jint arg0)
	{
		return callObjectMethod(
			"getFont",
			"(I)Landroid/graphics/fonts/Font;",
			arg0
		);
	}
	jint PositionedGlyphs::getGlyphId(jint arg0)
	{
		return callMethod<jint>(
			"getGlyphId",
			"(I)I",
			arg0
		);
	}
	jfloat PositionedGlyphs::getGlyphX(jint arg0)
	{
		return callMethod<jfloat>(
			"getGlyphX",
			"(I)F",
			arg0
		);
	}
	jfloat PositionedGlyphs::getGlyphY(jint arg0)
	{
		return callMethod<jfloat>(
			"getGlyphY",
			"(I)F",
			arg0
		);
	}
	jfloat PositionedGlyphs::getOffsetX()
	{
		return callMethod<jfloat>(
			"getOffsetX",
			"()F"
		);
	}
	jfloat PositionedGlyphs::getOffsetY()
	{
		return callMethod<jfloat>(
			"getOffsetY",
			"()F"
		);
	}
	jint PositionedGlyphs::glyphCount()
	{
		return callMethod<jint>(
			"glyphCount",
			"()I"
		);
	}
	jint PositionedGlyphs::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString PositionedGlyphs::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::graphics::text

