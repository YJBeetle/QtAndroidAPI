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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PdfDocument_PageInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PdfDocument_PageInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::graphics::Rect getContentRect() const;
		jint getPageHeight() const;
		jint getPageNumber() const;
		jint getPageWidth() const;
	};
} // namespace android::graphics::pdf

