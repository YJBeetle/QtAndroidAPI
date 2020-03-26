#pragma once

#ifndef ANDROID_PRINT_PRINTDOCUMENTADAPTER_LAYOUTRESULTCALLBACK
#define ANDROID_PRINT_PRINTDOCUMENTADAPTER_LAYOUTRESULTCALLBACK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::print
{
	class PrintDocumentInfo;
}

namespace __jni_impl::android::print
{
	class PrintDocumentAdapter_LayoutResultCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onLayoutFinished(__jni_impl::android::print::PrintDocumentInfo arg0, jboolean arg1);
		void onLayoutFailed(jstring arg0);
		void onLayoutCancelled();
	};
} // namespace __jni_impl::android::print

#include "PrintDocumentInfo.hpp"

namespace __jni_impl::android::print
{
	// Fields
	
	// Constructors
	void PrintDocumentAdapter_LayoutResultCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.print.PrintDocumentAdapter$LayoutResultCallback",
			"(V)V");
	}
	
	// Methods
	void PrintDocumentAdapter_LayoutResultCallback::onLayoutFinished(__jni_impl::android::print::PrintDocumentInfo arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onLayoutFinished",
			"(Landroid/print/PrintDocumentInfo;Z)V",
			arg0.__jniObject().object(),
			arg1
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
	void PrintDocumentAdapter_LayoutResultCallback::onLayoutCancelled()
	{
		__thiz.callMethod<void>(
			"onLayoutCancelled",
			"()V"
		);
	}
} // namespace __jni_impl::android::print

namespace android::print
{
	class PrintDocumentAdapter_LayoutResultCallback : public __jni_impl::android::print::PrintDocumentAdapter_LayoutResultCallback
	{
	public:
		PrintDocumentAdapter_LayoutResultCallback(QAndroidJniObject obj) { __thiz = obj; }
		PrintDocumentAdapter_LayoutResultCallback()
		{
			__constructor();
		}
	};
} // namespace android::print

#endif // ANDROID_PRINT_PRINTDOCUMENTADAPTER_LAYOUTRESULTCALLBACK

