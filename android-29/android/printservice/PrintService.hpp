#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::print
{
	class PrinterId;
}
namespace android::printservice
{
	class PrintJob;
}
namespace android::printservice
{
	class PrinterDiscoverySession;
}

namespace android::printservice
{
	class PrintService : public android::app::Service
	{
	public:
		// Fields
		static jstring EXTRA_CAN_SELECT_PRINTER();
		static jstring EXTRA_PRINTER_INFO();
		static jstring EXTRA_PRINT_DOCUMENT_INFO();
		static jstring EXTRA_PRINT_JOB_INFO();
		static jstring EXTRA_SELECT_PRINTER();
		static jstring SERVICE_INTERFACE();
		static jstring SERVICE_META_DATA();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrintService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		PrintService(QAndroidJniObject obj);
		
		// Constructors
		PrintService();
		
		// Methods
		QAndroidJniObject generatePrinterId(jstring arg0);
		QAndroidJniObject getActivePrintJobs();
		QAndroidJniObject onBind(android::content::Intent arg0);
	};
} // namespace android::printservice

