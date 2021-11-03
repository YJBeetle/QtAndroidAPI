#include "./PrintDocumentInfo.hpp"
#include "../../JString.hpp"
#include "./PrintDocumentInfo_Builder.hpp"

namespace android::print
{
	// Fields
	
	// QJniObject forward
	PrintDocumentInfo_Builder::PrintDocumentInfo_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PrintDocumentInfo_Builder::PrintDocumentInfo_Builder(JString arg0)
		: JObject(
			"android.print.PrintDocumentInfo$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	android::print::PrintDocumentInfo PrintDocumentInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/print/PrintDocumentInfo;"
		);
	}
	android::print::PrintDocumentInfo_Builder PrintDocumentInfo_Builder::setContentType(jint arg0) const
	{
		return callObjectMethod(
			"setContentType",
			"(I)Landroid/print/PrintDocumentInfo$Builder;",
			arg0
		);
	}
	android::print::PrintDocumentInfo_Builder PrintDocumentInfo_Builder::setPageCount(jint arg0) const
	{
		return callObjectMethod(
			"setPageCount",
			"(I)Landroid/print/PrintDocumentInfo$Builder;",
			arg0
		);
	}
} // namespace android::print

