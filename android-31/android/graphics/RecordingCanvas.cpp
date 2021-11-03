#include "../../JCharArray.hpp"
#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JShortArray.hpp"
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
#include "./fonts/Font.hpp"
#include "./text/MeasuredText.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./RecordingCanvas.hpp"

namespace android::graphics
{
	// Fields
	
	// QJniObject forward
	RecordingCanvas::RecordingCanvas(QJniObject obj) : android::graphics::Canvas(obj) {}
	
	// Constructors
	
	// Methods
	void RecordingCanvas::disableZ()
	{
		callMethod<void>(
			"disableZ",
			"()V"
		);
	}
	void RecordingCanvas::drawARGB(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
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
		callMethod<void>(
			"drawArc",
			"(Landroid/graphics/RectF;FFZLandroid/graphics/Paint;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	void RecordingCanvas::drawArc(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jboolean arg6, android::graphics::Paint arg7)
	{
		callMethod<void>(
			"drawArc",
			"(FFFFFFZLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7.object()
		);
	}
	void RecordingCanvas::drawBitmap(android::graphics::Bitmap arg0, android::graphics::Matrix arg1, android::graphics::Paint arg2)
	{
		callMethod<void>(
			"drawBitmap",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Matrix;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void RecordingCanvas::drawBitmap(android::graphics::Bitmap arg0, android::graphics::Rect arg1, android::graphics::Rect arg2, android::graphics::Paint arg3)
	{
		callMethod<void>(
			"drawBitmap",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Rect;Landroid/graphics/Rect;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	void RecordingCanvas::drawBitmap(android::graphics::Bitmap arg0, android::graphics::Rect arg1, android::graphics::RectF arg2, android::graphics::Paint arg3)
	{
		callMethod<void>(
			"drawBitmap",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Rect;Landroid/graphics/RectF;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	void RecordingCanvas::drawBitmap(android::graphics::Bitmap arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3)
	{
		callMethod<void>(
			"drawBitmap",
			"(Landroid/graphics/Bitmap;FFLandroid/graphics/Paint;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	void RecordingCanvas::drawBitmap(JIntArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, jint arg5, jint arg6, jboolean arg7, android::graphics::Paint arg8)
	{
		callMethod<void>(
			"drawBitmap",
			"([IIIFFIIZLandroid/graphics/Paint;)V",
			arg0.object<jintArray>(),
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
	void RecordingCanvas::drawBitmap(JIntArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jboolean arg7, android::graphics::Paint arg8)
	{
		callMethod<void>(
			"drawBitmap",
			"([IIIIIIIZLandroid/graphics/Paint;)V",
			arg0.object<jintArray>(),
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
	void RecordingCanvas::drawBitmapMesh(android::graphics::Bitmap arg0, jint arg1, jint arg2, JFloatArray arg3, jint arg4, JIntArray arg5, jint arg6, android::graphics::Paint arg7)
	{
		callMethod<void>(
			"drawBitmapMesh",
			"(Landroid/graphics/Bitmap;II[FI[IILandroid/graphics/Paint;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object<jfloatArray>(),
			arg4,
			arg5.object<jintArray>(),
			arg6,
			arg7.object()
		);
	}
	void RecordingCanvas::drawCircle(jfloat arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3)
	{
		callMethod<void>(
			"drawCircle",
			"(FFFLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void RecordingCanvas::drawColor(jint arg0)
	{
		callMethod<void>(
			"drawColor",
			"(I)V",
			arg0
		);
	}
	void RecordingCanvas::drawColor(jint arg0, android::graphics::BlendMode arg1)
	{
		callMethod<void>(
			"drawColor",
			"(ILandroid/graphics/BlendMode;)V",
			arg0,
			arg1.object()
		);
	}
	void RecordingCanvas::drawColor(jint arg0, android::graphics::PorterDuff_Mode arg1)
	{
		callMethod<void>(
			"drawColor",
			"(ILandroid/graphics/PorterDuff$Mode;)V",
			arg0,
			arg1.object()
		);
	}
	void RecordingCanvas::drawColor(jlong arg0, android::graphics::BlendMode arg1)
	{
		callMethod<void>(
			"drawColor",
			"(JLandroid/graphics/BlendMode;)V",
			arg0,
			arg1.object()
		);
	}
	void RecordingCanvas::drawDoubleRoundRect(android::graphics::RectF arg0, JFloatArray arg1, android::graphics::RectF arg2, JFloatArray arg3, android::graphics::Paint arg4)
	{
		callMethod<void>(
			"drawDoubleRoundRect",
			"(Landroid/graphics/RectF;[FLandroid/graphics/RectF;[FLandroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object<jfloatArray>(),
			arg2.object(),
			arg3.object<jfloatArray>(),
			arg4.object()
		);
	}
	void RecordingCanvas::drawDoubleRoundRect(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, android::graphics::RectF arg3, jfloat arg4, jfloat arg5, android::graphics::Paint arg6)
	{
		callMethod<void>(
			"drawDoubleRoundRect",
			"(Landroid/graphics/RectF;FFLandroid/graphics/RectF;FFLandroid/graphics/Paint;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object(),
			arg4,
			arg5,
			arg6.object()
		);
	}
	void RecordingCanvas::drawGlyphs(JIntArray arg0, jint arg1, JFloatArray arg2, jint arg3, jint arg4, android::graphics::fonts::Font arg5, android::graphics::Paint arg6)
	{
		callMethod<void>(
			"drawGlyphs",
			"([II[FIILandroid/graphics/fonts/Font;Landroid/graphics/Paint;)V",
			arg0.object<jintArray>(),
			arg1,
			arg2.object<jfloatArray>(),
			arg3,
			arg4,
			arg5.object(),
			arg6.object()
		);
	}
	void RecordingCanvas::drawLine(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4)
	{
		callMethod<void>(
			"drawLine",
			"(FFFFLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	void RecordingCanvas::drawLines(JFloatArray arg0, android::graphics::Paint arg1)
	{
		callMethod<void>(
			"drawLines",
			"([FLandroid/graphics/Paint;)V",
			arg0.object<jfloatArray>(),
			arg1.object()
		);
	}
	void RecordingCanvas::drawLines(JFloatArray arg0, jint arg1, jint arg2, android::graphics::Paint arg3)
	{
		callMethod<void>(
			"drawLines",
			"([FIILandroid/graphics/Paint;)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	void RecordingCanvas::drawOval(android::graphics::RectF arg0, android::graphics::Paint arg1)
	{
		callMethod<void>(
			"drawOval",
			"(Landroid/graphics/RectF;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void RecordingCanvas::drawOval(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4)
	{
		callMethod<void>(
			"drawOval",
			"(FFFFLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	void RecordingCanvas::drawPaint(android::graphics::Paint arg0)
	{
		callMethod<void>(
			"drawPaint",
			"(Landroid/graphics/Paint;)V",
			arg0.object()
		);
	}
	void RecordingCanvas::drawPatch(android::graphics::NinePatch arg0, android::graphics::Rect arg1, android::graphics::Paint arg2)
	{
		callMethod<void>(
			"drawPatch",
			"(Landroid/graphics/NinePatch;Landroid/graphics/Rect;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void RecordingCanvas::drawPatch(android::graphics::NinePatch arg0, android::graphics::RectF arg1, android::graphics::Paint arg2)
	{
		callMethod<void>(
			"drawPatch",
			"(Landroid/graphics/NinePatch;Landroid/graphics/RectF;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void RecordingCanvas::drawPath(android::graphics::Path arg0, android::graphics::Paint arg1)
	{
		callMethod<void>(
			"drawPath",
			"(Landroid/graphics/Path;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void RecordingCanvas::drawPicture(android::graphics::Picture arg0)
	{
		callMethod<void>(
			"drawPicture",
			"(Landroid/graphics/Picture;)V",
			arg0.object()
		);
	}
	void RecordingCanvas::drawPicture(android::graphics::Picture arg0, android::graphics::Rect arg1)
	{
		callMethod<void>(
			"drawPicture",
			"(Landroid/graphics/Picture;Landroid/graphics/Rect;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void RecordingCanvas::drawPicture(android::graphics::Picture arg0, android::graphics::RectF arg1)
	{
		callMethod<void>(
			"drawPicture",
			"(Landroid/graphics/Picture;Landroid/graphics/RectF;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void RecordingCanvas::drawPoint(jfloat arg0, jfloat arg1, android::graphics::Paint arg2)
	{
		callMethod<void>(
			"drawPoint",
			"(FFLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void RecordingCanvas::drawPoints(JFloatArray arg0, android::graphics::Paint arg1)
	{
		callMethod<void>(
			"drawPoints",
			"([FLandroid/graphics/Paint;)V",
			arg0.object<jfloatArray>(),
			arg1.object()
		);
	}
	void RecordingCanvas::drawPoints(JFloatArray arg0, jint arg1, jint arg2, android::graphics::Paint arg3)
	{
		callMethod<void>(
			"drawPoints",
			"([FIILandroid/graphics/Paint;)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	void RecordingCanvas::drawPosText(JString arg0, JFloatArray arg1, android::graphics::Paint arg2)
	{
		callMethod<void>(
			"drawPosText",
			"(Ljava/lang/String;[FLandroid/graphics/Paint;)V",
			arg0.object<jstring>(),
			arg1.object<jfloatArray>(),
			arg2.object()
		);
	}
	void RecordingCanvas::drawPosText(JCharArray arg0, jint arg1, jint arg2, JFloatArray arg3, android::graphics::Paint arg4)
	{
		callMethod<void>(
			"drawPosText",
			"([CII[FLandroid/graphics/Paint;)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2,
			arg3.object<jfloatArray>(),
			arg4.object()
		);
	}
	void RecordingCanvas::drawRGB(jint arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"drawRGB",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RecordingCanvas::drawRect(android::graphics::Rect arg0, android::graphics::Paint arg1)
	{
		callMethod<void>(
			"drawRect",
			"(Landroid/graphics/Rect;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void RecordingCanvas::drawRect(android::graphics::RectF arg0, android::graphics::Paint arg1)
	{
		callMethod<void>(
			"drawRect",
			"(Landroid/graphics/RectF;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void RecordingCanvas::drawRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4)
	{
		callMethod<void>(
			"drawRect",
			"(FFFFLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	void RecordingCanvas::drawRenderNode(android::graphics::RenderNode arg0)
	{
		callMethod<void>(
			"drawRenderNode",
			"(Landroid/graphics/RenderNode;)V",
			arg0.object()
		);
	}
	void RecordingCanvas::drawRoundRect(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3)
	{
		callMethod<void>(
			"drawRoundRect",
			"(Landroid/graphics/RectF;FFLandroid/graphics/Paint;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	void RecordingCanvas::drawRoundRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, android::graphics::Paint arg6)
	{
		callMethod<void>(
			"drawRoundRect",
			"(FFFFFFLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.object()
		);
	}
	void RecordingCanvas::drawText(JString arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3)
	{
		callMethod<void>(
			"drawText",
			"(Ljava/lang/String;FFLandroid/graphics/Paint;)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	void RecordingCanvas::drawText(JCharArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, android::graphics::Paint arg5)
	{
		callMethod<void>(
			"drawText",
			"([CIIFFLandroid/graphics/Paint;)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	void RecordingCanvas::drawText(JString arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, android::graphics::Paint arg5)
	{
		callMethod<void>(
			"drawText",
			"(Ljava/lang/CharSequence;IIFFLandroid/graphics/Paint;)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	void RecordingCanvas::drawTextOnPath(JString arg0, android::graphics::Path arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4)
	{
		callMethod<void>(
			"drawTextOnPath",
			"(Ljava/lang/String;Landroid/graphics/Path;FFLandroid/graphics/Paint;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2,
			arg3,
			arg4.object()
		);
	}
	void RecordingCanvas::drawTextOnPath(JCharArray arg0, jint arg1, jint arg2, android::graphics::Path arg3, jfloat arg4, jfloat arg5, android::graphics::Paint arg6)
	{
		callMethod<void>(
			"drawTextOnPath",
			"([CIILandroid/graphics/Path;FFLandroid/graphics/Paint;)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2,
			arg3.object(),
			arg4,
			arg5,
			arg6.object()
		);
	}
	void RecordingCanvas::drawTextRun(JCharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::graphics::Paint arg8)
	{
		callMethod<void>(
			"drawTextRun",
			"([CIIIIFFZLandroid/graphics/Paint;)V",
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
	void RecordingCanvas::drawTextRun(android::graphics::text::MeasuredText arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::graphics::Paint arg8)
	{
		callMethod<void>(
			"drawTextRun",
			"(Landroid/graphics/text/MeasuredText;IIIIFFZLandroid/graphics/Paint;)V",
			arg0.object(),
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
	void RecordingCanvas::drawTextRun(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::graphics::Paint arg8)
	{
		callMethod<void>(
			"drawTextRun",
			"(Ljava/lang/CharSequence;IIIIFFZLandroid/graphics/Paint;)V",
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
	void RecordingCanvas::drawVertices(android::graphics::Canvas_VertexMode arg0, jint arg1, JFloatArray arg2, jint arg3, JFloatArray arg4, jint arg5, JIntArray arg6, jint arg7, JShortArray arg8, jint arg9, jint arg10, android::graphics::Paint arg11)
	{
		callMethod<void>(
			"drawVertices",
			"(Landroid/graphics/Canvas$VertexMode;I[FI[FI[II[SIILandroid/graphics/Paint;)V",
			arg0.object(),
			arg1,
			arg2.object<jfloatArray>(),
			arg3,
			arg4.object<jfloatArray>(),
			arg5,
			arg6.object<jintArray>(),
			arg7,
			arg8.object<jshortArray>(),
			arg9,
			arg10,
			arg11.object()
		);
	}
	void RecordingCanvas::enableZ()
	{
		callMethod<void>(
			"enableZ",
			"()V"
		);
	}
	jint RecordingCanvas::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint RecordingCanvas::getMaximumBitmapHeight()
	{
		return callMethod<jint>(
			"getMaximumBitmapHeight",
			"()I"
		);
	}
	jint RecordingCanvas::getMaximumBitmapWidth()
	{
		return callMethod<jint>(
			"getMaximumBitmapWidth",
			"()I"
		);
	}
	jint RecordingCanvas::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean RecordingCanvas::isHardwareAccelerated()
	{
		return callMethod<jboolean>(
			"isHardwareAccelerated",
			"()Z"
		);
	}
	jboolean RecordingCanvas::isOpaque()
	{
		return callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	void RecordingCanvas::setBitmap(android::graphics::Bitmap arg0)
	{
		callMethod<void>(
			"setBitmap",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		);
	}
	void RecordingCanvas::setDensity(jint arg0)
	{
		callMethod<void>(
			"setDensity",
			"(I)V",
			arg0
		);
	}
} // namespace android::graphics

