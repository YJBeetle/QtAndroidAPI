#include "../Canvas.hpp"
#include "./PdfDocument_PageInfo.hpp"
#include "./PdfDocument_Page.hpp"

namespace android::graphics::pdf
{
	// Fields
	
	// QJniObject forward
	PdfDocument_Page::PdfDocument_Page(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Canvas PdfDocument_Page::getCanvas()
	{
		return callObjectMethod(
			"getCanvas",
			"()Landroid/graphics/Canvas;"
		);
	}
	android::graphics::pdf::PdfDocument_PageInfo PdfDocument_Page::getInfo()
	{
		return callObjectMethod(
			"getInfo",
			"()Landroid/graphics/pdf/PdfDocument$PageInfo;"
		);
	}
} // namespace android::graphics::pdf

