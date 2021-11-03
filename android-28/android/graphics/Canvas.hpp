#pragma once

#include "../../JObject.hpp"

class JCharArray;
class JFloatArray;
class JIntArray;
class JShortArray;
namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class Canvas_EdgeType;
}
namespace android::graphics
{
	class Canvas_VertexMode;
}
namespace android::graphics
{
	class DrawFilter;
}
namespace android::graphics
{
	class Matrix;
}
namespace android::graphics
{
	class Paint;
}
namespace android::graphics
{
	class Path;
}
namespace android::graphics
{
	class Picture;
}
namespace android::graphics
{
	class PorterDuff_Mode;
}
namespace android::graphics
{
	class Rect;
}
namespace android::graphics
{
	class RectF;
}
namespace android::graphics
{
	class Region_Op;
}
class JString;
class JString;

namespace android::graphics
{
	class Canvas : public JObject
	{
	public:
		// Fields
		static jint ALL_SAVE_FLAG();
		
		// QJniObject forward
		template<typename ...Ts> explicit Canvas(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Canvas(QJniObject obj);
		
		// Constructors
		Canvas();
		Canvas(android::graphics::Bitmap arg0);
		
		// Methods
		jboolean clipOutPath(android::graphics::Path arg0) const;
		jboolean clipOutRect(android::graphics::Rect arg0) const;
		jboolean clipOutRect(android::graphics::RectF arg0) const;
		jboolean clipOutRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		jboolean clipOutRect(jint arg0, jint arg1, jint arg2, jint arg3) const;
		jboolean clipPath(android::graphics::Path arg0) const;
		jboolean clipPath(android::graphics::Path arg0, android::graphics::Region_Op arg1) const;
		jboolean clipRect(android::graphics::Rect arg0) const;
		jboolean clipRect(android::graphics::RectF arg0) const;
		jboolean clipRect(android::graphics::Rect arg0, android::graphics::Region_Op arg1) const;
		jboolean clipRect(android::graphics::RectF arg0, android::graphics::Region_Op arg1) const;
		jboolean clipRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		jboolean clipRect(jint arg0, jint arg1, jint arg2, jint arg3) const;
		jboolean clipRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Region_Op arg4) const;
		void concat(android::graphics::Matrix arg0) const;
		void drawARGB(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void drawArc(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, jboolean arg3, android::graphics::Paint arg4) const;
		void drawArc(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jboolean arg6, android::graphics::Paint arg7) const;
		void drawBitmap(android::graphics::Bitmap arg0, android::graphics::Matrix arg1, android::graphics::Paint arg2) const;
		void drawBitmap(android::graphics::Bitmap arg0, android::graphics::Rect arg1, android::graphics::Rect arg2, android::graphics::Paint arg3) const;
		void drawBitmap(android::graphics::Bitmap arg0, android::graphics::Rect arg1, android::graphics::RectF arg2, android::graphics::Paint arg3) const;
		void drawBitmap(android::graphics::Bitmap arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3) const;
		void drawBitmap(JIntArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, jint arg5, jint arg6, jboolean arg7, android::graphics::Paint arg8) const;
		void drawBitmap(JIntArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jboolean arg7, android::graphics::Paint arg8) const;
		void drawBitmapMesh(android::graphics::Bitmap arg0, jint arg1, jint arg2, JFloatArray arg3, jint arg4, JIntArray arg5, jint arg6, android::graphics::Paint arg7) const;
		void drawCircle(jfloat arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3) const;
		void drawColor(jint arg0) const;
		void drawColor(jint arg0, android::graphics::PorterDuff_Mode arg1) const;
		void drawLine(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4) const;
		void drawLines(JFloatArray arg0, android::graphics::Paint arg1) const;
		void drawLines(JFloatArray arg0, jint arg1, jint arg2, android::graphics::Paint arg3) const;
		void drawOval(android::graphics::RectF arg0, android::graphics::Paint arg1) const;
		void drawOval(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4) const;
		void drawPaint(android::graphics::Paint arg0) const;
		void drawPath(android::graphics::Path arg0, android::graphics::Paint arg1) const;
		void drawPicture(android::graphics::Picture arg0) const;
		void drawPicture(android::graphics::Picture arg0, android::graphics::Rect arg1) const;
		void drawPicture(android::graphics::Picture arg0, android::graphics::RectF arg1) const;
		void drawPoint(jfloat arg0, jfloat arg1, android::graphics::Paint arg2) const;
		void drawPoints(JFloatArray arg0, android::graphics::Paint arg1) const;
		void drawPoints(JFloatArray arg0, jint arg1, jint arg2, android::graphics::Paint arg3) const;
		void drawPosText(JString arg0, JFloatArray arg1, android::graphics::Paint arg2) const;
		void drawPosText(JCharArray arg0, jint arg1, jint arg2, JFloatArray arg3, android::graphics::Paint arg4) const;
		void drawRGB(jint arg0, jint arg1, jint arg2) const;
		void drawRect(android::graphics::Rect arg0, android::graphics::Paint arg1) const;
		void drawRect(android::graphics::RectF arg0, android::graphics::Paint arg1) const;
		void drawRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4) const;
		void drawRoundRect(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3) const;
		void drawRoundRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, android::graphics::Paint arg6) const;
		void drawText(JString arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3) const;
		void drawText(JCharArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, android::graphics::Paint arg5) const;
		void drawText(JString arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, android::graphics::Paint arg5) const;
		void drawTextOnPath(JString arg0, android::graphics::Path arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4) const;
		void drawTextOnPath(JCharArray arg0, jint arg1, jint arg2, android::graphics::Path arg3, jfloat arg4, jfloat arg5, android::graphics::Paint arg6) const;
		void drawTextRun(JCharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::graphics::Paint arg8) const;
		void drawTextRun(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::graphics::Paint arg8) const;
		void drawVertices(android::graphics::Canvas_VertexMode arg0, jint arg1, JFloatArray arg2, jint arg3, JFloatArray arg4, jint arg5, JIntArray arg6, jint arg7, JShortArray arg8, jint arg9, jint arg10, android::graphics::Paint arg11) const;
		android::graphics::Rect getClipBounds() const;
		jboolean getClipBounds(android::graphics::Rect arg0) const;
		jint getDensity() const;
		android::graphics::DrawFilter getDrawFilter() const;
		jint getHeight() const;
		android::graphics::Matrix getMatrix() const;
		void getMatrix(android::graphics::Matrix arg0) const;
		jint getMaximumBitmapHeight() const;
		jint getMaximumBitmapWidth() const;
		jint getSaveCount() const;
		jint getWidth() const;
		jboolean isHardwareAccelerated() const;
		jboolean isOpaque() const;
		jboolean quickReject(android::graphics::Path arg0, android::graphics::Canvas_EdgeType arg1) const;
		jboolean quickReject(android::graphics::RectF arg0, android::graphics::Canvas_EdgeType arg1) const;
		jboolean quickReject(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Canvas_EdgeType arg4) const;
		void restore() const;
		void restoreToCount(jint arg0) const;
		void rotate(jfloat arg0) const;
		void rotate(jfloat arg0, jfloat arg1, jfloat arg2) const;
		jint save() const;
		jint saveLayer(android::graphics::RectF arg0, android::graphics::Paint arg1) const;
		jint saveLayer(android::graphics::RectF arg0, android::graphics::Paint arg1, jint arg2) const;
		jint saveLayer(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4) const;
		jint saveLayer(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4, jint arg5) const;
		jint saveLayerAlpha(android::graphics::RectF arg0, jint arg1) const;
		jint saveLayerAlpha(android::graphics::RectF arg0, jint arg1, jint arg2) const;
		jint saveLayerAlpha(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4) const;
		jint saveLayerAlpha(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4, jint arg5) const;
		void scale(jfloat arg0, jfloat arg1) const;
		void scale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		void setBitmap(android::graphics::Bitmap arg0) const;
		void setDensity(jint arg0) const;
		void setDrawFilter(android::graphics::DrawFilter arg0) const;
		void setMatrix(android::graphics::Matrix arg0) const;
		void skew(jfloat arg0, jfloat arg1) const;
		void translate(jfloat arg0, jfloat arg1) const;
	};
} // namespace android::graphics

