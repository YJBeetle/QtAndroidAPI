#pragma once

#include "../Rect.def.hpp"
#include "./PdfDocument_PageInfo.def.hpp"

namespace android::graphics::pdf
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::graphics::Rect PdfDocument_PageInfo::getContentRect() const
	{
		return callObjectMethod(
			"getContentRect",
			"()Landroid/graphics/Rect;"
		);
	}
	inline jint PdfDocument_PageInfo::getPageHeight() const
	{
		return callMethod<jint>(
			"getPageHeight",
			"()I"
		);
	}
	inline jint PdfDocument_PageInfo::getPageNumber() const
	{
		return callMethod<jint>(
			"getPageNumber",
			"()I"
		);
	}
	inline jint PdfDocument_PageInfo::getPageWidth() const
	{
		return callMethod<jint>(
			"getPageWidth",
			"()I"
		);
	}
} // namespace android::graphics::pdf

// Base class headers

