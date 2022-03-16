#include "../../../JCharArray.hpp"
#include "../Paint.hpp"
#include "./PositionedGlyphs.hpp"
#include "../../../JString.hpp"
#include "./TextRunShaper.hpp"

namespace android::graphics::text
{
	// Fields
	
	// Constructors
	
	// Methods
	android::graphics::text::PositionedGlyphs TextRunShaper::shapeTextRun(JCharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::graphics::Paint arg8)
	{
		return callStaticObjectMethod(
			"android.graphics.text.TextRunShaper",
			"shapeTextRun",
			"([CIIIIFFZLandroid/graphics/Paint;)Landroid/graphics/text/PositionedGlyphs;",
			arg0.object<jcharArray>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8.object()
		);
	}
	android::graphics::text::PositionedGlyphs TextRunShaper::shapeTextRun(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::graphics::Paint arg8)
	{
		return callStaticObjectMethod(
			"android.graphics.text.TextRunShaper",
			"shapeTextRun",
			"(Ljava/lang/CharSequence;IIIIFFZLandroid/graphics/Paint;)Landroid/graphics/text/PositionedGlyphs;",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8.object()
		);
	}
} // namespace android::graphics::text

