#include "../../content/Context.hpp"
#include "../../graphics/Rect.hpp"
#include "../../graphics/pdf/PdfDocument_Page.hpp"
#include "../PrintAttributes.hpp"
#include "./PrintedPdfDocument.hpp"

namespace android::print::pdf
{
	// Fields
	
	PrintedPdfDocument::PrintedPdfDocument(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PrintedPdfDocument::PrintedPdfDocument(android::content::Context arg0, android::print::PrintAttributes arg1)
	{
		__thiz = QAndroidJniObject(
			"android.print.pdf.PrintedPdfDocument",
			"(Landroid/content/Context;Landroid/print/PrintAttributes;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject PrintedPdfDocument::getPageContentRect()
	{
		return __thiz.callObjectMethod(
			"getPageContentRect",
			"()Landroid/graphics/Rect;"
		);
	}
	jint PrintedPdfDocument::getPageHeight()
	{
		return __thiz.callMethod<jint>(
			"getPageHeight",
			"()I"
		);
	}
	jint PrintedPdfDocument::getPageWidth()
	{
		return __thiz.callMethod<jint>(
			"getPageWidth",
			"()I"
		);
	}
	QAndroidJniObject PrintedPdfDocument::startPage(jint arg0)
	{
		return __thiz.callObjectMethod(
			"startPage",
			"(I)Landroid/graphics/pdf/PdfDocument$Page;",
			arg0
		);
	}
} // namespace android::print::pdf

