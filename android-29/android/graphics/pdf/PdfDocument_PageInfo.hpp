#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Rect;
}

namespace android::graphics::pdf
{
	class PdfDocument_PageInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		PdfDocument_PageInfo(QAndroidJniObject obj);
		// Constructors
		PdfDocument_PageInfo() = default;
		
		// Methods
		QAndroidJniObject getContentRect();
		jint getPageHeight();
		jint getPageNumber();
		jint getPageWidth();
	};
} // namespace android::graphics::pdf

