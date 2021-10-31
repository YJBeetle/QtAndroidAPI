#include "./Path.hpp"
#include "./Rect.hpp"
#include "./Outline.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	Outline::Outline(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Outline::Outline()
		: __JniBaseClass(
			"android.graphics.Outline",
			"()V"
		) {}
	Outline::Outline(android::graphics::Outline &arg0)
		: __JniBaseClass(
			"android.graphics.Outline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean Outline::canClip()
	{
		return callMethod<jboolean>(
			"canClip",
			"()Z"
		);
	}
	jfloat Outline::getAlpha()
	{
		return callMethod<jfloat>(
			"getAlpha",
			"()F"
		);
	}
	jfloat Outline::getRadius()
	{
		return callMethod<jfloat>(
			"getRadius",
			"()F"
		);
	}
	jboolean Outline::getRect(android::graphics::Rect arg0)
	{
		return callMethod<jboolean>(
			"getRect",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jboolean Outline::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	void Outline::offset(jint arg0, jint arg1)
	{
		callMethod<void>(
			"offset",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Outline::set(android::graphics::Outline arg0)
	{
		callMethod<void>(
			"set",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	void Outline::setAlpha(jfloat arg0)
	{
		callMethod<void>(
			"setAlpha",
			"(F)V",
			arg0
		);
	}
	void Outline::setConvexPath(android::graphics::Path arg0)
	{
		callMethod<void>(
			"setConvexPath",
			"(Landroid/graphics/Path;)V",
			arg0.object()
		);
	}
	void Outline::setEmpty()
	{
		callMethod<void>(
			"setEmpty",
			"()V"
		);
	}
	void Outline::setOval(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"setOval",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void Outline::setOval(jint arg0, jint arg1, jint arg2, jint arg3)
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
	void Outline::setRect(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"setRect",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void Outline::setRect(jint arg0, jint arg1, jint arg2, jint arg3)
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
	void Outline::setRoundRect(android::graphics::Rect arg0, jfloat arg1)
	{
		callMethod<void>(
			"setRoundRect",
			"(Landroid/graphics/Rect;F)V",
			arg0.object(),
			arg1
		);
	}
	void Outline::setRoundRect(jint arg0, jint arg1, jint arg2, jint arg3, jfloat arg4)
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

