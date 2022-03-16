#pragma once

#include "./PrintDocumentInfo.def.hpp"
#include "../../JString.hpp"
#include "./PrintDocumentAdapter_LayoutResultCallback.def.hpp"

namespace android::print
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void PrintDocumentAdapter_LayoutResultCallback::onLayoutCancelled() const
	{
		callMethod<void>(
			"onLayoutCancelled",
			"()V"
		);
	}
	inline void PrintDocumentAdapter_LayoutResultCallback::onLayoutFailed(JString arg0) const
	{
		callMethod<void>(
			"onLayoutFailed",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void PrintDocumentAdapter_LayoutResultCallback::onLayoutFinished(android::print::PrintDocumentInfo arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onLayoutFinished",
			"(Landroid/print/PrintDocumentInfo;Z)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::print

// Base class headers

