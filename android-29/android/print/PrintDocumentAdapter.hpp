#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class CancellationSignal;
}
namespace __jni_impl::android::os
{
	class ParcelFileDescriptor;
}
namespace __jni_impl::android::print
{
	class PrintAttributes;
}
namespace __jni_impl::android::print
{
	class PrintDocumentAdapter_LayoutResultCallback;
}
namespace __jni_impl::android::print
{
	class PrintDocumentAdapter_WriteResultCallback;
}

namespace __jni_impl::android::print
{
	class PrintDocumentAdapter : public __JniBaseClass
	{
	public:
		// Fields
		static jstring EXTRA_PRINT_PREVIEW();
		
		// Constructors
		void __constructor();
		
		// Methods
		void onFinish();
		void onLayout(__jni_impl::android::print::PrintAttributes arg0, __jni_impl::android::print::PrintAttributes arg1, __jni_impl::android::os::CancellationSignal arg2, __jni_impl::android::print::PrintDocumentAdapter_LayoutResultCallback arg3, __jni_impl::android::os::Bundle arg4);
		void onStart();
		void onWrite(jarray arg0, __jni_impl::android::os::ParcelFileDescriptor arg1, __jni_impl::android::os::CancellationSignal arg2, __jni_impl::android::print::PrintDocumentAdapter_WriteResultCallback arg3);
	};
} // namespace __jni_impl::android::print

#include "../os/Bundle.hpp"
#include "../os/CancellationSignal.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "PrintAttributes.hpp"
#include "PrintDocumentAdapter_LayoutResultCallback.hpp"
#include "PrintDocumentAdapter_WriteResultCallback.hpp"

namespace __jni_impl::android::print
{
	// Fields
	jstring PrintDocumentAdapter::EXTRA_PRINT_PREVIEW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintDocumentAdapter",
			"EXTRA_PRINT_PREVIEW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void PrintDocumentAdapter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.print.PrintDocumentAdapter",
			"()V"
		);
	}
	
	// Methods
	void PrintDocumentAdapter::onFinish()
	{
		__thiz.callMethod<void>(
			"onFinish",
			"()V"
		);
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
			arg4.__jniObject().object()
		);
	}
	void PrintDocumentAdapter::onStart()
	{
		__thiz.callMethod<void>(
			"onStart",
			"()V"
		);
	}
	void PrintDocumentAdapter::onWrite(jarray arg0, __jni_impl::android::os::ParcelFileDescriptor arg1, __jni_impl::android::os::CancellationSignal arg2, __jni_impl::android::print::PrintDocumentAdapter_WriteResultCallback arg3)
	{
		__thiz.callMethod<void>(
			"onWrite",
			"([Landroid/print/PageRange;Landroid/os/ParcelFileDescriptor;Landroid/os/CancellationSignal;Landroid/print/PrintDocumentAdapter$WriteResultCallback;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
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

