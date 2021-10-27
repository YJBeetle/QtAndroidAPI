#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::graphics::pdf
{
	class PdfDocument_PageInfo;
}

namespace android::graphics::pdf
{
	class PdfDocument_PageInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		PdfDocument_PageInfo_Builder(QAndroidJniObject obj);
		// Constructors
		PdfDocument_PageInfo_Builder(jint &arg0, jint &arg1, jint &arg2);
		PdfDocument_PageInfo_Builder() = default;
		
		// Methods
		QAndroidJniObject create();
		QAndroidJniObject setContentRect(android::graphics::Rect arg0);
	};
} // namespace android::graphics::pdf

