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
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.pdf.PdfRenderer$Page",
			"RENDER_MODE_FOR_DISPLAY"
		);
	}
	jint PdfRenderer_Page::RENDER_MODE_FOR_PRINT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.pdf.PdfRenderer$Page",
			"RENDER_MODE_FOR_PRINT"
		);
	}
	
	PdfRenderer_Page::PdfRenderer_Page(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void PdfRenderer_Page::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jint PdfRenderer_Page::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint PdfRenderer_Page::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jint PdfRenderer_Page::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	void PdfRenderer_Page::render(android::graphics::Bitmap arg0, android::graphics::Rect arg1, android::graphics::Matrix arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"render",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Rect;Landroid/graphics/Matrix;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
} // namespace android::graphics::pdf

