#include "./PdfDocument_Page.hpp"
#include "./PdfDocument_PageInfo.hpp"
#include "../../../java/io/OutputStream.hpp"
#include "./PdfDocument.hpp"

namespace android::graphics::pdf
{
	// Fields
	
	// QAndroidJniObject forward
	PdfDocument::PdfDocument(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PdfDocument::PdfDocument()
		: JObject(
			"android.graphics.pdf.PdfDocument",
			"()V"
		) {}
	
	// Methods
	void PdfDocument::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void PdfDocument::finishPage(android::graphics::pdf::PdfDocument_Page arg0) const
	{
		callMethod<void>(
			"finishPage",
			"(Landroid/graphics/pdf/PdfDocument$Page;)V",
			arg0.object()
		);
	}
	JObject PdfDocument::getPages() const
	{
		return callObjectMethod(
			"getPages",
			"()Ljava/util/List;"
		);
	}
	android::graphics::pdf::PdfDocument_Page PdfDocument::startPage(android::graphics::pdf::PdfDocument_PageInfo arg0) const
	{
		return callObjectMethod(
			"startPage",
			"(Landroid/graphics/pdf/PdfDocument$PageInfo;)Landroid/graphics/pdf/PdfDocument$Page;",
			arg0.object()
		);
	}
	void PdfDocument::writeTo(java::io::OutputStream arg0) const
	{
		callMethod<void>(
			"writeTo",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
} // namespace android::graphics::pdf

