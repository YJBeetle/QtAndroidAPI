#include "../../JByteArray.hpp"
#include "./Bitmap.hpp"
#include "./Canvas.hpp"
#include "./Paint.hpp"
#include "./Rect.hpp"
#include "./RectF.hpp"
#include "./Region.hpp"
#include "../../JString.hpp"
#include "./NinePatch.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	NinePatch::NinePatch(android::graphics::Bitmap arg0, JByteArray arg1)
		: JObject(
			"android.graphics.NinePatch",
			"(Landroid/graphics/Bitmap;[B)V",
			arg0.object(),
			arg1.object<jbyteArray>()
		) {}
	NinePatch::NinePatch(android::graphics::Bitmap arg0, JByteArray arg1, JString arg2)
		: JObject(
			"android.graphics.NinePatch",
			"(Landroid/graphics/Bitmap;[BLjava/lang/String;)V",
			arg0.object(),
			arg1.object<jbyteArray>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	jboolean NinePatch::isNinePatchChunk(JByteArray arg0)
	{
		return callStaticMethod<jboolean>(
			"android.graphics.NinePatch",
			"isNinePatchChunk",
			"([B)Z",
			arg0.object<jbyteArray>()
		);
	}
	void NinePatch::draw(android::graphics::Canvas arg0, android::graphics::Rect arg1) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Rect;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void NinePatch::draw(android::graphics::Canvas arg0, android::graphics::RectF arg1) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/RectF;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void NinePatch::draw(android::graphics::Canvas arg0, android::graphics::Rect arg1, android::graphics::Paint arg2) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Rect;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::graphics::Bitmap NinePatch::getBitmap() const
	{
		return callObjectMethod(
			"getBitmap",
			"()Landroid/graphics/Bitmap;"
		);
	}
	jint NinePatch::getDensity() const
	{
		return callMethod<jint>(
			"getDensity",
			"()I"
		);
	}
	jint NinePatch::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	JString NinePatch::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	android::graphics::Paint NinePatch::getPaint() const
	{
		return callObjectMethod(
			"getPaint",
			"()Landroid/graphics/Paint;"
		);
	}
	android::graphics::Region NinePatch::getTransparentRegion(android::graphics::Rect arg0) const
	{
		return callObjectMethod(
			"getTransparentRegion",
			"(Landroid/graphics/Rect;)Landroid/graphics/Region;",
			arg0.object()
		);
	}
	jint NinePatch::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean NinePatch::hasAlpha() const
	{
		return callMethod<jboolean>(
			"hasAlpha",
			"()Z"
		);
	}
	void NinePatch::setPaint(android::graphics::Paint arg0) const
	{
		callMethod<void>(
			"setPaint",
			"(Landroid/graphics/Paint;)V",
			arg0.object()
		);
	}
} // namespace android::graphics

