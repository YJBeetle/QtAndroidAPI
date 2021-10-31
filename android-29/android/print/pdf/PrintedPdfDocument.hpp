#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../graphics/pdf/PdfDocument.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Rect;
}
namespace android::graphics::pdf
{
	class PdfDocument_Page;
}
namespace android::print
{
	class PrintAttributes;
}

namespace android::print::pdf
{
	class PrintedPdfDocument : public android::graphics::pdf::PdfDocument
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrintedPdfDocument(const char *className, const char *sig, Ts...agv) : android::graphics::pdf::PdfDocument(className, sig, std::forward<Ts>(agv)...) {}
		PrintedPdfDocument(QAndroidJniObject obj);
		
		// Constructors
		PrintedPdfDocument(android::content::Context arg0, android::print::PrintAttributes arg1);
		
		// Methods
		QAndroidJniObject getPageContentRect();
		jint getPageHeight();
		jint getPageWidth();
		QAndroidJniObject startPage(jint arg0);
	};
} // namespace android::print::pdf

