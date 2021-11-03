#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::print
{
	class PrinterCapabilitiesInfo;
}
namespace android::print
{
	class PrinterId;
}
namespace android::print
{
	class PrinterInfo;
}
class JString;

namespace android::print
{
	class PrinterInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PrinterInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrinterInfo_Builder(QJniObject obj);
		
		// Constructors
		PrinterInfo_Builder(android::print::PrinterInfo arg0);
		PrinterInfo_Builder(android::print::PrinterId arg0, JString arg1, jint arg2);
		
		// Methods
		android::print::PrinterInfo build();
		android::print::PrinterInfo_Builder setCapabilities(android::print::PrinterCapabilitiesInfo arg0);
		android::print::PrinterInfo_Builder setDescription(JString arg0);
		android::print::PrinterInfo_Builder setHasCustomPrinterIcon(jboolean arg0);
		android::print::PrinterInfo_Builder setIconResourceId(jint arg0);
		android::print::PrinterInfo_Builder setInfoIntent(android::app::PendingIntent arg0);
		android::print::PrinterInfo_Builder setName(JString arg0);
		android::print::PrinterInfo_Builder setStatus(jint arg0);
	};
} // namespace android::print

