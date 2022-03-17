#pragma once

#include "../../JArray.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/CancellationSignal.def.hpp"
#include "../os/ParcelFileDescriptor.def.hpp"
#include "./PrintAttributes.def.hpp"
#include "./PrintDocumentAdapter_LayoutResultCallback.def.hpp"
#include "./PrintDocumentAdapter_WriteResultCallback.def.hpp"
#include "../../JString.hpp"
#include "./PrintDocumentAdapter.def.hpp"

namespace android::print
{
	// Fields
	inline JString PrintDocumentAdapter::EXTRA_PRINT_PREVIEW()
	{
		return getStaticObjectField(
			"android.print.PrintDocumentAdapter",
			"EXTRA_PRINT_PREVIEW",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline PrintDocumentAdapter::PrintDocumentAdapter()
		: JObject(
			"android.print.PrintDocumentAdapter",
			"()V"
		) {}
	
	// Methods
	inline void PrintDocumentAdapter::onFinish() const
	{
		callMethod<void>(
			"onFinish",
			"()V"
		);
	}
	inline void PrintDocumentAdapter::onLayout(android::print::PrintAttributes arg0, android::print::PrintAttributes arg1, android::os::CancellationSignal arg2, android::print::PrintDocumentAdapter_LayoutResultCallback arg3, android::os::Bundle arg4) const
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
	inline void PrintDocumentAdapter::onStart() const
	{
		callMethod<void>(
			"onStart",
			"()V"
		);
	}
	inline void PrintDocumentAdapter::onWrite(JArray arg0, android::os::ParcelFileDescriptor arg1, android::os::CancellationSignal arg2, android::print::PrintDocumentAdapter_WriteResultCallback arg3) const
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

// Base class headers

