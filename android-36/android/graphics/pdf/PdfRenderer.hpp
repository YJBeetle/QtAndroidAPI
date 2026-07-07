#pragma once

#include "./LoadParams.def.hpp"
#include "./PdfRenderer_Page.def.hpp"
#include "../../os/ParcelFileDescriptor.def.hpp"
#include "./PdfRenderer.def.hpp"

namespace android::graphics::pdf
{
	// Fields
	inline jint PdfRenderer::DOCUMENT_LINEARIZED_TYPE_LINEARIZED()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.PdfRenderer",
			"DOCUMENT_LINEARIZED_TYPE_LINEARIZED"
		);
	}
	inline jint PdfRenderer::DOCUMENT_LINEARIZED_TYPE_NON_LINEARIZED()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.PdfRenderer",
			"DOCUMENT_LINEARIZED_TYPE_NON_LINEARIZED"
		);
	}
	inline jint PdfRenderer::PDF_FORM_TYPE_ACRO_FORM()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.PdfRenderer",
			"PDF_FORM_TYPE_ACRO_FORM"
		);
	}
	inline jint PdfRenderer::PDF_FORM_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.PdfRenderer",
			"PDF_FORM_TYPE_NONE"
		);
	}
	inline jint PdfRenderer::PDF_FORM_TYPE_XFA_FOREGROUND()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.PdfRenderer",
			"PDF_FORM_TYPE_XFA_FOREGROUND"
		);
	}
	inline jint PdfRenderer::PDF_FORM_TYPE_XFA_FULL()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.PdfRenderer",
			"PDF_FORM_TYPE_XFA_FULL"
		);
	}
	
	// Constructors
	inline PdfRenderer::PdfRenderer(android::os::ParcelFileDescriptor arg0)
		: JObject(
			"android.graphics.pdf.PdfRenderer",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.object()
		) {}
	inline PdfRenderer::PdfRenderer(android::os::ParcelFileDescriptor arg0, android::graphics::pdf::LoadParams arg1)
		: JObject(
			"android.graphics.pdf.PdfRenderer",
			"(Landroid/os/ParcelFileDescriptor;Landroid/graphics/pdf/LoadParams;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void PdfRenderer::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jint PdfRenderer::getDocumentLinearizationType() const
	{
		return callMethod<jint>(
			"getDocumentLinearizationType",
			"()I"
		);
	}
	inline jint PdfRenderer::getPageCount() const
	{
		return callMethod<jint>(
			"getPageCount",
			"()I"
		);
	}
	inline jint PdfRenderer::getPdfFormType() const
	{
		return callMethod<jint>(
			"getPdfFormType",
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
	inline void PdfRenderer::write(android::os::ParcelFileDescriptor arg0, jboolean arg1) const
	{
		callMethod<void>(
			"write",
			"(Landroid/os/ParcelFileDescriptor;Z)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::graphics::pdf

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::pdf;
#endif
