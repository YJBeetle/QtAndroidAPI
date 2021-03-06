#pragma once

#ifndef ANDROID_PRINT_PRINTDOCUMENTADAPTER_WRITERESULTCALLBACK
#define ANDROID_PRINT_PRINTDOCUMENTADAPTER_WRITERESULTCALLBACK

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::print
{
	class PrintDocumentAdapter_WriteResultCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onWriteFinished(jarray arg0);
		void onWriteFailed(jstring arg0);
		void onWriteCancelled();
	};
} // namespace __jni_impl::android::print


namespace __jni_impl::android::print
{
	// Fields
	
	// Constructors
	void PrintDocumentAdapter_WriteResultCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.print.PrintDocumentAdapter$WriteResultCallback",
			"(V)V");
	}
	
	// Methods
	void PrintDocumentAdapter_WriteResultCallback::onWriteFinished(jarray arg0)
	{
		__thiz.callMethod<void>(
			"onWriteFinished",
			"([Landroid/print/PageRange;)V",
			arg0
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
	void PrintDocumentAdapter_WriteResultCallback::onWriteCancelled()
	{
		__thiz.callMethod<void>(
			"onWriteCancelled",
			"()V"
		);
	}
} // namespace __jni_impl::android::print

namespace android::print
{
	class PrintDocumentAdapter_WriteResultCallback : public __jni_impl::android::print::PrintDocumentAdapter_WriteResultCallback
	{
	public:
		PrintDocumentAdapter_WriteResultCallback(QAndroidJniObject obj) { __thiz = obj; }
		PrintDocumentAdapter_WriteResultCallback()
		{
			__constructor();
		}
	};
} // namespace android::print

#endif // ANDROID_PRINT_PRINTDOCUMENTADAPTER_WRITERESULTCALLBACK

