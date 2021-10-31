#include "./PrintDocumentAdapter_WriteResultCallback.hpp"

namespace android::print
{
	// Fields
	
	PrintDocumentAdapter_WriteResultCallback::PrintDocumentAdapter_WriteResultCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void PrintDocumentAdapter_WriteResultCallback::onWriteCancelled()
	{
		__thiz.callMethod<void>(
			"onWriteCancelled",
			"()V"
		);
	}
	void PrintDocumentAdapter_WriteResultCallback::onWriteFailed(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onWriteFailed",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void PrintDocumentAdapter_WriteResultCallback::onWriteFinished(jarray arg0)
	{
		__thiz.callMethod<void>(
			"onWriteFinished",
			"([Landroid/print/PageRange;)V",
			arg0
		);
	}
} // namespace android::print

