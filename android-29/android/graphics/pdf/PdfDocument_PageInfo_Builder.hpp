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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PdfDocument_PageInfo_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PdfDocument_PageInfo_Builder(QAndroidJniObject obj);
		
		// Constructors
		PdfDocument_PageInfo_Builder(jint arg0, jint arg1, jint arg2);
		
		// Methods
		QAndroidJniObject create();
		QAndroidJniObject setContentRect(android::graphics::Rect arg0);
	};
} // namespace android::graphics::pdf

