#include "../../JCharArray.hpp"
#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JShortArray.hpp"
#include "./Bitmap.hpp"
#include "./Canvas_EdgeType.hpp"
#include "./Canvas_VertexMode.hpp"
#include "./DrawFilter.hpp"
#include "./Matrix.hpp"
#include "./Paint.hpp"
#include "./Path.hpp"
#include "./Picture.hpp"
#include "./PorterDuff_Mode.hpp"
#include "./Rect.hpp"
#include "./RectF.hpp"
#include "./Region_Op.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./Canvas.hpp"

namespace android::graphics
{
	// Fields
	jint Canvas::ALL_SAVE_FLAG()
	{
		return getStaticField<jint>(
			"android.graphics.Canvas",
			"ALL_SAVE_FLAG"
		);
	}
	
	// QAndroidJniObject forward
	Canvas::Canvas(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Canvas::Canvas()
		: JObject(
			"android.graphics.Canvas",
			"()V"
		) {}
	Canvas::Canvas(android::graphics::Bitmap arg0)
		: JObject(
			"android.graphics.Canvas",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean Canvas::clipOutPath(android::graphics::Path arg0)
	{
		return callMethod<jboolean>(
			"clipOutPath",
			"(Landroid/graphics/Path;)Z",
			arg0.object()
		);
	}
	jboolean Canvas::clipOutRect(android::graphics::Rect arg0)
	{
		return callMethod<jboolean>(
			"clipOutRect",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jboolean Canvas::clipOutRect(android::graphics::RectF arg0)
	{
		return callMethod<jboolean>(
			"clipOutRect",
			"(Landroid/graphics/RectF;)Z",
			arg0.object()
		);
	}
	jboolean Canvas::clipOutRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return callMethod<jboolean>(
			"clipOutRect",
			"(FFFF)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean Canvas::clipOutRect(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return callMethod<jboolean>(
			"clipOutRect",
			"(IIII)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean Canvas::clipPath(android::graphics::Path arg0)
	{
		return callMethod<jboolean>(
			"clipPath",
			"(Landroid/graphics/Path;)Z",
			arg0.object()
		);
	}
	jboolean Canvas::clipPath(android::graphics::Path arg0, android::graphics::Region_Op arg1)
	{
		return callMethod<jboolean>(
			"clipPath",
			"(Landroid/graphics/Path;Landroid/graphics/Region$Op;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Canvas::clipRect(android::graphics::Rect arg0)
	{
		return callMethod<jboolean>(
			"clipRect",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jboolean Canvas::clipRect(android::graphics::RectF arg0)
	{
		return callMethod<jboolean>(
			"clipRect",
			"(Landroid/graphics/RectF;)Z",
			arg0.object()
		);
	}
	jboolean Canvas::clipRect(android::graphics::Rect arg0, android::graphics::Region_Op arg1)
	{
		return callMethod<jboolean>(
			"clipRect",
			"(Landroid/graphics/Rect;Landroid/graphics/Region$Op;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Canvas::clipRect(android::graphics::RectF arg0, android::graphics::Region_Op arg1)
	{
		return callMethod<jboolean>(
			"clipRect",
			"(Landroid/graphics/RectF;Landroid/graphics/Region$Op;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Canvas::clipRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return callMethod<jboolean>(
			"clipRect",
			"(FFFF)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean Canvas::clipRect(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return callMethod<jboolean>(
			"clipRect",
			"(IIII)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean Canvas::clipRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Region_Op arg4)
	{
		return callMethod<jboolean>(
			"clipRect",
			"(FFFFLandroid/graphics/Region$Op;)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	void Canvas::concat(android::graphics::Matrix arg0)
	{
		callMethod<void>(
			"concat",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	void Canvas::drawARGB(jint arg0, jint arg1, jint arg2, jint arg3)
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
	void Canvas::drawArc(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, jboolean arg3, android::graphics::Paint arg4)
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
	void Canvas::drawArc(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jboolean arg6, android::graphics::Paint arg7)
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
	void Canvas::drawBitmap(android::graphics::Bitmap arg0, android::graphics::Matrix arg1, android::graphics::Paint arg2)
	{
		callMethod<void>(
			"drawBitmap",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Matrix;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void Canvas::drawBitmap(android::graphics::Bitmap arg0, android::graphics::Rect arg1, android::graphics::Rect arg2, android::graphics::Paint arg3)
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
	void Canvas::drawBitmap(android::graphics::Bitmap arg0, android::graphics::Rect arg1, android::graphics::RectF arg2, android::graphics::Paint arg3)
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
	void Canvas::drawBitmap(android::graphics::Bitmap arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3)
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
	void Canvas::drawBitmap(JIntArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, jint arg5, jint arg6, jboolean arg7, android::graphics::Paint arg8)
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
	void Canvas::drawBitmap(JIntArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jboolean arg7, android::graphics::Paint arg8)
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
	void Canvas::drawBitmapMesh(android::graphics::Bitmap arg0, jint arg1, jint arg2, JFloatArray arg3, jint arg4, JIntArray arg5, jint arg6, android::graphics::Paint arg7)
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
	void Canvas::drawCircle(jfloat arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3)
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
	void Canvas::drawColor(jint arg0)
	{
		callMethod<void>(
			"drawColor",
			"(I)V",
			arg0
		);
	}
	void Canvas::drawColor(jint arg0, android::graphics::PorterDuff_Mode arg1)
	{
		callMethod<void>(
			"drawColor",
			"(ILandroid/graphics/PorterDuff$Mode;)V",
			arg0,
			arg1.object()
		);
	}
	void Canvas::drawLine(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4)
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
	void Canvas::drawLines(JFloatArray arg0, android::graphics::Paint arg1)
	{
		callMethod<void>(
			"drawLines",
			"([FLandroid/graphics/Paint;)V",
			arg0.object<jfloatArray>(),
			arg1.object()
		);
	}
	void Canvas::drawLines(JFloatArray arg0, jint arg1, jint arg2, android::graphics::Paint arg3)
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
	void Canvas::drawOval(android::graphics::RectF arg0, android::graphics::Paint arg1)
	{
		callMethod<void>(
			"drawOval",
			"(Landroid/graphics/RectF;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Canvas::drawOval(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4)
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
	void Canvas::drawPaint(android::graphics::Paint arg0)
	{
		callMethod<void>(
			"drawPaint",
			"(Landroid/graphics/Paint;)V",
			arg0.object()
		);
	}
	void Canvas::drawPath(android::graphics::Path arg0, android::graphics::Paint arg1)
	{
		callMethod<void>(
			"drawPath",
			"(Landroid/graphics/Path;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Canvas::drawPicture(android::graphics::Picture arg0)
	{
		callMethod<void>(
			"drawPicture",
			"(Landroid/graphics/Picture;)V",
			arg0.object()
		);
	}
	void Canvas::drawPicture(android::graphics::Picture arg0, android::graphics::Rect arg1)
	{
		callMethod<void>(
			"drawPicture",
			"(Landroid/graphics/Picture;Landroid/graphics/Rect;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Canvas::drawPicture(android::graphics::Picture arg0, android::graphics::RectF arg1)
	{
		callMethod<void>(
			"drawPicture",
			"(Landroid/graphics/Picture;Landroid/graphics/RectF;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Canvas::drawPoint(jfloat arg0, jfloat arg1, android::graphics::Paint arg2)
	{
		callMethod<void>(
			"drawPoint",
			"(FFLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void Canvas::drawPoints(JFloatArray arg0, android::graphics::Paint arg1)
	{
		callMethod<void>(
			"drawPoints",
			"([FLandroid/graphics/Paint;)V",
			arg0.object<jfloatArray>(),
			arg1.object()
		);
	}
	void Canvas::drawPoints(JFloatArray arg0, jint arg1, jint arg2, android::graphics::Paint arg3)
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
	void Canvas::drawPosText(JString arg0, JFloatArray arg1, android::graphics::Paint arg2)
	{
		callMethod<void>(
			"drawPosText",
			"(Ljava/lang/String;[FLandroid/graphics/Paint;)V",
			arg0.object<jstring>(),
			arg1.object<jfloatArray>(),
			arg2.object()
		);
	}
	void Canvas::drawPosText(JCharArray arg0, jint arg1, jint arg2, JFloatArray arg3, android::graphics::Paint arg4)
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
	void Canvas::drawRGB(jint arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"drawRGB",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Canvas::drawRect(android::graphics::Rect arg0, android::graphics::Paint arg1)
	{
		callMethod<void>(
			"drawRect",
			"(Landroid/graphics/Rect;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Canvas::drawRect(android::graphics::RectF arg0, android::graphics::Paint arg1)
	{
		callMethod<void>(
			"drawRect",
			"(Landroid/graphics/RectF;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Canvas::drawRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4)
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
	void Canvas::drawRoundRect(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3)
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
	void Canvas::drawRoundRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, android::graphics::Paint arg6)
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
	void Canvas::drawText(JString arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3)
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
	void Canvas::drawText(JCharArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, android::graphics::Paint arg5)
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
	void Canvas::drawText(JString arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, android::graphics::Paint arg5)
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
	void Canvas::drawTextOnPath(JString arg0, android::graphics::Path arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4)
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
	void Canvas::drawTextOnPath(JCharArray arg0, jint arg1, jint arg2, android::graphics::Path arg3, jfloat arg4, jfloat arg5, android::graphics::Paint arg6)
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
	void Canvas::drawTextRun(JCharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::graphics::Paint arg8)
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
	void Canvas::drawTextRun(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::graphics::Paint arg8)
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
	void Canvas::drawVertices(android::graphics::Canvas_VertexMode arg0, jint arg1, JFloatArray arg2, jint arg3, JFloatArray arg4, jint arg5, JIntArray arg6, jint arg7, JShortArray arg8, jint arg9, jint arg10, android::graphics::Paint arg11)
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
	android::graphics::Rect Canvas::getClipBounds()
	{
		return callObjectMethod(
			"getClipBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	jboolean Canvas::getClipBounds(android::graphics::Rect arg0)
	{
		return callMethod<jboolean>(
			"getClipBounds",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jint Canvas::getDensity()
	{
		return callMethod<jint>(
			"getDensity",
			"()I"
		);
	}
	android::graphics::DrawFilter Canvas::getDrawFilter()
	{
		return callObjectMethod(
			"getDrawFilter",
			"()Landroid/graphics/DrawFilter;"
		);
	}
	jint Canvas::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	android::graphics::Matrix Canvas::getMatrix()
	{
		return callObjectMethod(
			"getMatrix",
			"()Landroid/graphics/Matrix;"
		);
	}
	void Canvas::getMatrix(android::graphics::Matrix arg0)
	{
		callMethod<void>(
			"getMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	jint Canvas::getMaximumBitmapHeight()
	{
		return callMethod<jint>(
			"getMaximumBitmapHeight",
			"()I"
		);
	}
	jint Canvas::getMaximumBitmapWidth()
	{
		return callMethod<jint>(
			"getMaximumBitmapWidth",
			"()I"
		);
	}
	jint Canvas::getSaveCount()
	{
		return callMethod<jint>(
			"getSaveCount",
			"()I"
		);
	}
	jint Canvas::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean Canvas::isHardwareAccelerated()
	{
		return callMethod<jboolean>(
			"isHardwareAccelerated",
			"()Z"
		);
	}
	jboolean Canvas::isOpaque()
	{
		return callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	jboolean Canvas::quickReject(android::graphics::Path arg0, android::graphics::Canvas_EdgeType arg1)
	{
		return callMethod<jboolean>(
			"quickReject",
			"(Landroid/graphics/Path;Landroid/graphics/Canvas$EdgeType;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Canvas::quickReject(android::graphics::RectF arg0, android::graphics::Canvas_EdgeType arg1)
	{
		return callMethod<jboolean>(
			"quickReject",
			"(Landroid/graphics/RectF;Landroid/graphics/Canvas$EdgeType;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Canvas::quickReject(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Canvas_EdgeType arg4)
	{
		return callMethod<jboolean>(
			"quickReject",
			"(FFFFLandroid/graphics/Canvas$EdgeType;)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	void Canvas::restore()
	{
		callMethod<void>(
			"restore",
			"()V"
		);
	}
	void Canvas::restoreToCount(jint arg0)
	{
		callMethod<void>(
			"restoreToCount",
			"(I)V",
			arg0
		);
	}
	void Canvas::rotate(jfloat arg0)
	{
		callMethod<void>(
			"rotate",
			"(F)V",
			arg0
		);
	}
	void Canvas::rotate(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		callMethod<void>(
			"rotate",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	jint Canvas::save()
	{
		return callMethod<jint>(
			"save",
			"()I"
		);
	}
	jint Canvas::saveLayer(android::graphics::RectF arg0, android::graphics::Paint arg1)
	{
		return callMethod<jint>(
			"saveLayer",
			"(Landroid/graphics/RectF;Landroid/graphics/Paint;)I",
			arg0.object(),
			arg1.object()
		);
	}
	jint Canvas::saveLayer(android::graphics::RectF arg0, android::graphics::Paint arg1, jint arg2)
	{
		return callMethod<jint>(
			"saveLayer",
			"(Landroid/graphics/RectF;Landroid/graphics/Paint;I)I",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jint Canvas::saveLayer(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4)
	{
		return callMethod<jint>(
			"saveLayer",
			"(FFFFLandroid/graphics/Paint;)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	jint Canvas::saveLayer(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4, jint arg5)
	{
		return callMethod<jint>(
			"saveLayer",
			"(FFFFLandroid/graphics/Paint;I)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object(),
			arg5
		);
	}
	jint Canvas::saveLayerAlpha(android::graphics::RectF arg0, jint arg1)
	{
		return callMethod<jint>(
			"saveLayerAlpha",
			"(Landroid/graphics/RectF;I)I",
			arg0.object(),
			arg1
		);
	}
	jint Canvas::saveLayerAlpha(android::graphics::RectF arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"saveLayerAlpha",
			"(Landroid/graphics/RectF;II)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jint Canvas::saveLayerAlpha(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4)
	{
		return callMethod<jint>(
			"saveLayerAlpha",
			"(FFFFI)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jint Canvas::saveLayerAlpha(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4, jint arg5)
	{
		return callMethod<jint>(
			"saveLayerAlpha",
			"(FFFFII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void Canvas::scale(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"scale",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Canvas::scale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		callMethod<void>(
			"scale",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Canvas::setBitmap(android::graphics::Bitmap arg0)
	{
		callMethod<void>(
			"setBitmap",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		);
	}
	void Canvas::setDensity(jint arg0)
	{
		callMethod<void>(
			"setDensity",
			"(I)V",
			arg0
		);
	}
	void Canvas::setDrawFilter(android::graphics::DrawFilter arg0)
	{
		callMethod<void>(
			"setDrawFilter",
			"(Landroid/graphics/DrawFilter;)V",
			arg0.object()
		);
	}
	void Canvas::setMatrix(android::graphics::Matrix arg0)
	{
		callMethod<void>(
			"setMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	void Canvas::skew(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"skew",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Canvas::translate(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"translate",
			"(FF)V",
			arg0,
			arg1
		);
	}
} // namespace android::graphics

