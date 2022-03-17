#pragma once

#include "../../content/Context.def.hpp"
#include "../../graphics/Rect.def.hpp"
#include "../../graphics/pdf/PdfDocument_Page.def.hpp"
#include "../PrintAttributes.def.hpp"
#include "./PrintedPdfDocument.def.hpp"

namespace android::print::pdf
{
	// Fields
	
	// Constructors
	inline PrintedPdfDocument::PrintedPdfDocument(android::content::Context arg0, android::print::PrintAttributes arg1)
		: android::graphics::pdf::PdfDocument(
			"android.print.pdf.PrintedPdfDocument",
			"(Landroid/content/Context;Landroid/print/PrintAttributes;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline android::graphics::Rect PrintedPdfDocument::getPageContentRect() const
	{
		return callObjectMethod(
			"getPageContentRect",
			"()Landroid/graphics/Rect;"
		);
	}
	inline jint PrintedPdfDocument::getPageHeight() const
	{
		return callMethod<jint>(
			"getPageHeight",
			"()I"
		);
	}
	inline jint PrintedPdfDocument::getPageWidth() const
	{
		return callMethod<jint>(
			"getPageWidth",
			"()I"
		);
	}
	inline android::graphics::pdf::PdfDocument_Page PrintedPdfDocument::startPage(jint arg0) const
	{
		return callObjectMethod(
			"startPage",
			"(I)Landroid/graphics/pdf/PdfDocument$Page;",
			arg0
		);
	}
} // namespace android::print::pdf

// Base class headers
#include "../../graphics/pdf/PdfDocument.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::print::pdf;
#endif
