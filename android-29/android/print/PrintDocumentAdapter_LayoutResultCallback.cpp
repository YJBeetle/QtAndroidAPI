#include "./PrintDocumentInfo.hpp"
#include "./PrintDocumentAdapter_LayoutResultCallback.hpp"

namespace android::print
{
	// Fields
	
	PrintDocumentAdapter_LayoutResultCallback::PrintDocumentAdapter_LayoutResultCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void PrintDocumentAdapter_LayoutResultCallback::onLayoutCancelled()
	{
		__thiz.callMethod<void>(
			"onLayoutCancelled",
			"()V"
		);
	}
	void PrintDocumentAdapter_LayoutResultCallback::onLayoutFailed(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onLayoutFailed",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void PrintDocumentAdapter_LayoutResultCallback::onLayoutFinished(android::print::PrintDocumentInfo arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onLayoutFinished",
			"(Landroid/print/PrintDocumentInfo;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::print

