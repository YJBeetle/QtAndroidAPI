#include "../Rect.hpp"
#include "./PdfDocument_PageInfo.hpp"

namespace android::graphics::pdf
{
	// Fields
	
	PdfDocument_PageInfo::PdfDocument_PageInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject PdfDocument_PageInfo::getContentRect()
	{
		return __thiz.callObjectMethod(
			"getContentRect",
			"()Landroid/graphics/Rect;"
		);
	}
	jint PdfDocument_PageInfo::getPageHeight()
	{
		return __thiz.callMethod<jint>(
			"getPageHeight",
			"()I"
		);
	}
	jint PdfDocument_PageInfo::getPageNumber()
	{
		return __thiz.callMethod<jint>(
			"getPageNumber",
			"()I"
		);
	}
	jint PdfDocument_PageInfo::getPageWidth()
	{
		return __thiz.callMethod<jint>(
			"getPageWidth",
			"()I"
		);
	}
} // namespace android::graphics::pdf

