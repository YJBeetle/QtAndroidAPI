#pragma once

#include "./LoadParams.def.hpp"
#include "./PdfRendererPreV_Page.def.hpp"
#include "../../os/ParcelFileDescriptor.def.hpp"
#include "./PdfRendererPreV.def.hpp"

namespace android::graphics::pdf
{
	// Fields
	inline jint PdfRendererPreV::DOCUMENT_LINEARIZED_TYPE_LINEARIZED()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.PdfRendererPreV",
			"DOCUMENT_LINEARIZED_TYPE_LINEARIZED"
		);
	}
	inline jint PdfRendererPreV::DOCUMENT_LINEARIZED_TYPE_NON_LINEARIZED()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.PdfRendererPreV",
			"DOCUMENT_LINEARIZED_TYPE_NON_LINEARIZED"
		);
	}
	inline jint PdfRendererPreV::PDF_FORM_TYPE_ACRO_FORM()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.PdfRendererPreV",
			"PDF_FORM_TYPE_ACRO_FORM"
		);
	}
	inline jint PdfRendererPreV::PDF_FORM_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.PdfRendererPreV",
			"PDF_FORM_TYPE_NONE"
		);
	}
	inline jint PdfRendererPreV::PDF_FORM_TYPE_XFA_FOREGROUND()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.PdfRendererPreV",
			"PDF_FORM_TYPE_XFA_FOREGROUND"
		);
	}
	inline jint PdfRendererPreV::PDF_FORM_TYPE_XFA_FULL()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.PdfRendererPreV",
			"PDF_FORM_TYPE_XFA_FULL"
		);
	}
	
	// Constructors
	inline PdfRendererPreV::PdfRendererPreV(android::os::ParcelFileDescriptor arg0)
		: JObject(
			"android.graphics.pdf.PdfRendererPreV",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.object()
		) {}
	inline PdfRendererPreV::PdfRendererPreV(android::os::ParcelFileDescriptor arg0, android::graphics::pdf::LoadParams arg1)
		: JObject(
			"android.graphics.pdf.PdfRendererPreV",
			"(Landroid/os/ParcelFileDescriptor;Landroid/graphics/pdf/LoadParams;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void PdfRendererPreV::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jint PdfRendererPreV::getDocumentLinearizationType() const
	{
		return callMethod<jint>(
			"getDocumentLinearizationType",
			"()I"
		);
	}
	inline jint PdfRendererPreV::getPageCount() const
	{
		return callMethod<jint>(
			"getPageCount",
			"()I"
		);
	}
	inline jint PdfRendererPreV::getPdfFormType() const
	{
		return callMethod<jint>(
			"getPdfFormType",
			"()I"
		);
	}
	inline android::graphics::pdf::PdfRendererPreV_Page PdfRendererPreV::openPage(jint arg0) const
	{
		return callObjectMethod(
			"openPage",
			"(I)Landroid/graphics/pdf/PdfRendererPreV$Page;",
			arg0
		);
	}
	inline void PdfRendererPreV::write(android::os::ParcelFileDescriptor arg0, jboolean arg1) const
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
