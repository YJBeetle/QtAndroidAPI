#include "./Bitmap.hpp"
#include "./Canvas.hpp"
#include "./Paint.hpp"
#include "./Rect.hpp"
#include "./RectF.hpp"
#include "./Region.hpp"
#include "./NinePatch.hpp"

namespace android::graphics
{
	// Fields
	
	// QJniObject forward
	NinePatch::NinePatch(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	NinePatch::NinePatch(android::graphics::Bitmap arg0, jbyteArray arg1)
		: JObject(
			"android.graphics.NinePatch",
			"(Landroid/graphics/Bitmap;[B)V",
			arg0.object(),
			arg1
		) {}
	NinePatch::NinePatch(android::graphics::Bitmap arg0, jbyteArray arg1, jstring arg2)
		: JObject(
			"android.graphics.NinePatch",
			"(Landroid/graphics/Bitmap;[BLjava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	jboolean NinePatch::isNinePatchChunk(jbyteArray arg0)
	{
		return callStaticMethod<jboolean>(
			"android.graphics.NinePatch",
			"isNinePatchChunk",
			"([B)Z",
			arg0
		);
	}
	void NinePatch::draw(android::graphics::Canvas arg0, android::graphics::Rect arg1)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Rect;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void NinePatch::draw(android::graphics::Canvas arg0, android::graphics::RectF arg1)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/RectF;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void NinePatch::draw(android::graphics::Canvas arg0, android::graphics::Rect arg1, android::graphics::Paint arg2)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Rect;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::graphics::Bitmap NinePatch::getBitmap()
	{
		return callObjectMethod(
			"getBitmap",
			"()Landroid/graphics/Bitmap;"
		);
	}
	jint NinePatch::getDensity()
	{
		return callMethod<jint>(
			"getDensity",
			"()I"
		);
	}
	jint NinePatch::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jstring NinePatch::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::graphics::Paint NinePatch::getPaint()
	{
		return callObjectMethod(
			"getPaint",
			"()Landroid/graphics/Paint;"
		);
	}
	android::graphics::Region NinePatch::getTransparentRegion(android::graphics::Rect arg0)
	{
		return callObjectMethod(
			"getTransparentRegion",
			"(Landroid/graphics/Rect;)Landroid/graphics/Region;",
			arg0.object()
		);
	}
	jint NinePatch::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean NinePatch::hasAlpha()
	{
		return callMethod<jboolean>(
			"hasAlpha",
			"()Z"
		);
	}
	void NinePatch::setPaint(android::graphics::Paint arg0)
	{
		callMethod<void>(
			"setPaint",
			"(Landroid/graphics/Paint;)V",
			arg0.object()
		);
	}
} // namespace android::graphics

