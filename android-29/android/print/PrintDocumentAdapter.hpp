#pragma once

#ifndef ANDROID_PRINT_PRINTDOCUMENTADAPTER
#define ANDROID_PRINT_PRINTDOCUMENTADAPTER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class ParcelFileDescriptor;
}
namespace __jni_impl::android::os
{
	class CancellationSignal;
}
namespace __jni_impl::android::print
{
	class PrintDocumentAdapter_WriteResultCallback;
}
namespace __jni_impl::android::print
{
	class PrintAttributes;
}
namespace __jni_impl::android::print
{
	class PrintDocumentAdapter_LayoutResultCallback;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::print
{
	class PrintDocumentAdapter : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject EXTRA_PRINT_PREVIEW();
		
		// Constructors
		void __constructor();
		
		// Methods
		void onStart();
		void onWrite(jarray arg0, __jni_impl::android::os::ParcelFileDescriptor arg1, __jni_impl::android::os::CancellationSignal arg2, __jni_impl::android::print::PrintDocumentAdapter_WriteResultCallback arg3);
		void onFinish();
		void onLayout(__jni_impl::android::print::PrintAttributes arg0, __jni_impl::android::print::PrintAttributes arg1, __jni_impl::android::os::CancellationSignal arg2, __jni_impl::android::print::PrintDocumentAdapter_LayoutResultCallback arg3, __jni_impl::android::os::Bundle arg4);
	};
} // namespace __jni_impl::android::print

#include "../os/ParcelFileDescriptor.hpp"
#include "../os/CancellationSignal.hpp"
#include "PrintDocumentAdapter_WriteResultCallback.hpp"
#include "PrintAttributes.hpp"
#include "PrintDocumentAdapter_LayoutResultCallback.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::print
{
	// Fields
	QAndroidJniObject PrintDocumentAdapter::EXTRA_PRINT_PREVIEW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintDocumentAdapter",
			"EXTRA_PRINT_PREVIEW",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void PrintDocumentAdapter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.print.PrintDocumentAdapter",
			"()V");
	}
	
	// Methods
	void PrintDocumentAdapter::onStart()
	{
		__thiz.callMethod<void>(
			"onStart",
			"()V");
	}
	void PrintDocumentAdapter::onWrite(jarray arg0, __jni_impl::android::os::ParcelFileDescriptor arg1, __jni_impl::android::os::CancellationSignal arg2, __jni_impl::android::print::PrintDocumentAdapter_WriteResultCallback arg3)
	{
		__thiz.callMethod<void>(
			"onWrite",
			"([Landroid/print/PageRange;Landroid/os/ParcelFileDescriptor;Landroid/os/CancellationSignal;Landroid/print/PrintDocumentAdapter$WriteResultCallback;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	void PrintDocumentAdapter::onFinish()
	{
		__thiz.callMethod<void>(
			"onFinish",
			"()V");
	}
	void PrintDocumentAdapter::onLayout(__jni_impl::android::print::PrintAttributes arg0, __jni_impl::android::print::PrintAttributes arg1, __jni_impl::android::os::CancellationSignal arg2, __jni_impl::android::print::PrintDocumentAdapter_LayoutResultCallback arg3, __jni_impl::android::os::Bundle arg4)
	{
		__thiz.callMethod<void>(
			"onLayout",
			"(Landroid/print/PrintAttributes;Landroid/print/PrintAttributes;Landroid/os/CancellationSignal;Landroid/print/PrintDocumentAdapter$LayoutResultCallback;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object());
	}
} // namespace __jni_impl::android::print

namespace android::print
{
	class PrintDocumentAdapter : public __jni_impl::android::print::PrintDocumentAdapter
	{
	public:
		PrintDocumentAdapter(QAndroidJniObject obj) { __thiz = obj; }
		PrintDocumentAdapter()
		{
			__constructor();
		}
	};
} // namespace android::print

#endif // ANDROID_PRINT_PRINTDOCUMENTADAPTER

