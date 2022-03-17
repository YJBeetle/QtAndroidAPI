#pragma once

#include "../../JCharArray.hpp"
#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JShortArray.hpp"
#include "./Bitmap.def.hpp"
#include "./BlendMode.def.hpp"
#include "./Canvas_EdgeType.def.hpp"
#include "./Canvas_VertexMode.def.hpp"
#include "./DrawFilter.def.hpp"
#include "./Matrix.def.hpp"
#include "./Paint.def.hpp"
#include "./Path.def.hpp"
#include "./Picture.def.hpp"
#include "./PorterDuff_Mode.def.hpp"
#include "./Rect.def.hpp"
#include "./RectF.def.hpp"
#include "./Region_Op.def.hpp"
#include "./RenderNode.def.hpp"
#include "./text/MeasuredText.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./Canvas.def.hpp"

namespace android::graphics
{
	// Fields
	inline jint Canvas::ALL_SAVE_FLAG()
	{
		return getStaticField<jint>(
			"android.graphics.Canvas",
			"ALL_SAVE_FLAG"
		);
	}
	
	// Constructors
	inline Canvas::Canvas()
		: JObject(
			"android.graphics.Canvas",
			"()V"
		) {}
	inline Canvas::Canvas(android::graphics::Bitmap arg0)
		: JObject(
			"android.graphics.Canvas",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean Canvas::clipOutPath(android::graphics::Path arg0) const
	{
		return callMethod<jboolean>(
			"clipOutPath",
			"(Landroid/graphics/Path;)Z",
			arg0.object()
		);
	}
	inline jboolean Canvas::clipOutRect(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"clipOutRect",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	inline jboolean Canvas::clipOutRect(android::graphics::RectF arg0) const
	{
		return callMethod<jboolean>(
			"clipOutRect",
			"(Landroid/graphics/RectF;)Z",
			arg0.object()
		);
	}
	inline jboolean Canvas::clipOutRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
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
	inline jboolean Canvas::clipOutRect(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	inline jboolean Canvas::clipPath(android::graphics::Path arg0) const
	{
		return callMethod<jboolean>(
			"clipPath",
			"(Landroid/graphics/Path;)Z",
			arg0.object()
		);
	}
	inline jboolean Canvas::clipPath(android::graphics::Path arg0, android::graphics::Region_Op arg1) const
	{
		return callMethod<jboolean>(
			"clipPath",
			"(Landroid/graphics/Path;Landroid/graphics/Region$Op;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Canvas::clipRect(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"clipRect",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	inline jboolean Canvas::clipRect(android::graphics::RectF arg0) const
	{
		return callMethod<jboolean>(
			"clipRect",
			"(Landroid/graphics/RectF;)Z",
			arg0.object()
		);
	}
	inline jboolean Canvas::clipRect(android::graphics::Rect arg0, android::graphics::Region_Op arg1) const
	{
		return callMethod<jboolean>(
			"clipRect",
			"(Landroid/graphics/Rect;Landroid/graphics/Region$Op;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Canvas::clipRect(android::graphics::RectF arg0, android::graphics::Region_Op arg1) const
	{
		return callMethod<jboolean>(
			"clipRect",
			"(Landroid/graphics/RectF;Landroid/graphics/Region$Op;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Canvas::clipRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
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
	inline jboolean Canvas::clipRect(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	inline jboolean Canvas::clipRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Region_Op arg4) const
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
	inline void Canvas::concat(android::graphics::Matrix arg0) const
	{
		callMethod<void>(
			"concat",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	inline void Canvas::disableZ() const
	{
		callMethod<void>(
			"disableZ",
			"()V"
		);
	}
	inline void Canvas::drawARGB(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	inline void Canvas::drawArc(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, jboolean arg3, android::graphics::Paint arg4) const
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
	inline void Canvas::drawArc(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jboolean arg6, android::graphics::Paint arg7) const
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
	inline void Canvas::drawBitmap(android::graphics::Bitmap arg0, android::graphics::Matrix arg1, android::graphics::Paint arg2) const
	{
		callMethod<void>(
			"drawBitmap",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Matrix;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void Canvas::drawBitmap(android::graphics::Bitmap arg0, android::graphics::Rect arg1, android::graphics::Rect arg2, android::graphics::Paint arg3) const
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
	inline void Canvas::drawBitmap(android::graphics::Bitmap arg0, android::graphics::Rect arg1, android::graphics::RectF arg2, android::graphics::Paint arg3) const
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
	inline void Canvas::drawBitmap(android::graphics::Bitmap arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3) const
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
	inline void Canvas::drawBitmap(JIntArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, jint arg5, jint arg6, jboolean arg7, android::graphics::Paint arg8) const
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
	inline void Canvas::drawBitmap(JIntArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jboolean arg7, android::graphics::Paint arg8) const
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
	inline void Canvas::drawBitmapMesh(android::graphics::Bitmap arg0, jint arg1, jint arg2, JFloatArray arg3, jint arg4, JIntArray arg5, jint arg6, android::graphics::Paint arg7) const
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
	inline void Canvas::drawCircle(jfloat arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3) const
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
	inline void Canvas::drawColor(jint arg0) const
	{
		callMethod<void>(
			"drawColor",
			"(I)V",
			arg0
		);
	}
	inline void Canvas::drawColor(jlong arg0) const
	{
		callMethod<void>(
			"drawColor",
			"(J)V",
			arg0
		);
	}
	inline void Canvas::drawColor(jint arg0, android::graphics::BlendMode arg1) const
	{
		callMethod<void>(
			"drawColor",
			"(ILandroid/graphics/BlendMode;)V",
			arg0,
			arg1.object()
		);
	}
	inline void Canvas::drawColor(jint arg0, android::graphics::PorterDuff_Mode arg1) const
	{
		callMethod<void>(
			"drawColor",
			"(ILandroid/graphics/PorterDuff$Mode;)V",
			arg0,
			arg1.object()
		);
	}
	inline void Canvas::drawColor(jlong arg0, android::graphics::BlendMode arg1) const
	{
		callMethod<void>(
			"drawColor",
			"(JLandroid/graphics/BlendMode;)V",
			arg0,
			arg1.object()
		);
	}
	inline void Canvas::drawDoubleRoundRect(android::graphics::RectF arg0, JFloatArray arg1, android::graphics::RectF arg2, JFloatArray arg3, android::graphics::Paint arg4) const
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
	inline void Canvas::drawDoubleRoundRect(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, android::graphics::RectF arg3, jfloat arg4, jfloat arg5, android::graphics::Paint arg6) const
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
	inline void Canvas::drawLine(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4) const
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
	inline void Canvas::drawLines(JFloatArray arg0, android::graphics::Paint arg1) const
	{
		callMethod<void>(
			"drawLines",
			"([FLandroid/graphics/Paint;)V",
			arg0.object<jfloatArray>(),
			arg1.object()
		);
	}
	inline void Canvas::drawLines(JFloatArray arg0, jint arg1, jint arg2, android::graphics::Paint arg3) const
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
	inline void Canvas::drawOval(android::graphics::RectF arg0, android::graphics::Paint arg1) const
	{
		callMethod<void>(
			"drawOval",
			"(Landroid/graphics/RectF;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Canvas::drawOval(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4) const
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
	inline void Canvas::drawPaint(android::graphics::Paint arg0) const
	{
		callMethod<void>(
			"drawPaint",
			"(Landroid/graphics/Paint;)V",
			arg0.object()
		);
	}
	inline void Canvas::drawPath(android::graphics::Path arg0, android::graphics::Paint arg1) const
	{
		callMethod<void>(
			"drawPath",
			"(Landroid/graphics/Path;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Canvas::drawPicture(android::graphics::Picture arg0) const
	{
		callMethod<void>(
			"drawPicture",
			"(Landroid/graphics/Picture;)V",
			arg0.object()
		);
	}
	inline void Canvas::drawPicture(android::graphics::Picture arg0, android::graphics::Rect arg1) const
	{
		callMethod<void>(
			"drawPicture",
			"(Landroid/graphics/Picture;Landroid/graphics/Rect;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Canvas::drawPicture(android::graphics::Picture arg0, android::graphics::RectF arg1) const
	{
		callMethod<void>(
			"drawPicture",
			"(Landroid/graphics/Picture;Landroid/graphics/RectF;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Canvas::drawPoint(jfloat arg0, jfloat arg1, android::graphics::Paint arg2) const
	{
		callMethod<void>(
			"drawPoint",
			"(FFLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void Canvas::drawPoints(JFloatArray arg0, android::graphics::Paint arg1) const
	{
		callMethod<void>(
			"drawPoints",
			"([FLandroid/graphics/Paint;)V",
			arg0.object<jfloatArray>(),
			arg1.object()
		);
	}
	inline void Canvas::drawPoints(JFloatArray arg0, jint arg1, jint arg2, android::graphics::Paint arg3) const
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
	inline void Canvas::drawPosText(JString arg0, JFloatArray arg1, android::graphics::Paint arg2) const
	{
		callMethod<void>(
			"drawPosText",
			"(Ljava/lang/String;[FLandroid/graphics/Paint;)V",
			arg0.object<jstring>(),
			arg1.object<jfloatArray>(),
			arg2.object()
		);
	}
	inline void Canvas::drawPosText(JCharArray arg0, jint arg1, jint arg2, JFloatArray arg3, android::graphics::Paint arg4) const
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
	inline void Canvas::drawRGB(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"drawRGB",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void Canvas::drawRect(android::graphics::Rect arg0, android::graphics::Paint arg1) const
	{
		callMethod<void>(
			"drawRect",
			"(Landroid/graphics/Rect;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Canvas::drawRect(android::graphics::RectF arg0, android::graphics::Paint arg1) const
	{
		callMethod<void>(
			"drawRect",
			"(Landroid/graphics/RectF;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Canvas::drawRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4) const
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
	inline void Canvas::drawRenderNode(android::graphics::RenderNode arg0) const
	{
		callMethod<void>(
			"drawRenderNode",
			"(Landroid/graphics/RenderNode;)V",
			arg0.object()
		);
	}
	inline void Canvas::drawRoundRect(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3) const
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
	inline void Canvas::drawRoundRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, android::graphics::Paint arg6) const
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
	inline void Canvas::drawText(JString arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3) const
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
	inline void Canvas::drawText(JCharArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, android::graphics::Paint arg5) const
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
	inline void Canvas::drawText(JString arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, android::graphics::Paint arg5) const
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
	inline void Canvas::drawTextOnPath(JString arg0, android::graphics::Path arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4) const
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
	inline void Canvas::drawTextOnPath(JCharArray arg0, jint arg1, jint arg2, android::graphics::Path arg3, jfloat arg4, jfloat arg5, android::graphics::Paint arg6) const
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
	inline void Canvas::drawTextRun(JCharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::graphics::Paint arg8) const
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
	inline void Canvas::drawTextRun(android::graphics::text::MeasuredText arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::graphics::Paint arg8) const
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
	inline void Canvas::drawTextRun(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::graphics::Paint arg8) const
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
	inline void Canvas::drawVertices(android::graphics::Canvas_VertexMode arg0, jint arg1, JFloatArray arg2, jint arg3, JFloatArray arg4, jint arg5, JIntArray arg6, jint arg7, JShortArray arg8, jint arg9, jint arg10, android::graphics::Paint arg11) const
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
	inline void Canvas::enableZ() const
	{
		callMethod<void>(
			"enableZ",
			"()V"
		);
	}
	inline android::graphics::Rect Canvas::getClipBounds() const
	{
		return callObjectMethod(
			"getClipBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	inline jboolean Canvas::getClipBounds(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"getClipBounds",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	inline jint Canvas::getDensity() const
	{
		return callMethod<jint>(
			"getDensity",
			"()I"
		);
	}
	inline android::graphics::DrawFilter Canvas::getDrawFilter() const
	{
		return callObjectMethod(
			"getDrawFilter",
			"()Landroid/graphics/DrawFilter;"
		);
	}
	inline jint Canvas::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline android::graphics::Matrix Canvas::getMatrix() const
	{
		return callObjectMethod(
			"getMatrix",
			"()Landroid/graphics/Matrix;"
		);
	}
	inline void Canvas::getMatrix(android::graphics::Matrix arg0) const
	{
		callMethod<void>(
			"getMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	inline jint Canvas::getMaximumBitmapHeight() const
	{
		return callMethod<jint>(
			"getMaximumBitmapHeight",
			"()I"
		);
	}
	inline jint Canvas::getMaximumBitmapWidth() const
	{
		return callMethod<jint>(
			"getMaximumBitmapWidth",
			"()I"
		);
	}
	inline jint Canvas::getSaveCount() const
	{
		return callMethod<jint>(
			"getSaveCount",
			"()I"
		);
	}
	inline jint Canvas::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	inline jboolean Canvas::isHardwareAccelerated() const
	{
		return callMethod<jboolean>(
			"isHardwareAccelerated",
			"()Z"
		);
	}
	inline jboolean Canvas::isOpaque() const
	{
		return callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	inline jboolean Canvas::quickReject(android::graphics::Path arg0, android::graphics::Canvas_EdgeType arg1) const
	{
		return callMethod<jboolean>(
			"quickReject",
			"(Landroid/graphics/Path;Landroid/graphics/Canvas$EdgeType;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Canvas::quickReject(android::graphics::RectF arg0, android::graphics::Canvas_EdgeType arg1) const
	{
		return callMethod<jboolean>(
			"quickReject",
			"(Landroid/graphics/RectF;Landroid/graphics/Canvas$EdgeType;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Canvas::quickReject(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Canvas_EdgeType arg4) const
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
	inline void Canvas::restore() const
	{
		callMethod<void>(
			"restore",
			"()V"
		);
	}
	inline void Canvas::restoreToCount(jint arg0) const
	{
		callMethod<void>(
			"restoreToCount",
			"(I)V",
			arg0
		);
	}
	inline void Canvas::rotate(jfloat arg0) const
	{
		callMethod<void>(
			"rotate",
			"(F)V",
			arg0
		);
	}
	inline void Canvas::rotate(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		callMethod<void>(
			"rotate",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline jint Canvas::save() const
	{
		return callMethod<jint>(
			"save",
			"()I"
		);
	}
	inline jint Canvas::saveLayer(android::graphics::RectF arg0, android::graphics::Paint arg1) const
	{
		return callMethod<jint>(
			"saveLayer",
			"(Landroid/graphics/RectF;Landroid/graphics/Paint;)I",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint Canvas::saveLayer(android::graphics::RectF arg0, android::graphics::Paint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"saveLayer",
			"(Landroid/graphics/RectF;Landroid/graphics/Paint;I)I",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline jint Canvas::saveLayer(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4) const
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
	inline jint Canvas::saveLayer(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4, jint arg5) const
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
	inline jint Canvas::saveLayerAlpha(android::graphics::RectF arg0, jint arg1) const
	{
		return callMethod<jint>(
			"saveLayerAlpha",
			"(Landroid/graphics/RectF;I)I",
			arg0.object(),
			arg1
		);
	}
	inline jint Canvas::saveLayerAlpha(android::graphics::RectF arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"saveLayerAlpha",
			"(Landroid/graphics/RectF;II)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline jint Canvas::saveLayerAlpha(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4) const
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
	inline jint Canvas::saveLayerAlpha(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4, jint arg5) const
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
	inline void Canvas::scale(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"scale",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void Canvas::scale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
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
	inline void Canvas::setBitmap(android::graphics::Bitmap arg0) const
	{
		callMethod<void>(
			"setBitmap",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		);
	}
	inline void Canvas::setDensity(jint arg0) const
	{
		callMethod<void>(
			"setDensity",
			"(I)V",
			arg0
		);
	}
	inline void Canvas::setDrawFilter(android::graphics::DrawFilter arg0) const
	{
		callMethod<void>(
			"setDrawFilter",
			"(Landroid/graphics/DrawFilter;)V",
			arg0.object()
		);
	}
	inline void Canvas::setMatrix(android::graphics::Matrix arg0) const
	{
		callMethod<void>(
			"setMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	inline void Canvas::skew(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"skew",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void Canvas::translate(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"translate",
			"(FF)V",
			arg0,
			arg1
		);
	}
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
