#include "./PrintDocumentInfo.hpp"
#include "../../JString.hpp"
#include "./PrintDocumentAdapter_LayoutResultCallback.hpp"

namespace android::print
{
	// Fields
	
	// Constructors
	
	// Methods
	void PrintDocumentAdapter_LayoutResultCallback::onLayoutCancelled() const
	{
		callMethod<void>(
			"onLayoutCancelled",
			"()V"
		);
	}
	void PrintDocumentAdapter_LayoutResultCallback::onLayoutFailed(JString arg0) const
	{
		callMethod<void>(
			"onLayoutFailed",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void PrintDocumentAdapter_LayoutResultCallback::onLayoutFinished(android::print::PrintDocumentInfo arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onLayoutFinished",
			"(Landroid/print/PrintDocumentInfo;Z)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::print

