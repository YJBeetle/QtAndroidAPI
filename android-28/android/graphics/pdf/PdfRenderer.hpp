#pragma once

#include "../../../JObject.hpp"

namespace android::graphics::pdf
{
	class PdfRenderer_Page;
}
namespace android::os
{
	class ParcelFileDescriptor;
}

namespace android::graphics::pdf
{
	class PdfRenderer : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PdfRenderer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PdfRenderer(QJniObject obj);
		
		// Constructors
		PdfRenderer(android::os::ParcelFileDescriptor arg0);
		
		// Methods
		void close();
		jint getPageCount();
		android::graphics::pdf::PdfRenderer_Page openPage(jint arg0);
		jboolean shouldScaleForPrinting();
	};
} // namespace android::graphics::pdf

