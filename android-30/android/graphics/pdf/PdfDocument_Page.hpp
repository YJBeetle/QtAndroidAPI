#pragma once

#include "../Canvas.def.hpp"
#include "./PdfDocument_PageInfo.def.hpp"
#include "./PdfDocument_Page.def.hpp"

namespace android::graphics::pdf
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::graphics::Canvas PdfDocument_Page::getCanvas() const
	{
		return callObjectMethod(
			"getCanvas",
			"()Landroid/graphics/Canvas;"
		);
	}
	inline android::graphics::pdf::PdfDocument_PageInfo PdfDocument_Page::getInfo() const
	{
		return callObjectMethod(
			"getInfo",
			"()Landroid/graphics/pdf/PdfDocument$PageInfo;"
		);
	}
} // namespace android::graphics::pdf

// Base class headers

