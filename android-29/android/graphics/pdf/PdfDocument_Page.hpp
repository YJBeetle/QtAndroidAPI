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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PdfDocument_Page(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PdfDocument_Page(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject getCanvas();
		QAndroidJniObject getInfo();
	};
} // namespace android::graphics::pdf

