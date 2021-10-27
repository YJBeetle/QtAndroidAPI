#include "../os/Bundle.hpp"
#include "../os/CancellationSignal.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "./PrintAttributes.hpp"
#include "./PrintDocumentAdapter_LayoutResultCallback.hpp"
#include "./PrintDocumentAdapter_WriteResultCallback.hpp"
#include "./PrintDocumentAdapter.hpp"

namespace android::print
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
	
	PrintDocumentAdapter::PrintDocumentAdapter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PrintDocumentAdapter::PrintDocumentAdapter()
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
	void PrintDocumentAdapter::onLayout(android::print::PrintAttributes arg0, android::print::PrintAttributes arg1, android::os::CancellationSignal arg2, android::print::PrintDocumentAdapter_LayoutResultCallback arg3, android::os::Bundle arg4)
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
	void PrintDocumentAdapter::onWrite(jarray arg0, android::os::ParcelFileDescriptor arg1, android::os::CancellationSignal arg2, android::print::PrintDocumentAdapter_WriteResultCallback arg3)
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
} // namespace android::print

