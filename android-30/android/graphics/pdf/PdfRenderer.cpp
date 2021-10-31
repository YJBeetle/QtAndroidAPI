#include "./PdfRenderer_Page.hpp"
#include "../../os/ParcelFileDescriptor.hpp"
#include "./PdfRenderer.hpp"

namespace android::graphics::pdf
{
	// Fields
	
	// QJniObject forward
	PdfRenderer::PdfRenderer(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PdfRenderer::PdfRenderer(android::os::ParcelFileDescriptor arg0)
		: __JniBaseClass(
			"android.graphics.pdf.PdfRenderer",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.object()
		) {}
	
	// Methods
	void PdfRenderer::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jint PdfRenderer::getPageCount()
	{
		return callMethod<jint>(
			"getPageCount",
			"()I"
		);
	}
	android::graphics::pdf::PdfRenderer_Page PdfRenderer::openPage(jint arg0)
	{
		return callObjectMethod(
			"openPage",
			"(I)Landroid/graphics/pdf/PdfRenderer$Page;",
			arg0
		);
	}
	jboolean PdfRenderer::shouldScaleForPrinting()
	{
		return callMethod<jboolean>(
			"shouldScaleForPrinting",
			"()Z"
		);
	}
} // namespace android::graphics::pdf

