#pragma once

#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../print/PrinterId.def.hpp"
#include "./PrintJob.def.hpp"
#include "./PrinterDiscoverySession.def.hpp"
#include "../../JString.hpp"
#include "./PrintService.def.hpp"

namespace android::printservice
{
	// Fields
	inline JString PrintService::EXTRA_CAN_SELECT_PRINTER()
	{
		return getStaticObjectField(
			"android.printservice.PrintService",
			"EXTRA_CAN_SELECT_PRINTER",
			"Ljava/lang/String;"
		);
	}
	inline JString PrintService::EXTRA_PRINTER_INFO()
	{
		return getStaticObjectField(
			"android.printservice.PrintService",
			"EXTRA_PRINTER_INFO",
			"Ljava/lang/String;"
		);
	}
	inline JString PrintService::EXTRA_PRINT_DOCUMENT_INFO()
	{
		return getStaticObjectField(
			"android.printservice.PrintService",
			"EXTRA_PRINT_DOCUMENT_INFO",
			"Ljava/lang/String;"
		);
	}
	inline JString PrintService::EXTRA_PRINT_JOB_INFO()
	{
		return getStaticObjectField(
			"android.printservice.PrintService",
			"EXTRA_PRINT_JOB_INFO",
			"Ljava/lang/String;"
		);
	}
	inline JString PrintService::EXTRA_SELECT_PRINTER()
	{
		return getStaticObjectField(
			"android.printservice.PrintService",
			"EXTRA_SELECT_PRINTER",
			"Ljava/lang/String;"
		);
	}
	inline JString PrintService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.printservice.PrintService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	inline JString PrintService::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.printservice.PrintService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline PrintService::PrintService()
		: android::app::Service(
			"android.printservice.PrintService",
			"()V"
		) {}
	
	// Methods
	inline android::print::PrinterId PrintService::generatePrinterId(JString arg0) const
	{
		return callObjectMethod(
			"generatePrinterId",
			"(Ljava/lang/String;)Landroid/print/PrinterId;",
			arg0.object<jstring>()
		);
	}
	inline JObject PrintService::getActivePrintJobs() const
	{
		return callObjectMethod(
			"getActivePrintJobs",
			"()Ljava/util/List;"
		);
	}
	inline JObject PrintService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
} // namespace android::printservice

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::printservice;
#endif
