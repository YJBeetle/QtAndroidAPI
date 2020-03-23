#pragma once

#ifndef ANDROID_GRAPHICS_PDF_PDFRENDERER
#define ANDROID_GRAPHICS_PDF_PDFRENDERER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class ParcelFileDescriptor;
}
namespace __jni_impl::android::graphics::pdf
{
	class PdfRenderer_Page;
}

namespace __jni_impl::android::graphics::pdf
{
	class PdfRenderer : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::os::ParcelFileDescriptor arg0);
		
		// Methods
		void close();
		jboolean shouldScaleForPrinting();
		QAndroidJniObject openPage(jint arg0);
		jint getPageCount();
	};
} // namespace __jni_impl::android::graphics::pdf

#include "../../os/ParcelFileDescriptor.hpp"
#include "PdfRenderer_Page.hpp"

namespace __jni_impl::android::graphics::pdf
{
	// Fields
	
	// Constructors
	void PdfRenderer::__constructor(__jni_impl::android::os::ParcelFileDescriptor arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.pdf.PdfRenderer",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void PdfRenderer::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	jboolean PdfRenderer::shouldScaleForPrinting()
	{
		return __thiz.callMethod<jboolean>(
			"shouldScaleForPrinting",
			"()Z");
	}
	QAndroidJniObject PdfRenderer::openPage(jint arg0)
	{
		return __thiz.callObjectMethod(
			"openPage",
			"(I)Landroid/graphics/pdf/PdfRenderer$Page;",
			arg0);
	}
	jint PdfRenderer::getPageCount()
	{
		return __thiz.callMethod<jint>(
			"getPageCount",
			"()I");
	}
} // namespace __jni_impl::android::graphics::pdf

namespace android::graphics::pdf
{
	class PdfRenderer : public __jni_impl::android::graphics::pdf::PdfRenderer
	{
	public:
		PdfRenderer(QAndroidJniObject obj) { __thiz = obj; }
		PdfRenderer(__jni_impl::android::os::ParcelFileDescriptor arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::graphics::pdf

#endif // ANDROID_GRAPHICS_PDF_PDFRENDERER

