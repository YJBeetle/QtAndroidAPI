#include "../Rect.hpp"
#include "./PdfDocument_PageInfo.hpp"
#include "./PdfDocument_PageInfo_Builder.hpp"

namespace android::graphics::pdf
{
	// Fields
	
	PdfDocument_PageInfo_Builder::PdfDocument_PageInfo_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PdfDocument_PageInfo_Builder::PdfDocument_PageInfo_Builder(jint &arg0, jint &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.pdf.PdfDocument$PageInfo$Builder",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject PdfDocument_PageInfo_Builder::create()
	{
		return __thiz.callObjectMethod(
			"create",
			"()Landroid/graphics/pdf/PdfDocument$PageInfo;"
		);
	}
	QAndroidJniObject PdfDocument_PageInfo_Builder::setContentRect(android::graphics::Rect arg0)
	{
		return __thiz.callObjectMethod(
			"setContentRect",
			"(Landroid/graphics/Rect;)Landroid/graphics/pdf/PdfDocument$PageInfo$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::graphics::pdf

