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
		
		// QJniObject forward
		template<typename ...Ts> explicit PdfDocument_PageInfo_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PdfDocument_PageInfo_Builder(QJniObject obj);
		
		// Constructors
		PdfDocument_PageInfo_Builder(jint arg0, jint arg1, jint arg2);
		
		// Methods
		android::graphics::pdf::PdfDocument_PageInfo create();
		android::graphics::pdf::PdfDocument_PageInfo_Builder setContentRect(android::graphics::Rect arg0);
	};
} // namespace android::graphics::pdf

