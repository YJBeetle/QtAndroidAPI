#pragma once

#include "./PrintDocumentInfo.def.hpp"
#include "../../JString.hpp"
#include "./PrintDocumentInfo_Builder.def.hpp"

namespace android::print
{
	// Fields
	
	// Constructors
	inline PrintDocumentInfo_Builder::PrintDocumentInfo_Builder(JString arg0)
		: JObject(
			"android.print.PrintDocumentInfo$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::print::PrintDocumentInfo PrintDocumentInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/print/PrintDocumentInfo;"
		);
	}
	inline android::print::PrintDocumentInfo_Builder PrintDocumentInfo_Builder::setContentType(jint arg0) const
	{
		return callObjectMethod(
			"setContentType",
			"(I)Landroid/print/PrintDocumentInfo$Builder;",
			arg0
		);
	}
	inline android::print::PrintDocumentInfo_Builder PrintDocumentInfo_Builder::setPageCount(jint arg0) const
	{
		return callObjectMethod(
			"setPageCount",
			"(I)Landroid/print/PrintDocumentInfo$Builder;",
			arg0
		);
	}
} // namespace android::print

// Base class headers

