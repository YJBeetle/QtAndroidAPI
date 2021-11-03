#pragma once

#include "../../JObject.hpp"

namespace android::print
{
	class PrintAttributes;
}
namespace android::print
{
	class PrintDocumentAdapter;
}
namespace android::print
{
	class PrintJob;
}

namespace android::print
{
	class PrintManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PrintManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrintManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getPrintJobs();
		android::print::PrintJob print(jstring arg0, android::print::PrintDocumentAdapter arg1, android::print::PrintAttributes arg2);
	};
} // namespace android::print

