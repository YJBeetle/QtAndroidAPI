#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Canvas;
}
namespace android::graphics::pdf
{
	class PdfDocument_PageInfo;
}

namespace android::graphics::pdf
{
	class PdfDocument_Page : public __JniBaseClass
	{
	public:
		// Fields
		
		PdfDocument_Page(QAndroidJniObject obj);
		// Constructors
		PdfDocument_Page() = default;
		
		// Methods
		QAndroidJniObject getCanvas();
		QAndroidJniObject getInfo();
	};
} // namespace android::graphics::pdf

