#pragma once

#include "../fonts/Font.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./PositionedGlyphs.def.hpp"

namespace android::graphics::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean PositionedGlyphs::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jfloat PositionedGlyphs::getAdvance() const
	{
		return callMethod<jfloat>(
			"getAdvance",
			"()F"
		);
	}
	inline jfloat PositionedGlyphs::getAscent() const
	{
		return callMethod<jfloat>(
			"getAscent",
			"()F"
		);
	}
	inline jfloat PositionedGlyphs::getDescent() const
	{
		return callMethod<jfloat>(
			"getDescent",
			"()F"
		);
	}
	inline android::graphics::fonts::Font PositionedGlyphs::getFont(jint arg0) const
	{
		return callObjectMethod(
			"getFont",
			"(I)Landroid/graphics/fonts/Font;",
			arg0
		);
	}
	inline jint PositionedGlyphs::getGlyphId(jint arg0) const
	{
		return callMethod<jint>(
			"getGlyphId",
			"(I)I",
			arg0
		);
	}
	inline jfloat PositionedGlyphs::getGlyphX(jint arg0) const
	{
		return callMethod<jfloat>(
			"getGlyphX",
			"(I)F",
			arg0
		);
	}
	inline jfloat PositionedGlyphs::getGlyphY(jint arg0) const
	{
		return callMethod<jfloat>(
			"getGlyphY",
			"(I)F",
			arg0
		);
	}
	inline jfloat PositionedGlyphs::getOffsetX() const
	{
		return callMethod<jfloat>(
			"getOffsetX",
			"()F"
		);
	}
	inline jfloat PositionedGlyphs::getOffsetY() const
	{
		return callMethod<jfloat>(
			"getOffsetY",
			"()F"
		);
	}
	inline jint PositionedGlyphs::glyphCount() const
	{
		return callMethod<jint>(
			"glyphCount",
			"()I"
		);
	}
	inline jint PositionedGlyphs::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString PositionedGlyphs::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::graphics::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::text;
#endif
