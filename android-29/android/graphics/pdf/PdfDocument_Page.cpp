#include "../Canvas.hpp"
#include "./PdfDocument_PageInfo.hpp"
#include "./PdfDocument_Page.hpp"

namespace android::graphics::pdf
{
	// Fields
	
	PdfDocument_Page::PdfDocument_Page(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject PdfDocument_Page::getCanvas()
	{
		return __thiz.callObjectMethod(
			"getCanvas",
			"()Landroid/graphics/Canvas;"
		);
	}
	QAndroidJniObject PdfDocument_Page::getInfo()
	{
		return __thiz.callObjectMethod(
			"getInfo",
			"()Landroid/graphics/pdf/PdfDocument$PageInfo;"
		);
	}
} // namespace android::graphics::pdf

