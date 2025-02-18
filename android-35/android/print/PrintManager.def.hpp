#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ComponentName;
}
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
		
		// QJniObject forward
		template<typename ...Ts> explicit PrintManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrintManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getPrintJobs() const;
		jboolean isPrintServiceEnabled(android::content::ComponentName arg0) const;
		android::print::PrintJob print(JString arg0, android::print::PrintDocumentAdapter arg1, android::print::PrintAttributes arg2) const;
	};
} // namespace android::print

