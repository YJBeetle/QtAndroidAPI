#pragma once

#include "./Path.def.hpp"
#include "./Rect.def.hpp"
#include "./Outline.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline Outline::Outline()
		: JObject(
			"android.graphics.Outline",
			"()V"
		) {}
	inline Outline::Outline(android::graphics::Outline &arg0)
		: JObject(
			"android.graphics.Outline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean Outline::canClip() const
	{
		return callMethod<jboolean>(
			"canClip",
			"()Z"
		);
	}
	inline jfloat Outline::getAlpha() const
	{
		return callMethod<jfloat>(
			"getAlpha",
			"()F"
		);
	}
	inline jfloat Outline::getRadius() const
	{
		return callMethod<jfloat>(
			"getRadius",
			"()F"
		);
	}
	inline jboolean Outline::getRect(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"getRect",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	inline jboolean Outline::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline void Outline::offset(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"offset",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Outline::set(android::graphics::Outline arg0) const
	{
		callMethod<void>(
			"set",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	inline void Outline::setAlpha(jfloat arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(F)V",
			arg0
		);
	}
	inline void Outline::setConvexPath(android::graphics::Path arg0) const
	{
		callMethod<void>(
			"setConvexPath",
			"(Landroid/graphics/Path;)V",
			arg0.object()
		);
	}
	inline void Outline::setEmpty() const
	{
		callMethod<void>(
			"setEmpty",
			"()V"
		);
	}
	inline void Outline::setOval(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"setOval",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline void Outline::setOval(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"setOval",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void Outline::setPath(android::graphics::Path arg0) const
	{
		callMethod<void>(
			"setPath",
			"(Landroid/graphics/Path;)V",
			arg0.object()
		);
	}
	inline void Outline::setRect(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"setRect",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline void Outline::setRect(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"setRect",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void Outline::setRoundRect(android::graphics::Rect arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setRoundRect",
			"(Landroid/graphics/Rect;F)V",
			arg0.object(),
			arg1
		);
	}
	inline void Outline::setRoundRect(jint arg0, jint arg1, jint arg2, jint arg3, jfloat arg4) const
	{
		callMethod<void>(
			"setRoundRect",
			"(IIIIF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
