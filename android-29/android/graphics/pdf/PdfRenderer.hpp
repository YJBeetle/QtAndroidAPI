#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics::pdf
{
	class PdfRenderer_Page;
}
namespace android::os
{
	class ParcelFileDescriptor;
}

namespace android::graphics::pdf
{
	class PdfRenderer : public __JniBaseClass
	{
	public:
		// Fields
		
		PdfRenderer(QAndroidJniObject obj);
		// Constructors
		PdfRenderer(android::os::ParcelFileDescriptor arg0);
		PdfRenderer() = default;
		
		// Methods
		void close();
		jint getPageCount();
		QAndroidJniObject openPage(jint arg0);
		jboolean shouldScaleForPrinting();
	};
} // namespace android::graphics::pdf

