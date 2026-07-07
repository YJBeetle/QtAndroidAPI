#pragma once

#include "../../../JObject.hpp"

namespace android::graphics::pdf
{
	class LoadParams;
}
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
		static jint DOCUMENT_LINEARIZED_TYPE_LINEARIZED();
		static jint DOCUMENT_LINEARIZED_TYPE_NON_LINEARIZED();
		static jint PDF_FORM_TYPE_ACRO_FORM();
		static jint PDF_FORM_TYPE_NONE();
		static jint PDF_FORM_TYPE_XFA_FOREGROUND();
		static jint PDF_FORM_TYPE_XFA_FULL();
		
		// QJniObject forward
		template<typename ...Ts> explicit PdfRenderer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PdfRenderer(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PdfRenderer(android::os::ParcelFileDescriptor arg0);
		PdfRenderer(android::os::ParcelFileDescriptor arg0, android::graphics::pdf::LoadParams arg1);
		
		// Methods
		void close() const;
		jint getDocumentLinearizationType() const;
		jint getPageCount() const;
		jint getPdfFormType() const;
		android::graphics::pdf::PdfRenderer_Page openPage(jint arg0) const;
		jboolean shouldScaleForPrinting() const;
		void write(android::os::ParcelFileDescriptor arg0, jboolean arg1) const;
	};
} // namespace android::graphics::pdf

