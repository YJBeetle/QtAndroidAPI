#pragma once

#ifndef ANDROID_GRAPHICS_RECORDINGCANVAS
#define ANDROID_GRAPHICS_RECORDINGCANVAS

#include "../../__JniBaseClass.hpp"
#include "Canvas.hpp"

namespace __jni_impl::android::graphics
{
	class RenderNode;
}
namespace __jni_impl::android::graphics
{
	class NinePatch;
}
namespace __jni_impl::android::graphics
{
	class RectF;
}
namespace __jni_impl::android::graphics
{
	class Paint;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::graphics
{
	class Picture;
}
namespace __jni_impl::android::graphics
{
	class Matrix;
}
namespace __jni_impl::android::graphics
{
	class PorterDuff_Mode;
}
namespace __jni_impl::android::graphics
{
	class BlendMode;
}
namespace __jni_impl::android::graphics
{
	class Path;
}
namespace __jni_impl::android::graphics::text
{
	class MeasuredText;
}
namespace __jni_impl::android::graphics
{
	class Canvas_VertexMode;
}

namespace __jni_impl::android::graphics
{
	class RecordingCanvas : public __jni_impl::android::graphics::Canvas
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean isOpaque();
		void setDensity(jint arg0);
		jint getWidth();
		jint getHeight();
		jboolean isHardwareAccelerated();
		void drawPatch(__jni_impl::android::graphics::NinePatch arg0, __jni_impl::android::graphics::RectF arg1, __jni_impl::android::graphics::Paint arg2);
		void drawPatch(__jni_impl::android::graphics::NinePatch arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::Paint arg2);
		void setBitmap(__jni_impl::android::graphics::Bitmap arg0);
		void enableZ();
		void disableZ();
		jint getMaximumBitmapWidth();
		jint getMaximumBitmapHeight();
		void drawPicture(__jni_impl::android::graphics::Picture arg0);
		void drawPicture(__jni_impl::android::graphics::Picture arg0, __jni_impl::android::graphics::Rect arg1);
		void drawPicture(__jni_impl::android::graphics::Picture arg0, __jni_impl::android::graphics::RectF arg1);
		void drawArc(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jboolean arg6, __jni_impl::android::graphics::Paint arg7);
		void drawArc(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2, jboolean arg3, __jni_impl::android::graphics::Paint arg4);
		void drawARGB(jint arg0, jint arg1, jint arg2, jint arg3);
		void drawBitmap(__jni_impl::android::graphics::Bitmap arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::Rect arg2, __jni_impl::android::graphics::Paint arg3);
		void drawBitmap(__jni_impl::android::graphics::Bitmap arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::RectF arg2, __jni_impl::android::graphics::Paint arg3);
		void drawBitmap(__jni_impl::android::graphics::Bitmap arg0, __jni_impl::android::graphics::Matrix arg1, __jni_impl::android::graphics::Paint arg2);
		void drawBitmap(jintArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jboolean arg7, __jni_impl::android::graphics::Paint arg8);
		void drawBitmap(jintArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, jint arg5, jint arg6, jboolean arg7, __jni_impl::android::graphics::Paint arg8);
		void drawBitmap(__jni_impl::android::graphics::Bitmap arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Paint arg3);
		void drawBitmapMesh(__jni_impl::android::graphics::Bitmap arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4, jintArray arg5, jint arg6, __jni_impl::android::graphics::Paint arg7);
		void drawCircle(jfloat arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Paint arg3);
		void drawColor(jint arg0, __jni_impl::android::graphics::PorterDuff_Mode arg1);
		void drawColor(jlong arg0, __jni_impl::android::graphics::BlendMode arg1);
		void drawColor(jint arg0, __jni_impl::android::graphics::BlendMode arg1);
		void drawColor(jint arg0);
		void drawLine(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Paint arg4);
		void drawLines(jfloatArray arg0, __jni_impl::android::graphics::Paint arg1);
		void drawLines(jfloatArray arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Paint arg3);
		void drawOval(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::Paint arg1);
		void drawOval(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Paint arg4);
		void drawPaint(__jni_impl::android::graphics::Paint arg0);
		void drawPath(__jni_impl::android::graphics::Path arg0, __jni_impl::android::graphics::Paint arg1);
		void drawPoint(jfloat arg0, jfloat arg1, __jni_impl::android::graphics::Paint arg2);
		void drawPoints(jfloatArray arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Paint arg3);
		void drawPoints(jfloatArray arg0, __jni_impl::android::graphics::Paint arg1);
		void drawPosText(jstring arg0, jfloatArray arg1, __jni_impl::android::graphics::Paint arg2);
		void drawPosText(jcharArray arg0, jint arg1, jint arg2, jfloatArray arg3, __jni_impl::android::graphics::Paint arg4);
		void drawRect(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::Paint arg1);
		void drawRect(__jni_impl::android::graphics::Rect arg0, __jni_impl::android::graphics::Paint arg1);
		void drawRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Paint arg4);
		void drawRGB(jint arg0, jint arg1, jint arg2);
		void drawRoundRect(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Paint arg3);
		void drawRoundRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, __jni_impl::android::graphics::Paint arg6);
		void drawDoubleRoundRect(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::RectF arg3, jfloat arg4, jfloat arg5, __jni_impl::android::graphics::Paint arg6);
		void drawDoubleRoundRect(__jni_impl::android::graphics::RectF arg0, jfloatArray arg1, __jni_impl::android::graphics::RectF arg2, jfloatArray arg3, __jni_impl::android::graphics::Paint arg4);
		void drawText(jstring arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, __jni_impl::android::graphics::Paint arg5);
		void drawText(jstring arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Paint arg3);
		void drawText(jcharArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, __jni_impl::android::graphics::Paint arg5);
		void drawTextOnPath(jcharArray arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Path arg3, jfloat arg4, jfloat arg5, __jni_impl::android::graphics::Paint arg6);
		void drawTextOnPath(jstring arg0, __jni_impl::android::graphics::Path arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Paint arg4);
		void drawTextRun(__jni_impl::android::graphics::text::MeasuredText arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, __jni_impl::android::graphics::Paint arg8);
		void drawTextRun(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, __jni_impl::android::graphics::Paint arg8);
		void drawTextRun(jcharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, __jni_impl::android::graphics::Paint arg8);
		void drawVertices(__jni_impl::android::graphics::Canvas_VertexMode arg0, jint arg1, jfloatArray arg2, jint arg3, jfloatArray arg4, jint arg5, jintArray arg6, jint arg7, jshortArray arg8, jint arg9, jint arg10, __jni_impl::android::graphics::Paint arg11);
		void drawRenderNode(__jni_impl::android::graphics::RenderNode arg0);
	};
} // namespace __jni_impl::android::graphics

#include "RenderNode.hpp"
#include "NinePatch.hpp"
#include "RectF.hpp"
#include "Paint.hpp"
#include "Rect.hpp"
#include "Bitmap.hpp"
#include "Picture.hpp"
#include "Matrix.hpp"
#include "PorterDuff_Mode.hpp"
#include "BlendMode.hpp"
#include "Path.hpp"
#include "text/MeasuredText.hpp"
#include "Canvas_VertexMode.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void RecordingCanvas::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.RecordingCanvas",
			"(V)V");
	}
	
	// Methods
	jboolean RecordingCanvas::isOpaque()
	{
		return __thiz.callMethod<jboolean>(
			"isOpaque",
			"()Z");
	}
	void RecordingCanvas::setDensity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDensity",
			"(I)V",
			arg0);
	}
	jint RecordingCanvas::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I");
	}
	jint RecordingCanvas::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I");
	}
	jboolean RecordingCanvas::isHardwareAccelerated()
	{
		return __thiz.callMethod<jboolean>(
			"isHardwareAccelerated",
			"()Z");
	}
	void RecordingCanvas::drawPatch(__jni_impl::android::graphics::NinePatch arg0, __jni_impl::android::graphics::RectF arg1, __jni_impl::android::graphics::Paint arg2)
	{
		__thiz.callMethod<void>(
			"drawPatch",
			"(Landroid/graphics/NinePatch;Landroid/graphics/RectF;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void RecordingCanvas::drawPatch(__jni_impl::android::graphics::NinePatch arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::Paint arg2)
	{
		__thiz.callMethod<void>(
			"drawPatch",
			"(Landroid/graphics/NinePatch;Landroid/graphics/Rect;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void RecordingCanvas::setBitmap(__jni_impl::android::graphics::Bitmap arg0)
	{
		__thiz.callMethod<void>(
			"setBitmap",
			"(Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object());
	}
	void RecordingCanvas::enableZ()
	{
		__thiz.callMethod<void>(
			"enableZ",
			"()V");
	}
	void RecordingCanvas::disableZ()
	{
		__thiz.callMethod<void>(
			"disableZ",
			"()V");
	}
	jint RecordingCanvas::getMaximumBitmapWidth()
	{
		return __thiz.callMethod<jint>(
			"getMaximumBitmapWidth",
			"()I");
	}
	jint RecordingCanvas::getMaximumBitmapHeight()
	{
		return __thiz.callMethod<jint>(
			"getMaximumBitmapHeight",
			"()I");
	}
	void RecordingCanvas::drawPicture(__jni_impl::android::graphics::Picture arg0)
	{
		__thiz.callMethod<void>(
			"drawPicture",
			"(Landroid/graphics/Picture;)V",
			arg0.__jniObject().object());
	}
	void RecordingCanvas::drawPicture(__jni_impl::android::graphics::Picture arg0, __jni_impl::android::graphics::Rect arg1)
	{
		__thiz.callMethod<void>(
			"drawPicture",
			"(Landroid/graphics/Picture;Landroid/graphics/Rect;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void RecordingCanvas::drawPicture(__jni_impl::android::graphics::Picture arg0, __jni_impl::android::graphics::RectF arg1)
	{
		__thiz.callMethod<void>(
			"drawPicture",
			"(Landroid/graphics/Picture;Landroid/graphics/RectF;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void RecordingCanvas::drawArc(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jboolean arg6, __jni_impl::android::graphics::Paint arg7)
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
			arg7.__jniObject().object());
	}
	void RecordingCanvas::drawArc(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2, jboolean arg3, __jni_impl::android::graphics::Paint arg4)
	{
		__thiz.callMethod<void>(
			"drawArc",
			"(Landroid/graphics/RectF;FFZLandroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object());
	}
	void RecordingCanvas::drawARGB(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"drawARGB",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void RecordingCanvas::drawBitmap(__jni_impl::android::graphics::Bitmap arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::Rect arg2, __jni_impl::android::graphics::Paint arg3)
	{
		__thiz.callMethod<void>(
			"drawBitmap",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Rect;Landroid/graphics/Rect;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	void RecordingCanvas::drawBitmap(__jni_impl::android::graphics::Bitmap arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::RectF arg2, __jni_impl::android::graphics::Paint arg3)
	{
		__thiz.callMethod<void>(
			"drawBitmap",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Rect;Landroid/graphics/RectF;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	void RecordingCanvas::drawBitmap(__jni_impl::android::graphics::Bitmap arg0, __jni_impl::android::graphics::Matrix arg1, __jni_impl::android::graphics::Paint arg2)
	{
		__thiz.callMethod<void>(
			"drawBitmap",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Matrix;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void RecordingCanvas::drawBitmap(jintArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jboolean arg7, __jni_impl::android::graphics::Paint arg8)
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
			arg8.__jniObject().object());
	}
	void RecordingCanvas::drawBitmap(jintArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, jint arg5, jint arg6, jboolean arg7, __jni_impl::android::graphics::Paint arg8)
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
			arg8.__jniObject().object());
	}
	void RecordingCanvas::drawBitmap(__jni_impl::android::graphics::Bitmap arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Paint arg3)
	{
		__thiz.callMethod<void>(
			"drawBitmap",
			"(Landroid/graphics/Bitmap;FFLandroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void RecordingCanvas::drawBitmapMesh(__jni_impl::android::graphics::Bitmap arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4, jintArray arg5, jint arg6, __jni_impl::android::graphics::Paint arg7)
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
			arg7.__jniObject().object());
	}
	void RecordingCanvas::drawCircle(jfloat arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Paint arg3)
	{
		__thiz.callMethod<void>(
			"drawCircle",
			"(FFFLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void RecordingCanvas::drawColor(jint arg0, __jni_impl::android::graphics::PorterDuff_Mode arg1)
	{
		__thiz.callMethod<void>(
			"drawColor",
			"(ILandroid/graphics/PorterDuff$Mode;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void RecordingCanvas::drawColor(jlong arg0, __jni_impl::android::graphics::BlendMode arg1)
	{
		__thiz.callMethod<void>(
			"drawColor",
			"(JLandroid/graphics/BlendMode;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void RecordingCanvas::drawColor(jint arg0, __jni_impl::android::graphics::BlendMode arg1)
	{
		__thiz.callMethod<void>(
			"drawColor",
			"(ILandroid/graphics/BlendMode;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void RecordingCanvas::drawColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"drawColor",
			"(I)V",
			arg0);
	}
	void RecordingCanvas::drawLine(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Paint arg4)
	{
		__thiz.callMethod<void>(
			"drawLine",
			"(FFFFLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object());
	}
	void RecordingCanvas::drawLines(jfloatArray arg0, __jni_impl::android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"drawLines",
			"([FLandroid/graphics/Paint;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void RecordingCanvas::drawLines(jfloatArray arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Paint arg3)
	{
		__thiz.callMethod<void>(
			"drawLines",
			"([FIILandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void RecordingCanvas::drawOval(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"drawOval",
			"(Landroid/graphics/RectF;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void RecordingCanvas::drawOval(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Paint arg4)
	{
		__thiz.callMethod<void>(
			"drawOval",
			"(FFFFLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object());
	}
	void RecordingCanvas::drawPaint(__jni_impl::android::graphics::Paint arg0)
	{
		__thiz.callMethod<void>(
			"drawPaint",
			"(Landroid/graphics/Paint;)V",
			arg0.__jniObject().object());
	}
	void RecordingCanvas::drawPath(__jni_impl::android::graphics::Path arg0, __jni_impl::android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"drawPath",
			"(Landroid/graphics/Path;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void RecordingCanvas::drawPoint(jfloat arg0, jfloat arg1, __jni_impl::android::graphics::Paint arg2)
	{
		__thiz.callMethod<void>(
			"drawPoint",
			"(FFLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void RecordingCanvas::drawPoints(jfloatArray arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Paint arg3)
	{
		__thiz.callMethod<void>(
			"drawPoints",
			"([FIILandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void RecordingCanvas::drawPoints(jfloatArray arg0, __jni_impl::android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"drawPoints",
			"([FLandroid/graphics/Paint;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void RecordingCanvas::drawPosText(jstring arg0, jfloatArray arg1, __jni_impl::android::graphics::Paint arg2)
	{
		__thiz.callMethod<void>(
			"drawPosText",
			"(Ljava/lang/String;[FLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void RecordingCanvas::drawPosText(jcharArray arg0, jint arg1, jint arg2, jfloatArray arg3, __jni_impl::android::graphics::Paint arg4)
	{
		__thiz.callMethod<void>(
			"drawPosText",
			"([CII[FLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object());
	}
	void RecordingCanvas::drawRect(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"drawRect",
			"(Landroid/graphics/RectF;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void RecordingCanvas::drawRect(__jni_impl::android::graphics::Rect arg0, __jni_impl::android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"drawRect",
			"(Landroid/graphics/Rect;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void RecordingCanvas::drawRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Paint arg4)
	{
		__thiz.callMethod<void>(
			"drawRect",
			"(FFFFLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object());
	}
	void RecordingCanvas::drawRGB(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"drawRGB",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void RecordingCanvas::drawRoundRect(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Paint arg3)
	{
		__thiz.callMethod<void>(
			"drawRoundRect",
			"(Landroid/graphics/RectF;FFLandroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void RecordingCanvas::drawRoundRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, __jni_impl::android::graphics::Paint arg6)
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
			arg6.__jniObject().object());
	}
	void RecordingCanvas::drawDoubleRoundRect(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::RectF arg3, jfloat arg4, jfloat arg5, __jni_impl::android::graphics::Paint arg6)
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
			arg6.__jniObject().object());
	}
	void RecordingCanvas::drawDoubleRoundRect(__jni_impl::android::graphics::RectF arg0, jfloatArray arg1, __jni_impl::android::graphics::RectF arg2, jfloatArray arg3, __jni_impl::android::graphics::Paint arg4)
	{
		__thiz.callMethod<void>(
			"drawDoubleRoundRect",
			"(Landroid/graphics/RectF;[FLandroid/graphics/RectF;[FLandroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object());
	}
	void RecordingCanvas::drawText(jstring arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, __jni_impl::android::graphics::Paint arg5)
	{
		__thiz.callMethod<void>(
			"drawText",
			"(Ljava/lang/String;IIFFLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object());
	}
	void RecordingCanvas::drawText(jstring arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Paint arg3)
	{
		__thiz.callMethod<void>(
			"drawText",
			"(Ljava/lang/String;FFLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void RecordingCanvas::drawText(jcharArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, __jni_impl::android::graphics::Paint arg5)
	{
		__thiz.callMethod<void>(
			"drawText",
			"([CIIFFLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object());
	}
	void RecordingCanvas::drawTextOnPath(jcharArray arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Path arg3, jfloat arg4, jfloat arg5, __jni_impl::android::graphics::Paint arg6)
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
			arg6.__jniObject().object());
	}
	void RecordingCanvas::drawTextOnPath(jstring arg0, __jni_impl::android::graphics::Path arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Paint arg4)
	{
		__thiz.callMethod<void>(
			"drawTextOnPath",
			"(Ljava/lang/String;Landroid/graphics/Path;FFLandroid/graphics/Paint;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4.__jniObject().object());
	}
	void RecordingCanvas::drawTextRun(__jni_impl::android::graphics::text::MeasuredText arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, __jni_impl::android::graphics::Paint arg8)
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
			arg8.__jniObject().object());
	}
	void RecordingCanvas::drawTextRun(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, __jni_impl::android::graphics::Paint arg8)
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
			arg8.__jniObject().object());
	}
	void RecordingCanvas::drawTextRun(jcharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, __jni_impl::android::graphics::Paint arg8)
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
			arg8.__jniObject().object());
	}
	void RecordingCanvas::drawVertices(__jni_impl::android::graphics::Canvas_VertexMode arg0, jint arg1, jfloatArray arg2, jint arg3, jfloatArray arg4, jint arg5, jintArray arg6, jint arg7, jshortArray arg8, jint arg9, jint arg10, __jni_impl::android::graphics::Paint arg11)
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
			arg11.__jniObject().object());
	}
	void RecordingCanvas::drawRenderNode(__jni_impl::android::graphics::RenderNode arg0)
	{
		__thiz.callMethod<void>(
			"drawRenderNode",
			"(Landroid/graphics/RenderNode;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class RecordingCanvas : public __jni_impl::android::graphics::RecordingCanvas
	{
	public:
		RecordingCanvas(QAndroidJniObject obj) { __thiz = obj; }
		RecordingCanvas()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_RECORDINGCANVAS

