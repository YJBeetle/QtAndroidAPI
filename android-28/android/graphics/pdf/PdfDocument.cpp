#include "./PdfDocument_Page.hpp"
#include "./PdfDocument_PageInfo.hpp"
#include "../../../java/io/OutputStream.hpp"
#include "./PdfDocument.hpp"

namespace android::graphics::pdf
{
	// Fields
	
	// QJniObject forward
	PdfDocument::PdfDocument(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PdfDocument::PdfDocument()
		: __JniBaseClass(
			"android.graphics.pdf.PdfDocument",
			"()V"
		) {}
	
	// Methods
	void PdfDocument::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void PdfDocument::finishPage(android::graphics::pdf::PdfDocument_Page arg0)
	{
		callMethod<void>(
			"finishPage",
			"(Landroid/graphics/pdf/PdfDocument$Page;)V",
			arg0.object()
		);
	}
	__JniBaseClass PdfDocument::getPages()
	{
		return callObjectMethod(
			"getPages",
			"()Ljava/util/List;"
		);
	}
	android::graphics::pdf::PdfDocument_Page PdfDocument::startPage(android::graphics::pdf::PdfDocument_PageInfo arg0)
	{
		return callObjectMethod(
			"startPage",
			"(Landroid/graphics/pdf/PdfDocument$PageInfo;)Landroid/graphics/pdf/PdfDocument$Page;",
			arg0.object()
		);
	}
	void PdfDocument::writeTo(java::io::OutputStream arg0)
	{
		callMethod<void>(
			"writeTo",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
} // namespace android::graphics::pdf

