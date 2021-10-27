#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics::pdf
{
	class PdfDocument_Page;
}
namespace android::graphics::pdf
{
	class PdfDocument_PageInfo;
}
namespace java::io
{
	class OutputStream;
}

namespace android::graphics::pdf
{
	class PdfDocument : public __JniBaseClass
	{
	public:
		// Fields
		
		PdfDocument(QAndroidJniObject obj);
		// Constructors
		PdfDocument();
		
		// Methods
		void close();
		void finishPage(android::graphics::pdf::PdfDocument_Page arg0);
		QAndroidJniObject getPages();
		QAndroidJniObject startPage(android::graphics::pdf::PdfDocument_PageInfo arg0);
		void writeTo(java::io::OutputStream arg0);
	};
} // namespace android::graphics::pdf

