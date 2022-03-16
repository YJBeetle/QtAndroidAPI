#pragma once

#include "./PrintAttributes.def.hpp"
#include "./PrintDocumentAdapter.def.hpp"
#include "./PrintJob.def.hpp"
#include "../../JString.hpp"
#include "./PrintManager.def.hpp"

namespace android::print
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject PrintManager::getPrintJobs() const
	{
		return callObjectMethod(
			"getPrintJobs",
			"()Ljava/util/List;"
		);
	}
	inline android::print::PrintJob PrintManager::print(JString arg0, android::print::PrintDocumentAdapter arg1, android::print::PrintAttributes arg2) const
	{
		return callObjectMethod(
			"print",
			"(Ljava/lang/String;Landroid/print/PrintDocumentAdapter;Landroid/print/PrintAttributes;)Landroid/print/PrintJob;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::print

// Base class headers

