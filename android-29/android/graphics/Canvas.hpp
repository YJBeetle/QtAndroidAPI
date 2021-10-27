#pragma once

#ifndef ANDROID_GRAPHICS_CANVAS
#define ANDROID_GRAPHICS_CANVAS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::graphics
{
	class BlendMode;
}
namespace __jni_impl::android::graphics
{
	class Canvas_EdgeType;
}
namespace __jni_impl::android::graphics
{
	class Canvas_VertexMode;
}
namespace __jni_impl::android::graphics
{
	class DrawFilter;
}
namespace __jni_impl::android::graphics
{
	class Matrix;
}
namespace __jni_impl::android::graphics
{
	class Paint;
}
namespace __jni_impl::android::graphics
{
	class Path;
}
namespace __jni_impl::android::graphics
{
	class Picture;
}
namespace __jni_impl::android::graphics
{
	class PorterDuff_Mode;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics
{
	class RectF;
}
namespace __jni_impl::android::graphics
{
	class Region_Op;
}
namespace __jni_impl::android::graphics
{
	class RenderNode;
}
namespace __jni_impl::android::graphics::text
{
	class MeasuredText;
}

namespace __jni_impl::android::graphics
{
	class Canvas : public __JniBaseClass
	{
	public:
		// Fields
		static jint ALL_SAVE_FLAG();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::graphics::Bitmap arg0);
		
		// Methods
		jboolean clipOutPath(__jni_impl::android::graphics::Path arg0);
		jboolean clipOutRect(__jni_impl::android::graphics::Rect arg0);
		jboolean clipOutRect(__jni_impl::android::graphics::RectF arg0);
		jboolean clipOutRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		jboolean clipOutRect(jint arg0, jint arg1, jint arg2, jint arg3);
		jboolean clipPath(__jni_impl::android::graphics::Path arg0);
		jboolean clipPath(__jni_impl::android::graphics::Path arg0, __jni_impl::android::graphics::Region_Op arg1);
		jboolean clipRect(__jni_impl::android::graphics::Rect arg0);
		jboolean clipRect(__jni_impl::android::graphics::RectF arg0);
		jboolean clipRect(__jni_impl::android::graphics::Rect arg0, __jni_impl::android::graphics::Region_Op arg1);
		jboolean clipRect(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::Region_Op arg1);
		jboolean clipRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		jboolean clipRect(jint arg0, jint arg1, jint arg2, jint arg3);
		jboolean clipRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Region_Op arg4);
		void concat(__jni_impl::android::graphics::Matrix arg0);
		void disableZ();
		void drawARGB(jint arg0, jint arg1, jint arg2, jint arg3);
		void drawArc(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2, jboolean arg3, __jni_impl::android::graphics::Paint arg4);
		void drawArc(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jboolean arg6, __jni_impl::android::graphics::Paint arg7);
		void drawBitmap(__jni_impl::android::graphics::Bitmap arg0, __jni_impl::android::graphics::Matrix arg1, __jni_impl::android::graphics::Paint arg2);
		void drawBitmap(__jni_impl::android::graphics::Bitmap arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::Rect arg2, __jni_impl::android::graphics::Paint arg3);
		void drawBitmap(__jni_impl::android::graphics::Bitmap arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::RectF arg2, __jni_impl::android::graphics::Paint arg3);
		void drawBitmap(__jni_impl::android::graphics::Bitmap arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Paint arg3);
		void drawBitmap(jintArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, jint arg5, jint arg6, jboolean arg7, __jni_impl::android::graphics::Paint arg8);
		void drawBitmap(jintArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jboolean arg7, __jni_impl::android::graphics::Paint arg8);
		void drawBitmapMesh(__jni_impl::android::graphics::Bitmap arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4, jintArray arg5, jint arg6, __jni_impl::android::graphics::Paint arg7);
		void drawCircle(jfloat arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Paint arg3);
		void drawColor(jint arg0);
		void drawColor(jlong arg0);
		void drawColor(jint arg0, __jni_impl::android::graphics::BlendMode arg1);
		void drawColor(jint arg0, __jni_impl::android::graphics::PorterDuff_Mode arg1);
		void drawColor(jlong arg0, __jni_impl::android::graphics::BlendMode arg1);
		void drawDoubleRoundRect(__jni_impl::android::graphics::RectF arg0, jfloatArray arg1, __jni_impl::android::graphics::RectF arg2, jfloatArray arg3, __jni_impl::android::graphics::Paint arg4);
		void drawDoubleRoundRect(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::RectF arg3, jfloat arg4, jfloat arg5, __jni_impl::android::graphics::Paint arg6);
		void drawLine(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Paint arg4);
		void drawLines(jfloatArray arg0, __jni_impl::android::graphics::Paint arg1);
		void drawLines(jfloatArray arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Paint arg3);
		void drawOval(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::Paint arg1);
		void drawOval(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Paint arg4);
		void drawPaint(__jni_impl::android::graphics::Paint arg0);
		void drawPath(__jni_impl::android::graphics::Path arg0, __jni_impl::android::graphics::Paint arg1);
		void drawPicture(__jni_impl::android::graphics::Picture arg0);
		void drawPicture(__jni_impl::android::graphics::Picture arg0, __jni_impl::android::graphics::Rect arg1);
		void drawPicture(__jni_impl::android::graphics::Picture arg0, __jni_impl::android::graphics::RectF arg1);
		void drawPoint(jfloat arg0, jfloat arg1, __jni_impl::android::graphics::Paint arg2);
		void drawPoints(jfloatArray arg0, __jni_impl::android::graphics::Paint arg1);
		void drawPoints(jfloatArray arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Paint arg3);
		void drawPosText(jstring arg0, jfloatArray arg1, __jni_impl::android::graphics::Paint arg2);
		void drawPosText(const QString &arg0, jfloatArray arg1, __jni_impl::android::graphics::Paint arg2);
		void drawPosText(jcharArray arg0, jint arg1, jint arg2, jfloatArray arg3, __jni_impl::android::graphics::Paint arg4);
		void drawRGB(jint arg0, jint arg1, jint arg2);
		void drawRect(__jni_impl::android::graphics::Rect arg0, __jni_impl::android::graphics::Paint arg1);
		void drawRect(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::Paint arg1);
		void drawRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Paint arg4);
		void drawRenderNode(__jni_impl::android::graphics::RenderNode arg0);
		void drawRoundRect(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Paint arg3);
		void drawRoundRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, __jni_impl::android::graphics::Paint arg6);
		void drawText(jstring arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Paint arg3);
		void drawText(const QString &arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Paint arg3);
		void drawText(jcharArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, __jni_impl::android::graphics::Paint arg5);
		void drawText(jstring arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, __jni_impl::android::graphics::Paint arg5);
		void drawText(const QString &arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, __jni_impl::android::graphics::Paint arg5);
		void drawTextOnPath(jstring arg0, __jni_impl::android::graphics::Path arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Paint arg4);
		void drawTextOnPath(const QString &arg0, __jni_impl::android::graphics::Path arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Paint arg4);
		void drawTextOnPath(jcharArray arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Path arg3, jfloat arg4, jfloat arg5, __jni_impl::android::graphics::Paint arg6);
		void drawTextRun(jcharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, __jni_impl::android::graphics::Paint arg8);
		void drawTextRun(__jni_impl::android::graphics::text::MeasuredText arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, __jni_impl::android::graphics::Paint arg8);
		void drawTextRun(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, __jni_impl::android::graphics::Paint arg8);
		void drawTextRun(const QString &arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, __jni_impl::android::graphics::Paint arg8);
		void drawVertices(__jni_impl::android::graphics::Canvas_VertexMode arg0, jint arg1, jfloatArray arg2, jint arg3, jfloatArray arg4, jint arg5, jintArray arg6, jint arg7, jshortArray arg8, jint arg9, jint arg10, __jni_impl::android::graphics::Paint arg11);
		void enableZ();
		QAndroidJniObject getClipBounds();
		jboolean getClipBounds(__jni_impl::android::graphics::Rect arg0);
		jint getDensity();
		QAndroidJniObject getDrawFilter();
		jint getHeight();
		QAndroidJniObject getMatrix();
		void getMatrix(__jni_impl::android::graphics::Matrix arg0);
		jint getMaximumBitmapHeight();
		jint getMaximumBitmapWidth();
		jint getSaveCount();
		jint getWidth();
		jboolean isHardwareAccelerated();
		jboolean isOpaque();
		jboolean quickReject(__jni_impl::android::graphics::Path arg0, __jni_impl::android::graphics::Canvas_EdgeType arg1);
		jboolean quickReject(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::Canvas_EdgeType arg1);
		jboolean quickReject(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Canvas_EdgeType arg4);
		void restore();
		void restoreToCount(jint arg0);
		void rotate(jfloat arg0);
		void rotate(jfloat arg0, jfloat arg1, jfloat arg2);
		jint save();
		jint saveLayer(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::Paint arg1);
		jint saveLayer(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::Paint arg1, jint arg2);
		jint saveLayer(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Paint arg4);
		jint saveLayer(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Paint arg4, jint arg5);
		jint saveLayerAlpha(__jni_impl::android::graphics::RectF arg0, jint arg1);
		jint saveLayerAlpha(__jni_impl::android::graphics::RectF arg0, jint arg1, jint arg2);
		jint saveLayerAlpha(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4);
		jint saveLayerAlpha(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4, jint arg5);
		void scale(jfloat arg0, jfloat arg1);
		void scale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void setBitmap(__jni_impl::android::graphics::Bitmap arg0);
		void setDensity(jint arg0);
		void setDrawFilter(__jni_impl::android::graphics::DrawFilter arg0);
		void setMatrix(__jni_impl::android::graphics::Matrix arg0);
		void skew(jfloat arg0, jfloat arg1);
		void translate(jfloat arg0, jfloat arg1);
	};
} // namespace __jni_impl::android::graphics

#include "Bitmap.hpp"
#include "BlendMode.hpp"
#include "Canvas_EdgeType.hpp"
#include "Canvas_VertexMode.hpp"
#include "DrawFilter.hpp"
#include "Matrix.hpp"
#include "Paint.hpp"
#include "Path.hpp"
#include "Picture.hpp"
#include "PorterDuff_Mode.hpp"
#include "Rect.hpp"
#include "RectF.hpp"
#include "Region_Op.hpp"
#include "RenderNode.hpp"
#include "text/MeasuredText.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	jint Canvas::ALL_SAVE_FLAG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Canvas",
			"ALL_SAVE_FLAG"
		);
	}
	
	// Constructors
	void Canvas::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Canvas",
			"()V"
		);
	}
	void Canvas::__constructor(__jni_impl::android::graphics::Bitmap arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Canvas",
			"(Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean Canvas::clipOutPath(__jni_impl::android::graphics::Path arg0)
	{
		return __thiz.callMethod<jboolean>(
			"clipOutPath",
			"(Landroid/graphics/Path;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Canvas::clipOutRect(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"clipOutRect",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Canvas::clipOutRect(__jni_impl::android::graphics::RectF arg0)
	{
		return __thiz.callMethod<jboolean>(
			"clipOutRect",
			"(Landroid/graphics/RectF;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Canvas::clipOutRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return __thiz.callMethod<jboolean>(
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
		return __thiz.callMethod<jboolean>(
			"clipOutRect",
			"(IIII)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean Canvas::clipPath(__jni_impl::android::graphics::Path arg0)
	{
		return __thiz.callMethod<jboolean>(
			"clipPath",
			"(Landroid/graphics/Path;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Canvas::clipPath(__jni_impl::android::graphics::Path arg0, __jni_impl::android::graphics::Region_Op arg1)
	{
		return __thiz.callMethod<jboolean>(
			"clipPath",
			"(Landroid/graphics/Path;Landroid/graphics/Region$Op;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Canvas::clipRect(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"clipRect",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Canvas::clipRect(__jni_impl::android::graphics::RectF arg0)
	{
		return __thiz.callMethod<jboolean>(
			"clipRect",
			"(Landroid/graphics/RectF;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Canvas::clipRect(__jni_impl::android::graphics::Rect arg0, __jni_impl::android::graphics::Region_Op arg1)
	{
		return __thiz.callMethod<jboolean>(
			"clipRect",
			"(Landroid/graphics/Rect;Landroid/graphics/Region$Op;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Canvas::clipRect(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::Region_Op arg1)
	{
		return __thiz.callMethod<jboolean>(
			"clipRect",
			"(Landroid/graphics/RectF;Landroid/graphics/Region$Op;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Canvas::clipRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return __thiz.callMethod<jboolean>(
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
		return __thiz.callMethod<jboolean>(
			"clipRect",
			"(IIII)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean Canvas::clipRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Region_Op arg4)
	{
		return __thiz.callMethod<jboolean>(
			"clipRect",
			"(FFFFLandroid/graphics/Region$Op;)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void Canvas::concat(__jni_impl::android::graphics::Matrix arg0)
	{
		__thiz.callMethod<void>(
			"concat",
			"(Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object()
		);
	}
	void Canvas::disableZ()
	{
		__thiz.callMethod<void>(
			"disableZ",
			"()V"
		);
	}
	void Canvas::drawARGB(jint arg0, jint arg1, jint arg2, jint arg3)
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
	void Canvas::drawArc(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2, jboolean arg3, __jni_impl::android::graphics::Paint arg4)
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
	void Canvas::drawArc(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jboolean arg6, __jni_impl::android::graphics::Paint arg7)
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
	void Canvas::drawBitmap(__jni_impl::android::graphics::Bitmap arg0, __jni_impl::android::graphics::Matrix arg1, __jni_impl::android::graphics::Paint arg2)
	{
		__thiz.callMethod<void>(
			"drawBitmap",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Matrix;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Canvas::drawBitmap(__jni_impl::android::graphics::Bitmap arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::Rect arg2, __jni_impl::android::graphics::Paint arg3)
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
	void Canvas::drawBitmap(__jni_impl::android::graphics::Bitmap arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::RectF arg2, __jni_impl::android::graphics::Paint arg3)
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
	void Canvas::drawBitmap(__jni_impl::android::graphics::Bitmap arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Paint arg3)
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
	void Canvas::drawBitmap(jintArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, jint arg5, jint arg6, jboolean arg7, __jni_impl::android::graphics::Paint arg8)
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
	void Canvas::drawBitmap(jintArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jboolean arg7, __jni_impl::android::graphics::Paint arg8)
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
	void Canvas::drawBitmapMesh(__jni_impl::android::graphics::Bitmap arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4, jintArray arg5, jint arg6, __jni_impl::android::graphics::Paint arg7)
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
	void Canvas::drawCircle(jfloat arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Paint arg3)
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
	void Canvas::drawColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"drawColor",
			"(I)V",
			arg0
		);
	}
	void Canvas::drawColor(jlong arg0)
	{
		__thiz.callMethod<void>(
			"drawColor",
			"(J)V",
			arg0
		);
	}
	void Canvas::drawColor(jint arg0, __jni_impl::android::graphics::BlendMode arg1)
	{
		__thiz.callMethod<void>(
			"drawColor",
			"(ILandroid/graphics/BlendMode;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Canvas::drawColor(jint arg0, __jni_impl::android::graphics::PorterDuff_Mode arg1)
	{
		__thiz.callMethod<void>(
			"drawColor",
			"(ILandroid/graphics/PorterDuff$Mode;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Canvas::drawColor(jlong arg0, __jni_impl::android::graphics::BlendMode arg1)
	{
		__thiz.callMethod<void>(
			"drawColor",
			"(JLandroid/graphics/BlendMode;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Canvas::drawDoubleRoundRect(__jni_impl::android::graphics::RectF arg0, jfloatArray arg1, __jni_impl::android::graphics::RectF arg2, jfloatArray arg3, __jni_impl::android::graphics::Paint arg4)
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
	void Canvas::drawDoubleRoundRect(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::RectF arg3, jfloat arg4, jfloat arg5, __jni_impl::android::graphics::Paint arg6)
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
	void Canvas::drawLine(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Paint arg4)
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
	void Canvas::drawLines(jfloatArray arg0, __jni_impl::android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"drawLines",
			"([FLandroid/graphics/Paint;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Canvas::drawLines(jfloatArray arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Paint arg3)
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
	void Canvas::drawOval(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"drawOval",
			"(Landroid/graphics/RectF;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Canvas::drawOval(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Paint arg4)
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
	void Canvas::drawPaint(__jni_impl::android::graphics::Paint arg0)
	{
		__thiz.callMethod<void>(
			"drawPaint",
			"(Landroid/graphics/Paint;)V",
			arg0.__jniObject().object()
		);
	}
	void Canvas::drawPath(__jni_impl::android::graphics::Path arg0, __jni_impl::android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"drawPath",
			"(Landroid/graphics/Path;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Canvas::drawPicture(__jni_impl::android::graphics::Picture arg0)
	{
		__thiz.callMethod<void>(
			"drawPicture",
			"(Landroid/graphics/Picture;)V",
			arg0.__jniObject().object()
		);
	}
	void Canvas::drawPicture(__jni_impl::android::graphics::Picture arg0, __jni_impl::android::graphics::Rect arg1)
	{
		__thiz.callMethod<void>(
			"drawPicture",
			"(Landroid/graphics/Picture;Landroid/graphics/Rect;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Canvas::drawPicture(__jni_impl::android::graphics::Picture arg0, __jni_impl::android::graphics::RectF arg1)
	{
		__thiz.callMethod<void>(
			"drawPicture",
			"(Landroid/graphics/Picture;Landroid/graphics/RectF;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Canvas::drawPoint(jfloat arg0, jfloat arg1, __jni_impl::android::graphics::Paint arg2)
	{
		__thiz.callMethod<void>(
			"drawPoint",
			"(FFLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Canvas::drawPoints(jfloatArray arg0, __jni_impl::android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"drawPoints",
			"([FLandroid/graphics/Paint;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Canvas::drawPoints(jfloatArray arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Paint arg3)
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
	void Canvas::drawPosText(jstring arg0, jfloatArray arg1, __jni_impl::android::graphics::Paint arg2)
	{
		__thiz.callMethod<void>(
			"drawPosText",
			"(Ljava/lang/String;[FLandroid/graphics/Paint;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Canvas::drawPosText(const QString &arg0, jfloatArray arg1, __jni_impl::android::graphics::Paint arg2)
	{
		__thiz.callMethod<void>(
			"drawPosText",
			"(Ljava/lang/String;[FLandroid/graphics/Paint;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Canvas::drawPosText(jcharArray arg0, jint arg1, jint arg2, jfloatArray arg3, __jni_impl::android::graphics::Paint arg4)
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
	void Canvas::drawRGB(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"drawRGB",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Canvas::drawRect(__jni_impl::android::graphics::Rect arg0, __jni_impl::android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"drawRect",
			"(Landroid/graphics/Rect;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Canvas::drawRect(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"drawRect",
			"(Landroid/graphics/RectF;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Canvas::drawRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Paint arg4)
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
	void Canvas::drawRenderNode(__jni_impl::android::graphics::RenderNode arg0)
	{
		__thiz.callMethod<void>(
			"drawRenderNode",
			"(Landroid/graphics/RenderNode;)V",
			arg0.__jniObject().object()
		);
	}
	void Canvas::drawRoundRect(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Paint arg3)
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
	void Canvas::drawRoundRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, __jni_impl::android::graphics::Paint arg6)
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
	void Canvas::drawText(jstring arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Paint arg3)
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
	void Canvas::drawText(const QString &arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Paint arg3)
	{
		__thiz.callMethod<void>(
			"drawText",
			"(Ljava/lang/String;FFLandroid/graphics/Paint;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void Canvas::drawText(jcharArray arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, __jni_impl::android::graphics::Paint arg5)
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
	void Canvas::drawText(jstring arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, __jni_impl::android::graphics::Paint arg5)
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
	void Canvas::drawText(const QString &arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4, __jni_impl::android::graphics::Paint arg5)
	{
		__thiz.callMethod<void>(
			"drawText",
			"(Ljava/lang/CharSequence;IIFFLandroid/graphics/Paint;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	void Canvas::drawTextOnPath(jstring arg0, __jni_impl::android::graphics::Path arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Paint arg4)
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
	void Canvas::drawTextOnPath(const QString &arg0, __jni_impl::android::graphics::Path arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Paint arg4)
	{
		__thiz.callMethod<void>(
			"drawTextOnPath",
			"(Ljava/lang/String;Landroid/graphics/Path;FFLandroid/graphics/Paint;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void Canvas::drawTextOnPath(jcharArray arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Path arg3, jfloat arg4, jfloat arg5, __jni_impl::android::graphics::Paint arg6)
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
	void Canvas::drawTextRun(jcharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, __jni_impl::android::graphics::Paint arg8)
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
	void Canvas::drawTextRun(__jni_impl::android::graphics::text::MeasuredText arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, __jni_impl::android::graphics::Paint arg8)
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
	void Canvas::drawTextRun(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, __jni_impl::android::graphics::Paint arg8)
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
	void Canvas::drawTextRun(const QString &arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, __jni_impl::android::graphics::Paint arg8)
	{
		__thiz.callMethod<void>(
			"drawTextRun",
			"(Ljava/lang/CharSequence;IIIIFFZLandroid/graphics/Paint;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
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
	void Canvas::drawVertices(__jni_impl::android::graphics::Canvas_VertexMode arg0, jint arg1, jfloatArray arg2, jint arg3, jfloatArray arg4, jint arg5, jintArray arg6, jint arg7, jshortArray arg8, jint arg9, jint arg10, __jni_impl::android::graphics::Paint arg11)
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
	void Canvas::enableZ()
	{
		__thiz.callMethod<void>(
			"enableZ",
			"()V"
		);
	}
	QAndroidJniObject Canvas::getClipBounds()
	{
		return __thiz.callObjectMethod(
			"getClipBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	jboolean Canvas::getClipBounds(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getClipBounds",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object()
		);
	}
	jint Canvas::getDensity()
	{
		return __thiz.callMethod<jint>(
			"getDensity",
			"()I"
		);
	}
	QAndroidJniObject Canvas::getDrawFilter()
	{
		return __thiz.callObjectMethod(
			"getDrawFilter",
			"()Landroid/graphics/DrawFilter;"
		);
	}
	jint Canvas::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	QAndroidJniObject Canvas::getMatrix()
	{
		return __thiz.callObjectMethod(
			"getMatrix",
			"()Landroid/graphics/Matrix;"
		);
	}
	void Canvas::getMatrix(__jni_impl::android::graphics::Matrix arg0)
	{
		__thiz.callMethod<void>(
			"getMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object()
		);
	}
	jint Canvas::getMaximumBitmapHeight()
	{
		return __thiz.callMethod<jint>(
			"getMaximumBitmapHeight",
			"()I"
		);
	}
	jint Canvas::getMaximumBitmapWidth()
	{
		return __thiz.callMethod<jint>(
			"getMaximumBitmapWidth",
			"()I"
		);
	}
	jint Canvas::getSaveCount()
	{
		return __thiz.callMethod<jint>(
			"getSaveCount",
			"()I"
		);
	}
	jint Canvas::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean Canvas::isHardwareAccelerated()
	{
		return __thiz.callMethod<jboolean>(
			"isHardwareAccelerated",
			"()Z"
		);
	}
	jboolean Canvas::isOpaque()
	{
		return __thiz.callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	jboolean Canvas::quickReject(__jni_impl::android::graphics::Path arg0, __jni_impl::android::graphics::Canvas_EdgeType arg1)
	{
		return __thiz.callMethod<jboolean>(
			"quickReject",
			"(Landroid/graphics/Path;Landroid/graphics/Canvas$EdgeType;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Canvas::quickReject(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::Canvas_EdgeType arg1)
	{
		return __thiz.callMethod<jboolean>(
			"quickReject",
			"(Landroid/graphics/RectF;Landroid/graphics/Canvas$EdgeType;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Canvas::quickReject(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Canvas_EdgeType arg4)
	{
		return __thiz.callMethod<jboolean>(
			"quickReject",
			"(FFFFLandroid/graphics/Canvas$EdgeType;)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void Canvas::restore()
	{
		__thiz.callMethod<void>(
			"restore",
			"()V"
		);
	}
	void Canvas::restoreToCount(jint arg0)
	{
		__thiz.callMethod<void>(
			"restoreToCount",
			"(I)V",
			arg0
		);
	}
	void Canvas::rotate(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"rotate",
			"(F)V",
			arg0
		);
	}
	void Canvas::rotate(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"rotate",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	jint Canvas::save()
	{
		return __thiz.callMethod<jint>(
			"save",
			"()I"
		);
	}
	jint Canvas::saveLayer(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::Paint arg1)
	{
		return __thiz.callMethod<jint>(
			"saveLayer",
			"(Landroid/graphics/RectF;Landroid/graphics/Paint;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint Canvas::saveLayer(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::Paint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"saveLayer",
			"(Landroid/graphics/RectF;Landroid/graphics/Paint;I)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jint Canvas::saveLayer(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Paint arg4)
	{
		return __thiz.callMethod<jint>(
			"saveLayer",
			"(FFFFLandroid/graphics/Paint;)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	jint Canvas::saveLayer(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Paint arg4, jint arg5)
	{
		return __thiz.callMethod<jint>(
			"saveLayer",
			"(FFFFLandroid/graphics/Paint;I)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5
		);
	}
	jint Canvas::saveLayerAlpha(__jni_impl::android::graphics::RectF arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"saveLayerAlpha",
			"(Landroid/graphics/RectF;I)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint Canvas::saveLayerAlpha(__jni_impl::android::graphics::RectF arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"saveLayerAlpha",
			"(Landroid/graphics/RectF;II)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jint Canvas::saveLayerAlpha(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4)
	{
		return __thiz.callMethod<jint>(
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
		return __thiz.callMethod<jint>(
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
		__thiz.callMethod<void>(
			"scale",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Canvas::scale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"scale",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Canvas::setBitmap(__jni_impl::android::graphics::Bitmap arg0)
	{
		__thiz.callMethod<void>(
			"setBitmap",
			"(Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object()
		);
	}
	void Canvas::setDensity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDensity",
			"(I)V",
			arg0
		);
	}
	void Canvas::setDrawFilter(__jni_impl::android::graphics::DrawFilter arg0)
	{
		__thiz.callMethod<void>(
			"setDrawFilter",
			"(Landroid/graphics/DrawFilter;)V",
			arg0.__jniObject().object()
		);
	}
	void Canvas::setMatrix(__jni_impl::android::graphics::Matrix arg0)
	{
		__thiz.callMethod<void>(
			"setMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object()
		);
	}
	void Canvas::skew(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"skew",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Canvas::translate(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"translate",
			"(FF)V",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Canvas : public __jni_impl::android::graphics::Canvas
	{
	public:
		Canvas(QAndroidJniObject obj) { __thiz = obj; }
		Canvas()
		{
			__constructor();
		}
		Canvas(__jni_impl::android::graphics::Bitmap arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_CANVAS

