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
		return getStaticObjectField(
			"android.print.PrintDocumentAdapter",
			"EXTRA_PRINT_PREVIEW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	PrintDocumentAdapter::PrintDocumentAdapter(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PrintDocumentAdapter::PrintDocumentAdapter()
		: __JniBaseClass(
			"android.print.PrintDocumentAdapter",
			"()V"
		) {}
	
	// Methods
	void PrintDocumentAdapter::onFinish()
	{
		callMethod<void>(
			"onFinish",
			"()V"
		);
	}
	void PrintDocumentAdapter::onLayout(android::print::PrintAttributes arg0, android::print::PrintAttributes arg1, android::os::CancellationSignal arg2, android::print::PrintDocumentAdapter_LayoutResultCallback arg3, android::os::Bundle arg4)
	{
		callMethod<void>(
			"onLayout",
			"(Landroid/print/PrintAttributes;Landroid/print/PrintAttributes;Landroid/os/CancellationSignal;Landroid/print/PrintDocumentAdapter$LayoutResultCallback;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	void PrintDocumentAdapter::onStart()
	{
		callMethod<void>(
			"onStart",
			"()V"
		);
	}
	void PrintDocumentAdapter::onWrite(jarray arg0, android::os::ParcelFileDescriptor arg1, android::os::CancellationSignal arg2, android::print::PrintDocumentAdapter_WriteResultCallback arg3)
	{
		callMethod<void>(
			"onWrite",
			"([Landroid/print/PageRange;Landroid/os/ParcelFileDescriptor;Landroid/os/CancellationSignal;Landroid/print/PrintDocumentAdapter$WriteResultCallback;)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
} // namespace android::print

