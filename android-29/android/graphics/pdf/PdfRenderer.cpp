#include "./PdfRenderer_Page.hpp"
#include "../../os/ParcelFileDescriptor.hpp"
#include "./PdfRenderer.hpp"

namespace android::graphics::pdf
{
	// Fields
	
	PdfRenderer::PdfRenderer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PdfRenderer::PdfRenderer(android::os::ParcelFileDescriptor &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.pdf.PdfRenderer",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void PdfRenderer::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jint PdfRenderer::getPageCount()
	{
		return __thiz.callMethod<jint>(
			"getPageCount",
			"()I"
		);
	}
	QAndroidJniObject PdfRenderer::openPage(jint arg0)
	{
		return __thiz.callObjectMethod(
			"openPage",
			"(I)Landroid/graphics/pdf/PdfRenderer$Page;",
			arg0
		);
	}
	jboolean PdfRenderer::shouldScaleForPrinting()
	{
		return __thiz.callMethod<jboolean>(
			"shouldScaleForPrinting",
			"()Z"
		);
	}
} // namespace android::graphics::pdf

