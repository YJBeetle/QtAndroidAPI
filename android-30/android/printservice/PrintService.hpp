#pragma once

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
class JString;

namespace android::printservice
{
	class PrintService : public android::app::Service
	{
	public:
		// Fields
		static JString EXTRA_CAN_SELECT_PRINTER();
		static JString EXTRA_PRINTER_INFO();
		static JString EXTRA_PRINT_DOCUMENT_INFO();
		static JString EXTRA_PRINT_JOB_INFO();
		static JString EXTRA_SELECT_PRINTER();
		static JString SERVICE_INTERFACE();
		static JString SERVICE_META_DATA();
		
		// QJniObject forward
		template<typename ...Ts> explicit PrintService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		PrintService(QJniObject obj);
		
		// Constructors
		PrintService();
		
		// Methods
		android::print::PrinterId generatePrinterId(JString arg0) const;
		JObject getActivePrintJobs() const;
		JObject onBind(android::content::Intent arg0) const;
	};
} // namespace android::printservice

