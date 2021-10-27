#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class Matrix;
}
namespace android::graphics
{
	class Rect;
}
namespace android::graphics::pdf
{
	class PdfRenderer;
}

namespace android::graphics::pdf
{
	class PdfRenderer_Page : public __JniBaseClass
	{
	public:
		// Fields
		static jint RENDER_MODE_FOR_DISPLAY();
		static jint RENDER_MODE_FOR_PRINT();
		
		PdfRenderer_Page(QAndroidJniObject obj);
		// Constructors
		PdfRenderer_Page() = default;
		
		// Methods
		void close();
		jint getHeight();
		jint getIndex();
		jint getWidth();
		void render(android::graphics::Bitmap arg0, android::graphics::Rect arg1, android::graphics::Matrix arg2, jint arg3);
	};
} // namespace android::graphics::pdf

