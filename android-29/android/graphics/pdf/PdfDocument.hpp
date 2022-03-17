#pragma once

#include "./PdfDocument_Page.def.hpp"
#include "./PdfDocument_PageInfo.def.hpp"
#include "../../../java/io/OutputStream.def.hpp"
#include "./PdfDocument.def.hpp"

namespace android::graphics::pdf
{
	// Fields
	
	// Constructors
	inline PdfDocument::PdfDocument()
		: JObject(
			"android.graphics.pdf.PdfDocument",
			"()V"
		) {}
	
	// Methods
	inline void PdfDocument::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void PdfDocument::finishPage(android::graphics::pdf::PdfDocument_Page arg0) const
	{
		callMethod<void>(
			"finishPage",
			"(Landroid/graphics/pdf/PdfDocument$Page;)V",
			arg0.object()
		);
	}
	inline JObject PdfDocument::getPages() const
	{
		return callObjectMethod(
			"getPages",
			"()Ljava/util/List;"
		);
	}
	inline android::graphics::pdf::PdfDocument_Page PdfDocument::startPage(android::graphics::pdf::PdfDocument_PageInfo arg0) const
	{
		return callObjectMethod(
			"startPage",
			"(Landroid/graphics/pdf/PdfDocument$PageInfo;)Landroid/graphics/pdf/PdfDocument$Page;",
			arg0.object()
		);
	}
	inline void PdfDocument::writeTo(java::io::OutputStream arg0) const
	{
		callMethod<void>(
			"writeTo",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
} // namespace android::graphics::pdf

// Base class headers

