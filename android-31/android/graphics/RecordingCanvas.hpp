#pragma once

#include "./Canvas.hpp"

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
namespace android::graphics::fonts
{
	class Font;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RecordingCanvas(const char *className, const char *sig, Ts...agv) : android::graphics::Canvas(className, sig, std::forward<Ts>(agv)...) {}
		RecordingCanvas(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void disableZ();
		void drawARGB(jint arg0, jint arg1, jint arg2, jint arg3);
		void drawArc(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, jboolean arg3, android::graphics::Paint arg4);
		void drawArc(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jboolean arg6, android::graphics::Paint arg7);
		void drawBitmap(android::graphics::Bitmap arg0, android::graphics::Matrix arg1, android::graphics::Paint arg2);
		void drawBitmap(android::graphics::Bitmap arg0, android::graphics::Rect arg1, android::graphics::Rect arg2, android::graphics::Paint arg3);
		void drawBitmap(android::graphics::Bitmap arg0, android::graphics::Rect arg1, android::graphics::RectF arg2, android::graphics::Paint arg3);
		void drawBitmap(android::graphics::Bitmap arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3);
		void drawBitmap(JIntArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, jint arg5, jint arg6, jboolean arg7, android::graphics::Paint arg8);
		void drawBitmap(JIntArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jboolean arg7, android::graphics::Paint arg8);
		void drawBitmapMesh(android::graphics::Bitmap arg0, jint arg1, jint arg2, JFloatArray arg3, jint arg4, JIntArray arg5, jint arg6, android::graphics::Paint arg7);
		void drawCircle(jfloat arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3);
		void drawColor(jint arg0);
		void drawColor(jint arg0, android::graphics::BlendMode arg1);
		void drawColor(jint arg0, android::graphics::PorterDuff_Mode arg1);
		void drawColor(jlong arg0, android::graphics::BlendMode arg1);
		void drawDoubleRoundRect(android::graphics::RectF arg0, JFloatArray arg1, android::graphics::RectF arg2, JFloatArray arg3, android::graphics::Paint arg4);
		void drawDoubleRoundRect(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, android::graphics::RectF arg3, jfloat arg4, jfloat arg5, android::graphics::Paint arg6);
		void drawGlyphs(JIntArray arg0, jint arg1, JFloatArray arg2, jint arg3, jint arg4, android::graphics::fonts::Font arg5, android::graphics::Paint arg6);
		void drawLine(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4);
		void drawLines(JFloatArray arg0, android::graphics::Paint arg1);
		void drawLines(JFloatArray arg0, jint arg1, jint arg2, android::graphics::Paint arg3);
		void drawOval(android::graphics::RectF arg0, android::graphics::Paint arg1);
		void drawOval(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4);
		void drawPaint(android::graphics::Paint arg0);
		void drawPatch(android::graphics::NinePatch arg0, android::graphics::Rect arg1, android::graphics::Paint arg2);
		void drawPatch(android::graphics::NinePatch arg0, android::graphics::RectF arg1, android::graphics::Paint arg2);
		void drawPath(android::graphics::Path arg0, android::graphics::Paint arg1);
		void drawPicture(android::graphics::Picture arg0);
		void drawPicture(android::graphics::Picture arg0, android::graphics::Rect arg1);
		void drawPicture(android::graphics::Picture arg0, android::graphics::RectF arg1);
		void drawPoint(jfloat arg0, jfloat arg1, android::graphics::Paint arg2);
		void drawPoints(JFloatArray arg0, android::graphics::Paint arg1);
		void drawPoints(JFloatArray arg0, jint arg1, jint arg2, android::graphics::Paint arg3);
		void drawPosText(JString arg0, JFloatArray arg1, android::graphics::Paint arg2);
		void drawPosText(JCharArray arg0, jint arg1, jint arg2, JFloatArray arg3, android::graphics::Paint arg4);
		void drawRGB(jint arg0, jint arg1, jint arg2);
		void drawRect(android::graphics::Rect arg0, android::graphics::Paint arg1);
		void drawRect(android::graphics::RectF arg0, android::graphics::Paint arg1);
		void drawRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4);
		void drawRenderNode(android::graphics::RenderNode arg0);
		void drawRoundRect(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3);
		void drawRoundRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, android::graphics::Paint arg6);
		void drawText(JString arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3);
		void drawText(JCharArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, android::graphics::Paint arg5);
		void drawText(JString arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, android::graphics::Paint arg5);
		void drawTextOnPath(JString arg0, android::graphics::Path arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4);
		void drawTextOnPath(JCharArray arg0, jint arg1, jint arg2, android::graphics::Path arg3, jfloat arg4, jfloat arg5, android::graphics::Paint arg6);
		void drawTextRun(JCharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::graphics::Paint arg8);
		void drawTextRun(android::graphics::text::MeasuredText arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::graphics::Paint arg8);
		void drawTextRun(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::graphics::Paint arg8);
		void drawVertices(android::graphics::Canvas_VertexMode arg0, jint arg1, JFloatArray arg2, jint arg3, JFloatArray arg4, jint arg5, JIntArray arg6, jint arg7, JShortArray arg8, jint arg9, jint arg10, android::graphics::Paint arg11);
		void enableZ();
		jint getHeight();
		jint getMaximumBitmapHeight();
		jint getMaximumBitmapWidth();
		jint getWidth();
		jboolean isHardwareAccelerated();
		jboolean isOpaque();
		void setBitmap(android::graphics::Bitmap arg0);
		void setDensity(jint arg0);
	};
} // namespace android::graphics

