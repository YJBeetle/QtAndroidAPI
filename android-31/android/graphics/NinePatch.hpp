#pragma once

#include "../../JByteArray.hpp"
#include "./Bitmap.def.hpp"
#include "./Canvas.def.hpp"
#include "./Paint.def.hpp"
#include "./Rect.def.hpp"
#include "./RectF.def.hpp"
#include "./Region.def.hpp"
#include "../../JString.hpp"
#include "./NinePatch.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline NinePatch::NinePatch(android::graphics::Bitmap arg0, JByteArray arg1)
		: JObject(
			"android.graphics.NinePatch",
			"(Landroid/graphics/Bitmap;[B)V",
			arg0.object(),
			arg1.object<jbyteArray>()
		) {}
	inline NinePatch::NinePatch(android::graphics::Bitmap arg0, JByteArray arg1, JString arg2)
		: JObject(
			"android.graphics.NinePatch",
			"(Landroid/graphics/Bitmap;[BLjava/lang/String;)V",
			arg0.object(),
			arg1.object<jbyteArray>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline jboolean NinePatch::isNinePatchChunk(JByteArray arg0)
	{
		return callStaticMethod<jboolean>(
			"android.graphics.NinePatch",
			"isNinePatchChunk",
			"([B)Z",
			arg0.object<jbyteArray>()
		);
	}
	inline void NinePatch::draw(android::graphics::Canvas arg0, android::graphics::Rect arg1) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Rect;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void NinePatch::draw(android::graphics::Canvas arg0, android::graphics::RectF arg1) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/RectF;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void NinePatch::draw(android::graphics::Canvas arg0, android::graphics::Rect arg1, android::graphics::Paint arg2) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Rect;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::graphics::Bitmap NinePatch::getBitmap() const
	{
		return callObjectMethod(
			"getBitmap",
			"()Landroid/graphics/Bitmap;"
		);
	}
	inline jint NinePatch::getDensity() const
	{
		return callMethod<jint>(
			"getDensity",
			"()I"
		);
	}
	inline jint NinePatch::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline JString NinePatch::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline android::graphics::Paint NinePatch::getPaint() const
	{
		return callObjectMethod(
			"getPaint",
			"()Landroid/graphics/Paint;"
		);
	}
	inline android::graphics::Region NinePatch::getTransparentRegion(android::graphics::Rect arg0) const
	{
		return callObjectMethod(
			"getTransparentRegion",
			"(Landroid/graphics/Rect;)Landroid/graphics/Region;",
			arg0.object()
		);
	}
	inline jint NinePatch::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	inline jboolean NinePatch::hasAlpha() const
	{
		return callMethod<jboolean>(
			"hasAlpha",
			"()Z"
		);
	}
	inline void NinePatch::setPaint(android::graphics::Paint arg0) const
	{
		callMethod<void>(
			"setPaint",
			"(Landroid/graphics/Paint;)V",
			arg0.object()
		);
	}
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
