#include "../Canvas.hpp"
#include "./PdfDocument_PageInfo.hpp"
#include "./PdfDocument_Page.hpp"

namespace android::graphics::pdf
{
	// Fields
	
	// QAndroidJniObject forward
	PdfDocument_Page::PdfDocument_Page(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Canvas PdfDocument_Page::getCanvas() const
	{
		return callObjectMethod(
			"getCanvas",
			"()Landroid/graphics/Canvas;"
		);
	}
	android::graphics::pdf::PdfDocument_PageInfo PdfDocument_Page::getInfo() const
	{
		return callObjectMethod(
			"getInfo",
			"()Landroid/graphics/pdf/PdfDocument$PageInfo;"
		);
	}
} // namespace android::graphics::pdf

