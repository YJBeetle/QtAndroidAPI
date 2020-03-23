#pragma once

#ifndef ANDROID_GRAPHICS_PDF_PDFRENDERER_PAGE
#define ANDROID_GRAPHICS_PDF_PDFRENDERER_PAGE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics::pdf
{
	class PdfRenderer;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics
{
	class Matrix;
}

namespace __jni_impl::android::graphics::pdf
{
	class PdfRenderer_Page : public __JniBaseClass
	{
	public:
		// Fields
		static jint RENDER_MODE_FOR_DISPLAY();
		static jint RENDER_MODE_FOR_PRINT();
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		jint getIndex();
		jint getWidth();
		jint getHeight();
		void render(__jni_impl::android::graphics::Bitmap arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::Matrix arg2, jint arg3);
	};
} // namespace __jni_impl::android::graphics::pdf

#include "PdfRenderer.hpp"
#include "../Bitmap.hpp"
#include "../Rect.hpp"
#include "../Matrix.hpp"

namespace __jni_impl::android::graphics::pdf
{
	// Fields
	jint PdfRenderer_Page::RENDER_MODE_FOR_DISPLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.pdf.PdfRenderer$Page",
			"RENDER_MODE_FOR_DISPLAY");
	}
	jint PdfRenderer_Page::RENDER_MODE_FOR_PRINT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.pdf.PdfRenderer$Page",
			"RENDER_MODE_FOR_PRINT");
	}
	
	// Constructors
	void PdfRenderer_Page::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.pdf.PdfRenderer$Page",
			"(V)V");
	}
	
	// Methods
	void PdfRenderer_Page::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	jint PdfRenderer_Page::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I");
	}
	jint PdfRenderer_Page::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I");
	}
	jint PdfRenderer_Page::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I");
	}
	void PdfRenderer_Page::render(__jni_impl::android::graphics::Bitmap arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::Matrix arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"render",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Rect;Landroid/graphics/Matrix;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3);
	}
} // namespace __jni_impl::android::graphics::pdf

namespace android::graphics::pdf
{
	class PdfRenderer_Page : public __jni_impl::android::graphics::pdf::PdfRenderer_Page
	{
	public:
		PdfRenderer_Page(QAndroidJniObject obj) { __thiz = obj; }
		PdfRenderer_Page()
		{
			__constructor();
		}
	};
} // namespace android::graphics::pdf

#endif // ANDROID_GRAPHICS_PDF_PDFRENDERER_PAGE

