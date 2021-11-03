#pragma once

#include "../../../JObject.hpp"

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
	class PdfDocument_Page : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PdfDocument_Page(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PdfDocument_Page(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::graphics::Canvas getCanvas() const;
		android::graphics::pdf::PdfDocument_PageInfo getInfo() const;
	};
} // namespace android::graphics::pdf

