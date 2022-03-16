#pragma once

#include "../../../JObject.hpp"

namespace android::graphics::pdf
{
	class PdfDocument_Page;
}
namespace android::graphics::pdf
{
	class PdfDocument_PageInfo;
}
namespace java::io
{
	class OutputStream;
}

namespace android::graphics::pdf
{
	class PdfDocument : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PdfDocument(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PdfDocument(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		PdfDocument();
		
		// Methods
		void close() const;
		void finishPage(android::graphics::pdf::PdfDocument_Page arg0) const;
		JObject getPages() const;
		android::graphics::pdf::PdfDocument_Page startPage(android::graphics::pdf::PdfDocument_PageInfo arg0) const;
		void writeTo(java::io::OutputStream arg0) const;
	};
} // namespace android::graphics::pdf

