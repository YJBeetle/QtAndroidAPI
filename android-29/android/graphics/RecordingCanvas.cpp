#include "./Bitmap.hpp"
#include "./BlendMode.hpp"
#include "./Canvas_VertexMode.hpp"
#include "./Matrix.hpp"
#include "./NinePatch.hpp"
#include "./Paint.hpp"
#include "./Path.hpp"
#include "./Picture.hpp"
#include "./PorterDuff_Mode.hpp"
#include "./Rect.hpp"
#include "./RectF.hpp"
#include "./RenderNode.hpp"
#include "./text/MeasuredText.hpp"
#include "./RecordingCanvas.hpp"

namespace android::graphics
{
	// Fields
	
	RecordingCanvas::RecordingCanvas(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void RecordingCanvas::disableZ()
	{
		__thiz.callMethod<void>(
			"disableZ",
			"()V"
		);
	}
	void RecordingCanvas::drawARGB(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"drawARGB",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void RecordingCanvas::drawArc(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, jboolean arg3, android::graphics::Paint arg4)
	{
		__thiz.callMethod<void>(
			"drawArc",
			"(Landroid/graphics/RectF;FFZLandroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void RecordingCanvas::drawArc(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jboolean arg6, android::graphics::Paint arg7)
	{
		__thiz.callMethod<void>(
			"drawArc",
			"(FFFFFFZLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7.__jniObject().object()
		);
	}
	void RecordingCanvas::drawBitmap(android::graphics::Bitmap arg0, android::graphics::Matrix arg1, android::graphics::Paint arg2)
	{
		__thiz.callMethod<void>(
			"drawBitmap",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Matrix;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void RecordingCanvas::drawBitmap(android::graphics::Bitmap arg0, android::graphics::Rect arg1, android::graphics::Rect arg2, android::graphics::Paint arg3)
	{
		__thiz.callMethod<void>(
			"drawBitmap",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Rect;Landroid/graphics/Rect;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void RecordingCanvas::drawBitmap(android::graphics::Bitmap arg0, android::graphics::Rect arg1, android::graphics::RectF arg2, android::graphics::Paint arg3)
	{
		__thiz.callMethod<void>(
			"drawBitmap",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Rect;Landroid/graphics/RectF;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void RecordingCanvas::drawBitmap(android::graphics::Bitmap arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3)
	{
		__thiz.callMethod<void>(
			"drawBitmap",
			"(Landroid/graphics/Bitmap;FFLandroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void RecordingCanvas::drawBitmap(jintArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, jint arg5, jint arg6, jboolean arg7, android::graphics::Paint arg8)
	{
		__thiz.callMethod<void>(
			"drawBitmap",
			"([IIIFFIIZLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8.__jniObject().object()
		);
	}
	void RecordingCanvas::drawBitmap(jintArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jboolean arg7, android::graphics::Paint arg8)
	{
		__thiz.callMethod<void>(
			"drawBitmap",
			"([IIIIIIIZLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8.__jniObject().object()
		);
	}
	void RecordingCanvas::drawBitmapMesh(android::graphics::Bitmap arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4, jintArray arg5, jint arg6, android::graphics::Paint arg7)
	{
		__thiz.callMethod<void>(
			"drawBitmapMesh",
			"(Landroid/graphics/Bitmap;II[FI[IILandroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7.__jniObject().object()
		);
	}
	void RecordingCanvas::drawCircle(jfloat arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3)
	{
		__thiz.callMethod<void>(
			"drawCircle",
			"(FFFLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void RecordingCanvas::drawColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"drawColor",
			"(I)V",
			arg0
		);
	}
	void RecordingCanvas::drawColor(jint arg0, android::graphics::BlendMode arg1)
	{
		__thiz.callMethod<void>(
			"drawColor",
			"(ILandroid/graphics/BlendMode;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void RecordingCanvas::drawColor(jint arg0, android::graphics::PorterDuff_Mode arg1)
	{
		__thiz.callMethod<void>(
			"drawColor",
			"(ILandroid/graphics/PorterDuff$Mode;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void RecordingCanvas::drawColor(jlong arg0, android::graphics::BlendMode arg1)
	{
		__thiz.callMethod<void>(
			"drawColor",
			"(JLandroid/graphics/BlendMode;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void RecordingCanvas::drawDoubleRoundRect(android::graphics::RectF arg0, jfloatArray arg1, android::graphics::RectF arg2, jfloatArray arg3, android::graphics::Paint arg4)
	{
		__thiz.callMethod<void>(
			"drawDoubleRoundRect",
			"(Landroid/graphics/RectF;[FLandroid/graphics/RectF;[FLandroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object()
		);
	}
	void RecordingCanvas::drawDoubleRoundRect(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, android::graphics::RectF arg3, jfloat arg4, jfloat arg5, android::graphics::Paint arg6)
	{
		__thiz.callMethod<void>(
			"drawDoubleRoundRect",
			"(Landroid/graphics/RectF;FFLandroid/graphics/RectF;FFLandroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6.__jniObject().object()
		);
	}
	void RecordingCanvas::drawLine(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4)
	{
		__thiz.callMethod<void>(
			"drawLine",
			"(FFFFLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void RecordingCanvas::drawLines(jfloatArray arg0, android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"drawLines",
			"([FLandroid/graphics/Paint;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void RecordingCanvas::drawLines(jfloatArray arg0, jint arg1, jint arg2, android::graphics::Paint arg3)
	{
		__thiz.callMethod<void>(
			"drawLines",
			"([FIILandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void RecordingCanvas::drawOval(android::graphics::RectF arg0, android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"drawOval",
			"(Landroid/graphics/RectF;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RecordingCanvas::drawOval(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4)
	{
		__thiz.callMethod<void>(
			"drawOval",
			"(FFFFLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void RecordingCanvas::drawPaint(android::graphics::Paint arg0)
	{
		__thiz.callMethod<void>(
			"drawPaint",
			"(Landroid/graphics/Paint;)V",
			arg0.__jniObject().object()
		);
	}
	void RecordingCanvas::drawPatch(android::graphics::NinePatch arg0, android::graphics::Rect arg1, android::graphics::Paint arg2)
	{
		__thiz.callMethod<void>(
			"drawPatch",
			"(Landroid/graphics/NinePatch;Landroid/graphics/Rect;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void RecordingCanvas::drawPatch(android::graphics::NinePatch arg0, android::graphics::RectF arg1, android::graphics::Paint arg2)
	{
		__thiz.callMethod<void>(
			"drawPatch",
			"(Landroid/graphics/NinePatch;Landroid/graphics/RectF;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void RecordingCanvas::drawPath(android::graphics::Path arg0, android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"drawPath",
			"(Landroid/graphics/Path;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RecordingCanvas::drawPicture(android::graphics::Picture arg0)
	{
		__thiz.callMethod<void>(
			"drawPicture",
			"(Landroid/graphics/Picture;)V",
			arg0.__jniObject().object()
		);
	}
	void RecordingCanvas::drawPicture(android::graphics::Picture arg0, android::graphics::Rect arg1)
	{
		__thiz.callMethod<void>(
			"drawPicture",
			"(Landroid/graphics/Picture;Landroid/graphics/Rect;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RecordingCanvas::drawPicture(android::graphics::Picture arg0, android::graphics::RectF arg1)
	{
		__thiz.callMethod<void>(
			"drawPicture",
			"(Landroid/graphics/Picture;Landroid/graphics/RectF;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RecordingCanvas::drawPoint(jfloat arg0, jfloat arg1, android::graphics::Paint arg2)
	{
		__thiz.callMethod<void>(
			"drawPoint",
			"(FFLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void RecordingCanvas::drawPoints(jfloatArray arg0, android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"drawPoints",
			"([FLandroid/graphics/Paint;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void RecordingCanvas::drawPoints(jfloatArray arg0, jint arg1, jint arg2, android::graphics::Paint arg3)
	{
		__thiz.callMethod<void>(
			"drawPoints",
			"([FIILandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void RecordingCanvas::drawPosText(jstring arg0, jfloatArray arg1, android::graphics::Paint arg2)
	{
		__thiz.callMethod<void>(
			"drawPosText",
			"(Ljava/lang/String;[FLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void RecordingCanvas::drawPosText(jcharArray arg0, jint arg1, jint arg2, jfloatArray arg3, android::graphics::Paint arg4)
	{
		__thiz.callMethod<void>(
			"drawPosText",
			"([CII[FLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void RecordingCanvas::drawRGB(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"drawRGB",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RecordingCanvas::drawRect(android::graphics::Rect arg0, android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"drawRect",
			"(Landroid/graphics/Rect;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RecordingCanvas::drawRect(android::graphics::RectF arg0, android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"drawRect",
			"(Landroid/graphics/RectF;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RecordingCanvas::drawRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4)
	{
		__thiz.callMethod<void>(
			"drawRect",
			"(FFFFLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void RecordingCanvas::drawRenderNode(android::graphics::RenderNode arg0)
	{
		__thiz.callMethod<void>(
			"drawRenderNode",
			"(Landroid/graphics/RenderNode;)V",
			arg0.__jniObject().object()
		);
	}
	void RecordingCanvas::drawRoundRect(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3)
	{
		__thiz.callMethod<void>(
			"drawRoundRect",
			"(Landroid/graphics/RectF;FFLandroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void RecordingCanvas::drawRoundRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, android::graphics::Paint arg6)
	{
		__thiz.callMethod<void>(
			"drawRoundRect",
			"(FFFFFFLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object()
		);
	}
	void RecordingCanvas::drawText(jstring arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3)
	{
		__thiz.callMethod<void>(
			"drawText",
			"(Ljava/lang/String;FFLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void RecordingCanvas::drawText(jcharArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, android::graphics::Paint arg5)
	{
		__thiz.callMethod<void>(
			"drawText",
			"([CIIFFLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	void RecordingCanvas::drawText(jstring arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, android::graphics::Paint arg5)
	{
		__thiz.callMethod<void>(
			"drawText",
			"(Ljava/lang/CharSequence;IIFFLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	void RecordingCanvas::drawTextOnPath(jstring arg0, android::graphics::Path arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4)
	{
		__thiz.callMethod<void>(
			"drawTextOnPath",
			"(Ljava/lang/String;Landroid/graphics/Path;FFLandroid/graphics/Paint;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void RecordingCanvas::drawTextOnPath(jcharArray arg0, jint arg1, jint arg2, android::graphics::Path arg3, jfloat arg4, jfloat arg5, android::graphics::Paint arg6)
	{
		__thiz.callMethod<void>(
			"drawTextOnPath",
			"([CIILandroid/graphics/Path;FFLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6.__jniObject().object()
		);
	}
	void RecordingCanvas::drawTextRun(jcharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::graphics::Paint arg8)
	{
		__thiz.callMethod<void>(
			"drawTextRun",
			"([CIIIIFFZLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8.__jniObject().object()
		);
	}
	void RecordingCanvas::drawTextRun(android::graphics::text::MeasuredText arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::graphics::Paint arg8)
	{
		__thiz.callMethod<void>(
			"drawTextRun",
			"(Landroid/graphics/text/MeasuredText;IIIIFFZLandroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8.__jniObject().object()
		);
	}
	void RecordingCanvas::drawTextRun(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::graphics::Paint arg8)
	{
		__thiz.callMethod<void>(
			"drawTextRun",
			"(Ljava/lang/CharSequence;IIIIFFZLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8.__jniObject().object()
		);
	}
	void RecordingCanvas::drawVertices(android::graphics::Canvas_VertexMode arg0, jint arg1, jfloatArray arg2, jint arg3, jfloatArray arg4, jint arg5, jintArray arg6, jint arg7, jshortArray arg8, jint arg9, jint arg10, android::graphics::Paint arg11)
	{
		__thiz.callMethod<void>(
			"drawVertices",
			"(Landroid/graphics/Canvas$VertexMode;I[FI[FI[II[SIILandroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg10,
			arg11.__jniObject().object()
		);
	}
	void RecordingCanvas::enableZ()
	{
		__thiz.callMethod<void>(
			"enableZ",
			"()V"
		);
	}
	jint RecordingCanvas::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint RecordingCanvas::getMaximumBitmapHeight()
	{
		return __thiz.callMethod<jint>(
			"getMaximumBitmapHeight",
			"()I"
		);
	}
	jint RecordingCanvas::getMaximumBitmapWidth()
	{
		return __thiz.callMethod<jint>(
			"getMaximumBitmapWidth",
			"()I"
		);
	}
	jint RecordingCanvas::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean RecordingCanvas::isHardwareAccelerated()
	{
		return __thiz.callMethod<jboolean>(
			"isHardwareAccelerated",
			"()Z"
		);
	}
	jboolean RecordingCanvas::isOpaque()
	{
		return __thiz.callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	void RecordingCanvas::setBitmap(android::graphics::Bitmap arg0)
	{
		__thiz.callMethod<void>(
			"setBitmap",
			"(Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object()
		);
	}
	void RecordingCanvas::setDensity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDensity",
			"(I)V",
			arg0
		);
	}
} // namespace android::graphics

