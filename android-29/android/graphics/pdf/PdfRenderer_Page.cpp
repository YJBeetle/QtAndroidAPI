#include "../Bitmap.hpp"
#include "../Matrix.hpp"
#include "../Rect.hpp"
#include "./PdfRenderer.hpp"
#include "./PdfRenderer_Page.hpp"

namespace android::graphics::pdf
{
	// Fields
	jint PdfRenderer_Page::RENDER_MODE_FOR_DISPLAY()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.PdfRenderer$Page",
			"RENDER_MODE_FOR_DISPLAY"
		);
	}
	jint PdfRenderer_Page::RENDER_MODE_FOR_PRINT()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.PdfRenderer$Page",
			"RENDER_MODE_FOR_PRINT"
		);
	}
	
	// QJniObject forward
	PdfRenderer_Page::PdfRenderer_Page(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void PdfRenderer_Page::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jint PdfRenderer_Page::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint PdfRenderer_Page::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jint PdfRenderer_Page::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	void PdfRenderer_Page::render(android::graphics::Bitmap arg0, android::graphics::Rect arg1, android::graphics::Matrix arg2, jint arg3) const
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

