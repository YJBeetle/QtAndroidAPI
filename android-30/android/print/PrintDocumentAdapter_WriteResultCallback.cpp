#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./PrintDocumentAdapter_WriteResultCallback.hpp"

namespace android::print
{
	// Fields
	
	// QAndroidJniObject forward
	PrintDocumentAdapter_WriteResultCallback::PrintDocumentAdapter_WriteResultCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void PrintDocumentAdapter_WriteResultCallback::onWriteCancelled()
	{
		callMethod<void>(
			"onWriteCancelled",
			"()V"
		);
	}
	void PrintDocumentAdapter_WriteResultCallback::onWriteFailed(JString arg0)
	{
		callMethod<void>(
			"onWriteFailed",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void PrintDocumentAdapter_WriteResultCallback::onWriteFinished(JArray arg0)
	{
		callMethod<void>(
			"onWriteFinished",
			"([Landroid/print/PageRange;)V",
			arg0.object<jarray>()
		);
	}
} // namespace android::print

