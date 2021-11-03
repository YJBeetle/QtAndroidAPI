#include "./PrintDocumentInfo.hpp"
#include "../../JString.hpp"
#include "./PrintDocumentAdapter_LayoutResultCallback.hpp"

namespace android::print
{
	// Fields
	
	// QAndroidJniObject forward
	PrintDocumentAdapter_LayoutResultCallback::PrintDocumentAdapter_LayoutResultCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void PrintDocumentAdapter_LayoutResultCallback::onLayoutCancelled()
	{
		callMethod<void>(
			"onLayoutCancelled",
			"()V"
		);
	}
	void PrintDocumentAdapter_LayoutResultCallback::onLayoutFailed(JString arg0)
	{
		callMethod<void>(
			"onLayoutFailed",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void PrintDocumentAdapter_LayoutResultCallback::onLayoutFinished(android::print::PrintDocumentInfo arg0, jboolean arg1)
	{
		callMethod<void>(
			"onLayoutFinished",
			"(Landroid/print/PrintDocumentInfo;Z)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::print

