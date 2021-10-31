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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PdfRenderer_Page(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PdfRenderer_Page(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		jint getHeight();
		jint getIndex();
		jint getWidth();
		void render(android::graphics::Bitmap arg0, android::graphics::Rect arg1, android::graphics::Matrix arg2, jint arg3);
	};
} // namespace android::graphics::pdf

