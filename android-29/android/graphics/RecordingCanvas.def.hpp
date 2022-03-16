#pragma once

#include "./Canvas.def.hpp"

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
	class BlendMode;
}
namespace android::graphics
{
	class Canvas_VertexMode;
}
namespace android::graphics
{
	class Matrix;
}
namespace android::graphics
{
	class NinePatch;
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
	class RenderNode;
}
namespace android::graphics::text
{
	class MeasuredText;
}
class JString;
class JString;

namespace android::graphics
{
	class RecordingCanvas : public android::graphics::Canvas
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RecordingCanvas(const char *className, const char *sig, Ts...agv) : android::graphics::Canvas(className, sig, std::forward<Ts>(agv)...) {}
		RecordingCanvas(QJniObject obj) : android::graphics::Canvas(obj) {}
		
		// Constructors
		
		// Methods
		void disableZ() const;
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
		void drawColor(jint arg0, android::graphics::BlendMode arg1) const;
		void drawColor(jint arg0, android::graphics::PorterDuff_Mode arg1) const;
		void drawColor(jlong arg0, android::graphics::BlendMode arg1) const;
		void drawDoubleRoundRect(android::graphics::RectF arg0, JFloatArray arg1, android::graphics::RectF arg2, JFloatArray arg3, android::graphics::Paint arg4) const;
		void drawDoubleRoundRect(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, android::graphics::RectF arg3, jfloat arg4, jfloat arg5, android::graphics::Paint arg6) const;
		void drawLine(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4) const;
		void drawLines(JFloatArray arg0, android::graphics::Paint arg1) const;
		void drawLines(JFloatArray arg0, jint arg1, jint arg2, android::graphics::Paint arg3) const;
		void drawOval(android::graphics::RectF arg0, android::graphics::Paint arg1) const;
		void drawOval(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4) const;
		void drawPaint(android::graphics::Paint arg0) const;
		void drawPatch(android::graphics::NinePatch arg0, android::graphics::Rect arg1, android::graphics::Paint arg2) const;
		void drawPatch(android::graphics::NinePatch arg0, android::graphics::RectF arg1, android::graphics::Paint arg2) const;
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
		void drawRenderNode(android::graphics::RenderNode arg0) const;
		void drawRoundRect(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3) const;
		void drawRoundRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, android::graphics::Paint arg6) const;
		void drawText(JString arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3) const;
		void drawText(JCharArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, android::graphics::Paint arg5) const;
		void drawText(JString arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, android::graphics::Paint arg5) const;
		void drawTextOnPath(JString arg0, android::graphics::Path arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4) const;
		void drawTextOnPath(JCharArray arg0, jint arg1, jint arg2, android::graphics::Path arg3, jfloat arg4, jfloat arg5, android::graphics::Paint arg6) const;
		void drawTextRun(JCharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::graphics::Paint arg8) const;
		void drawTextRun(android::graphics::text::MeasuredText arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::graphics::Paint arg8) const;
		void drawTextRun(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::graphics::Paint arg8) const;
		void drawVertices(android::graphics::Canvas_VertexMode arg0, jint arg1, JFloatArray arg2, jint arg3, JFloatArray arg4, jint arg5, JIntArray arg6, jint arg7, JShortArray arg8, jint arg9, jint arg10, android::graphics::Paint arg11) const;
		void enableZ() const;
		jint getHeight() const;
		jint getMaximumBitmapHeight() const;
		jint getMaximumBitmapWidth() const;
		jint getWidth() const;
		jboolean isHardwareAccelerated() const;
		jboolean isOpaque() const;
		void setBitmap(android::graphics::Bitmap arg0) const;
		void setDensity(jint arg0) const;
	};
} // namespace android::graphics

