#pragma once

#include "../../__JniBaseClass.hpp"

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
	class Region_Op;
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

namespace android::graphics
{
	class Canvas : public __JniBaseClass
	{
	public:
		// Fields
		static jint ALL_SAVE_FLAG();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Canvas(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Canvas(QAndroidJniObject obj);
		
		// Constructors
		Canvas();
		Canvas(android::graphics::Bitmap arg0);
		
		// Methods
		jboolean clipOutPath(android::graphics::Path arg0);
		jboolean clipOutRect(android::graphics::Rect arg0);
		jboolean clipOutRect(android::graphics::RectF arg0);
		jboolean clipOutRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		jboolean clipOutRect(jint arg0, jint arg1, jint arg2, jint arg3);
		jboolean clipPath(android::graphics::Path arg0);
		jboolean clipPath(android::graphics::Path arg0, android::graphics::Region_Op arg1);
		jboolean clipRect(android::graphics::Rect arg0);
		jboolean clipRect(android::graphics::RectF arg0);
		jboolean clipRect(android::graphics::Rect arg0, android::graphics::Region_Op arg1);
		jboolean clipRect(android::graphics::RectF arg0, android::graphics::Region_Op arg1);
		jboolean clipRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		jboolean clipRect(jint arg0, jint arg1, jint arg2, jint arg3);
		jboolean clipRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Region_Op arg4);
		void concat(android::graphics::Matrix arg0);
		void disableZ();
		void drawARGB(jint arg0, jint arg1, jint arg2, jint arg3);
		void drawArc(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, jboolean arg3, android::graphics::Paint arg4);
		void drawArc(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jboolean arg6, android::graphics::Paint arg7);
		void drawBitmap(android::graphics::Bitmap arg0, android::graphics::Matrix arg1, android::graphics::Paint arg2);
		void drawBitmap(android::graphics::Bitmap arg0, android::graphics::Rect arg1, android::graphics::Rect arg2, android::graphics::Paint arg3);
		void drawBitmap(android::graphics::Bitmap arg0, android::graphics::Rect arg1, android::graphics::RectF arg2, android::graphics::Paint arg3);
		void drawBitmap(android::graphics::Bitmap arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3);
		void drawBitmap(jintArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, jint arg5, jint arg6, jboolean arg7, android::graphics::Paint arg8);
		void drawBitmap(jintArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jboolean arg7, android::graphics::Paint arg8);
		void drawBitmapMesh(android::graphics::Bitmap arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4, jintArray arg5, jint arg6, android::graphics::Paint arg7);
		void drawCircle(jfloat arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3);
		void drawColor(jint arg0);
		void drawColor(jlong arg0);
		void drawColor(jint arg0, android::graphics::BlendMode arg1);
		void drawColor(jint arg0, android::graphics::PorterDuff_Mode arg1);
		void drawColor(jlong arg0, android::graphics::BlendMode arg1);
		void drawDoubleRoundRect(android::graphics::RectF arg0, jfloatArray arg1, android::graphics::RectF arg2, jfloatArray arg3, android::graphics::Paint arg4);
		void drawDoubleRoundRect(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, android::graphics::RectF arg3, jfloat arg4, jfloat arg5, android::graphics::Paint arg6);
		void drawGlyphs(jintArray arg0, jint arg1, jfloatArray arg2, jint arg3, jint arg4, android::graphics::fonts::Font arg5, android::graphics::Paint arg6);
		void drawLine(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4);
		void drawLines(jfloatArray arg0, android::graphics::Paint arg1);
		void drawLines(jfloatArray arg0, jint arg1, jint arg2, android::graphics::Paint arg3);
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
		void drawPoints(jfloatArray arg0, android::graphics::Paint arg1);
		void drawPoints(jfloatArray arg0, jint arg1, jint arg2, android::graphics::Paint arg3);
		void drawPosText(jstring arg0, jfloatArray arg1, android::graphics::Paint arg2);
		void drawPosText(jcharArray arg0, jint arg1, jint arg2, jfloatArray arg3, android::graphics::Paint arg4);
		void drawRGB(jint arg0, jint arg1, jint arg2);
		void drawRect(android::graphics::Rect arg0, android::graphics::Paint arg1);
		void drawRect(android::graphics::RectF arg0, android::graphics::Paint arg1);
		void drawRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4);
		void drawRenderNode(android::graphics::RenderNode arg0);
		void drawRoundRect(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3);
		void drawRoundRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, android::graphics::Paint arg6);
		void drawText(jstring arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3);
		void drawText(jcharArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, android::graphics::Paint arg5);
		void drawText(jstring arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, android::graphics::Paint arg5);
		void drawTextOnPath(jstring arg0, android::graphics::Path arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4);
		void drawTextOnPath(jcharArray arg0, jint arg1, jint arg2, android::graphics::Path arg3, jfloat arg4, jfloat arg5, android::graphics::Paint arg6);
		void drawTextRun(jcharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::graphics::Paint arg8);
		void drawTextRun(android::graphics::text::MeasuredText arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::graphics::Paint arg8);
		void drawTextRun(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::graphics::Paint arg8);
		void drawVertices(android::graphics::Canvas_VertexMode arg0, jint arg1, jfloatArray arg2, jint arg3, jfloatArray arg4, jint arg5, jintArray arg6, jint arg7, jshortArray arg8, jint arg9, jint arg10, android::graphics::Paint arg11);
		void enableZ();
		android::graphics::Rect getClipBounds();
		jboolean getClipBounds(android::graphics::Rect arg0);
		jint getDensity();
		android::graphics::DrawFilter getDrawFilter();
		jint getHeight();
		android::graphics::Matrix getMatrix();
		void getMatrix(android::graphics::Matrix arg0);
		jint getMaximumBitmapHeight();
		jint getMaximumBitmapWidth();
		jint getSaveCount();
		jint getWidth();
		jboolean isHardwareAccelerated();
		jboolean isOpaque();
		jboolean quickReject(android::graphics::Path arg0);
		jboolean quickReject(android::graphics::RectF arg0);
		jboolean quickReject(android::graphics::Path arg0, android::graphics::Canvas_EdgeType arg1);
		jboolean quickReject(android::graphics::RectF arg0, android::graphics::Canvas_EdgeType arg1);
		jboolean quickReject(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		jboolean quickReject(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Canvas_EdgeType arg4);
		void restore();
		void restoreToCount(jint arg0);
		void rotate(jfloat arg0);
		void rotate(jfloat arg0, jfloat arg1, jfloat arg2);
		jint save();
		jint saveLayer(android::graphics::RectF arg0, android::graphics::Paint arg1);
		jint saveLayer(android::graphics::RectF arg0, android::graphics::Paint arg1, jint arg2);
		jint saveLayer(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4);
		jint saveLayer(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Paint arg4, jint arg5);
		jint saveLayerAlpha(android::graphics::RectF arg0, jint arg1);
		jint saveLayerAlpha(android::graphics::RectF arg0, jint arg1, jint arg2);
		jint saveLayerAlpha(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4);
		jint saveLayerAlpha(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4, jint arg5);
		void scale(jfloat arg0, jfloat arg1);
		void scale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void setBitmap(android::graphics::Bitmap arg0);
		void setDensity(jint arg0);
		void setDrawFilter(android::graphics::DrawFilter arg0);
		void setMatrix(android::graphics::Matrix arg0);
		void skew(jfloat arg0, jfloat arg1);
		void translate(jfloat arg0, jfloat arg1);
	};
} // namespace android::graphics

