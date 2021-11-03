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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PdfRenderer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PdfRenderer(QAndroidJniObject obj);
		
		// Constructors
		PdfRenderer(android::os::ParcelFileDescriptor arg0);
		
		// Methods
		void close() const;
		jint getPageCount() const;
		android::graphics::pdf::PdfRenderer_Page openPage(jint arg0) const;
		jboolean shouldScaleForPrinting() const;
	};
} // namespace android::graphics::pdf

