#include "../../JArray.hpp"
#include "../os/Bundle.hpp"
#include "../os/CancellationSignal.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "./PrintAttributes.hpp"
#include "./PrintDocumentAdapter_LayoutResultCallback.hpp"
#include "./PrintDocumentAdapter_WriteResultCallback.hpp"
#include "../../JString.hpp"
#include "./PrintDocumentAdapter.hpp"

namespace android::print
{
	// Fields
	JString PrintDocumentAdapter::EXTRA_PRINT_PREVIEW()
	{
		return getStaticObjectField(
			"android.print.PrintDocumentAdapter",
			"EXTRA_PRINT_PREVIEW",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	PrintDocumentAdapter::PrintDocumentAdapter(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PrintDocumentAdapter::PrintDocumentAdapter()
		: JObject(
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
	void PrintDocumentAdapter::onWrite(JArray arg0, android::os::ParcelFileDescriptor arg1, android::os::CancellationSignal arg2, android::print::PrintDocumentAdapter_WriteResultCallback arg3)
	{
		callMethod<void>(
			"onWrite",
			"([Landroid/print/PageRange;Landroid/os/ParcelFileDescriptor;Landroid/os/CancellationSignal;Landroid/print/PrintDocumentAdapter$WriteResultCallback;)V",
			arg0.object<jarray>(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
} // namespace android::print

