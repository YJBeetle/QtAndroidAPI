#include "./PdfRenderer_Page.hpp"
#include "../../os/ParcelFileDescriptor.hpp"
#include "./PdfRenderer.hpp"

namespace android::graphics::pdf
{
	// Fields
	
	// QAndroidJniObject forward
	PdfRenderer::PdfRenderer(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PdfRenderer::PdfRenderer(android::os::ParcelFileDescriptor arg0)
		: JObject(
			"android.graphics.pdf.PdfRenderer",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.object()
		) {}
	
	// Methods
	void PdfRenderer::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jint PdfRenderer::getPageCount() const
	{
		return callMethod<jint>(
			"getPageCount",
			"()I"
		);
	}
	android::graphics::pdf::PdfRenderer_Page PdfRenderer::openPage(jint arg0) const
	{
		return callObjectMethod(
			"openPage",
			"(I)Landroid/graphics/pdf/PdfRenderer$Page;",
			arg0
		);
	}
	jboolean PdfRenderer::shouldScaleForPrinting() const
	{
		return callMethod<jboolean>(
			"shouldScaleForPrinting",
			"()Z"
		);
	}
} // namespace android::graphics::pdf

