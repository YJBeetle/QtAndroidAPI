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
	
	NinePatch::NinePatch(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NinePatch::NinePatch(android::graphics::Bitmap &arg0, jbyteArray &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.NinePatch",
			"(Landroid/graphics/Bitmap;[B)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	NinePatch::NinePatch(android::graphics::Bitmap &arg0, jbyteArray &arg1, jstring &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.NinePatch",
			"(Landroid/graphics/Bitmap;[BLjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	NinePatch::NinePatch(android::graphics::Bitmap &arg0, jbyteArray &arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.NinePatch",
			"(Landroid/graphics/Bitmap;[BLjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	
	// Methods
	jboolean NinePatch::isNinePatchChunk(jbyteArray arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.graphics.NinePatch",
			"isNinePatchChunk",
			"([B)Z",
			arg0
		);
	}
	void NinePatch::draw(android::graphics::Canvas arg0, android::graphics::Rect arg1)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Rect;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void NinePatch::draw(android::graphics::Canvas arg0, android::graphics::RectF arg1)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/RectF;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void NinePatch::draw(android::graphics::Canvas arg0, android::graphics::Rect arg1, android::graphics::Paint arg2)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Rect;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject NinePatch::getBitmap()
	{
		return __thiz.callObjectMethod(
			"getBitmap",
			"()Landroid/graphics/Bitmap;"
		);
	}
	jint NinePatch::getDensity()
	{
		return __thiz.callMethod<jint>(
			"getDensity",
			"()I"
		);
	}
	jint NinePatch::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jstring NinePatch::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject NinePatch::getPaint()
	{
		return __thiz.callObjectMethod(
			"getPaint",
			"()Landroid/graphics/Paint;"
		);
	}
	QAndroidJniObject NinePatch::getTransparentRegion(android::graphics::Rect arg0)
	{
		return __thiz.callObjectMethod(
			"getTransparentRegion",
			"(Landroid/graphics/Rect;)Landroid/graphics/Region;",
			arg0.__jniObject().object()
		);
	}
	jint NinePatch::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean NinePatch::hasAlpha()
	{
		return __thiz.callMethod<jboolean>(
			"hasAlpha",
			"()Z"
		);
	}
	void NinePatch::setPaint(android::graphics::Paint arg0)
	{
		__thiz.callMethod<void>(
			"setPaint",
			"(Landroid/graphics/Paint;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::graphics

