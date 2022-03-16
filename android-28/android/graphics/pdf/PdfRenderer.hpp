#pragma once

#include "./PdfRenderer_Page.def.hpp"
#include "../../os/ParcelFileDescriptor.def.hpp"
#include "./PdfRenderer.def.hpp"

namespace android::graphics::pdf
{
	// Fields
	
	// Constructors
	inline PdfRenderer::PdfRenderer(android::os::ParcelFileDescriptor arg0)
		: JObject(
			"android.graphics.pdf.PdfRenderer",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void PdfRenderer::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jint PdfRenderer::getPageCount() const
	{
		return callMethod<jint>(
			"getPageCount",
			"()I"
		);
	}
	inline android::graphics::pdf::PdfRenderer_Page PdfRenderer::openPage(jint arg0) const
	{
		return callObjectMethod(
			"openPage",
			"(I)Landroid/graphics/pdf/PdfRenderer$Page;",
			arg0
		);
	}
	inline jboolean PdfRenderer::shouldScaleForPrinting() const
	{
		return callMethod<jboolean>(
			"shouldScaleForPrinting",
			"()Z"
		);
	}
} // namespace android::graphics::pdf

// Base class headers

