#pragma once

#include "../../../JObject.hpp"

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
	class PdfRenderer_Page : public JObject
	{
	public:
		// Fields
		static jint RENDER_MODE_FOR_DISPLAY();
		static jint RENDER_MODE_FOR_PRINT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PdfRenderer_Page(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PdfRenderer_Page(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void close() const;
		jint getHeight() const;
		jint getIndex() const;
		jint getWidth() const;
		void render(android::graphics::Bitmap arg0, android::graphics::Rect arg1, android::graphics::Matrix arg2, jint arg3) const;
	};
} // namespace android::graphics::pdf

