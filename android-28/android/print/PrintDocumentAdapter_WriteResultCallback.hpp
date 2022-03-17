#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./PrintDocumentAdapter_WriteResultCallback.def.hpp"

namespace android::print
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void PrintDocumentAdapter_WriteResultCallback::onWriteCancelled() const
	{
		callMethod<void>(
			"onWriteCancelled",
			"()V"
		);
	}
	inline void PrintDocumentAdapter_WriteResultCallback::onWriteFailed(JString arg0) const
	{
		callMethod<void>(
			"onWriteFailed",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void PrintDocumentAdapter_WriteResultCallback::onWriteFinished(JArray arg0) const
	{
		callMethod<void>(
			"onWriteFinished",
			"([Landroid/print/PageRange;)V",
			arg0.object<jarray>()
		);
	}
} // namespace android::print

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::print;
#endif
