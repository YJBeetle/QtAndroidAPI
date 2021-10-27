#include "./PdfDocument_Page.hpp"
#include "./PdfDocument_PageInfo.hpp"
#include "../../../java/io/OutputStream.hpp"
#include "./PdfDocument.hpp"

namespace android::graphics::pdf
{
	// Fields
	
	PdfDocument::PdfDocument(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PdfDocument::PdfDocument()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.pdf.PdfDocument",
			"()V"
		);
	}
	
	// Methods
	void PdfDocument::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void PdfDocument::finishPage(android::graphics::pdf::PdfDocument_Page arg0)
	{
		__thiz.callMethod<void>(
			"finishPage",
			"(Landroid/graphics/pdf/PdfDocument$Page;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PdfDocument::getPages()
	{
		return __thiz.callObjectMethod(
			"getPages",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject PdfDocument::startPage(android::graphics::pdf::PdfDocument_PageInfo arg0)
	{
		return __thiz.callObjectMethod(
			"startPage",
			"(Landroid/graphics/pdf/PdfDocument$PageInfo;)Landroid/graphics/pdf/PdfDocument$Page;",
			arg0.__jniObject().object()
		);
	}
	void PdfDocument::writeTo(java::io::OutputStream arg0)
	{
		__thiz.callMethod<void>(
			"writeTo",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::graphics::pdf

