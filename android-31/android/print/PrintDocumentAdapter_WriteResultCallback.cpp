#include "./PrintDocumentAdapter_WriteResultCallback.hpp"

namespace android::print
{
	// Fields
	
	// QAndroidJniObject forward
	PrintDocumentAdapter_WriteResultCallback::PrintDocumentAdapter_WriteResultCallback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void PrintDocumentAdapter_WriteResultCallback::onWriteCancelled()
	{
		callMethod<void>(
			"onWriteCancelled",
			"()V"
		);
	}
	void PrintDocumentAdapter_WriteResultCallback::onWriteFailed(jstring arg0)
	{
		callMethod<void>(
			"onWriteFailed",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void PrintDocumentAdapter_WriteResultCallback::onWriteFinished(jarray arg0)
	{
		callMethod<void>(
			"onWriteFinished",
			"([Landroid/print/PageRange;)V",
			arg0
		);
	}
} // namespace android::print

