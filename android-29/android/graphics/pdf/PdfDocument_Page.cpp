#include "../Canvas.hpp"
#include "./PdfDocument_PageInfo.hpp"
#include "./PdfDocument_Page.hpp"

namespace android::graphics::pdf
{
	// Fields
	
	// QAndroidJniObject forward
	PdfDocument_Page::PdfDocument_Page(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject PdfDocument_Page::getCanvas()
	{
		return callObjectMethod(
			"getCanvas",
			"()Landroid/graphics/Canvas;"
		);
	}
	QAndroidJniObject PdfDocument_Page::getInfo()
	{
		return callObjectMethod(
			"getInfo",
			"()Landroid/graphics/pdf/PdfDocument$PageInfo;"
		);
	}
} // namespace android::graphics::pdf

