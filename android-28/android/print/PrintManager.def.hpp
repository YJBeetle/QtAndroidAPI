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
class JString;

namespace android::print
{
	class PrintManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrintManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrintManager(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getPrintJobs() const;
		android::print::PrintJob print(JString arg0, android::print::PrintDocumentAdapter arg1, android::print::PrintAttributes arg2) const;
	};
} // namespace android::print

