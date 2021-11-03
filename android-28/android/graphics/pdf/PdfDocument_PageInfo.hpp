#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class Rect;
}

namespace android::graphics::pdf
{
	class PdfDocument_PageInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PdfDocument_PageInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PdfDocument_PageInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::graphics::Rect getContentRect();
		jint getPageHeight();
		jint getPageNumber();
		jint getPageWidth();
	};
} // namespace android::graphics::pdf

