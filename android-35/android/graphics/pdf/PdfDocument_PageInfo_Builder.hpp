#pragma once

#include "../Rect.def.hpp"
#include "./PdfDocument_PageInfo.def.hpp"
#include "./PdfDocument_PageInfo_Builder.def.hpp"

namespace android::graphics::pdf
{
	// Fields
	
	// Constructors
	inline PdfDocument_PageInfo_Builder::PdfDocument_PageInfo_Builder(jint arg0, jint arg1, jint arg2)
		: JObject(
			"android.graphics.pdf.PdfDocument$PageInfo$Builder",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline android::graphics::pdf::PdfDocument_PageInfo PdfDocument_PageInfo_Builder::create() const
	{
		return callObjectMethod(
			"create",
			"()Landroid/graphics/pdf/PdfDocument$PageInfo;"
		);
	}
	inline android::graphics::pdf::PdfDocument_PageInfo_Builder PdfDocument_PageInfo_Builder::setContentRect(android::graphics::Rect arg0) const
	{
		return callObjectMethod(
			"setContentRect",
			"(Landroid/graphics/Rect;)Landroid/graphics/pdf/PdfDocument$PageInfo$Builder;",
			arg0.object()
		);
	}
} // namespace android::graphics::pdf

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::pdf;
#endif
