#include "./PrintDocumentInfo.hpp"
#include "./PrintDocumentAdapter_LayoutResultCallback.hpp"

namespace android::print
{
	// Fields
	
	// QJniObject forward
	PrintDocumentAdapter_LayoutResultCallback::PrintDocumentAdapter_LayoutResultCallback(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void PrintDocumentAdapter_LayoutResultCallback::onLayoutCancelled()
	{
		callMethod<void>(
			"onLayoutCancelled",
			"()V"
		);
	}
	void PrintDocumentAdapter_LayoutResultCallback::onLayoutFailed(jstring arg0)
	{
		callMethod<void>(
			"onLayoutFailed",
			"(Ljava/lang/CharSequence;)V",
			arg0
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

