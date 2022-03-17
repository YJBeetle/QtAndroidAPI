#pragma once

#include "../../JObject.hpp"

namespace android::print
{
	class PrintDocumentInfo;
}
class JString;

namespace android::print
{
	class PrintDocumentInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrintDocumentInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrintDocumentInfo_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		PrintDocumentInfo_Builder(JString arg0);
		
		// Methods
		android::print::PrintDocumentInfo build() const;
		android::print::PrintDocumentInfo_Builder setContentType(jint arg0) const;
		android::print::PrintDocumentInfo_Builder setPageCount(jint arg0) const;
	};
} // namespace android::print

