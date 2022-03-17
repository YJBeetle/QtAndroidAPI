#pragma once

#include "../Bitmap.def.hpp"
#include "../Matrix.def.hpp"
#include "../Rect.def.hpp"
#include "./PdfRenderer.def.hpp"
#include "./PdfRenderer_Page.def.hpp"

namespace android::graphics::pdf
{
	// Fields
	inline jint PdfRenderer_Page::RENDER_MODE_FOR_DISPLAY()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.PdfRenderer$Page",
			"RENDER_MODE_FOR_DISPLAY"
		);
	}
	inline jint PdfRenderer_Page::RENDER_MODE_FOR_PRINT()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.PdfRenderer$Page",
			"RENDER_MODE_FOR_PRINT"
		);
	}
	
	// Constructors
	
	// Methods
	inline void PdfRenderer_Page::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jint PdfRenderer_Page::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline jint PdfRenderer_Page::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	inline jint PdfRenderer_Page::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	inline void PdfRenderer_Page::render(android::graphics::Bitmap arg0, android::graphics::Rect arg1, android::graphics::Matrix arg2, jint arg3) const
	{
		callMethod<void>(
			"render",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Rect;Landroid/graphics/Matrix;I)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
} // namespace android::graphics::pdf

// Base class headers

