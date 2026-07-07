#pragma once

#include "../../../JObject.hpp"

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
	class PdfDocument_PageInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PdfDocument_PageInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PdfDocument_PageInfo_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PdfDocument_PageInfo_Builder(jint arg0, jint arg1, jint arg2);
		
		// Methods
		android::graphics::pdf::PdfDocument_PageInfo create() const;
		android::graphics::pdf::PdfDocument_PageInfo_Builder setContentRect(android::graphics::Rect arg0) const;
	};
} // namespace android::graphics::pdf

