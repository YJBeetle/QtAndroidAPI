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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrinterInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrinterInfo_Builder(QAndroidJniObject obj);
		
		// Constructors
		PrinterInfo_Builder(android::print::PrinterInfo arg0);
		PrinterInfo_Builder(android::print::PrinterId arg0, JString arg1, jint arg2);
		
		// Methods
		android::print::PrinterInfo build() const;
		android::print::PrinterInfo_Builder setCapabilities(android::print::PrinterCapabilitiesInfo arg0) const;
		android::print::PrinterInfo_Builder setDescription(JString arg0) const;
		android::print::PrinterInfo_Builder setHasCustomPrinterIcon(jboolean arg0) const;
		android::print::PrinterInfo_Builder setIconResourceId(jint arg0) const;
		android::print::PrinterInfo_Builder setInfoIntent(android::app::PendingIntent arg0) const;
		android::print::PrinterInfo_Builder setName(JString arg0) const;
		android::print::PrinterInfo_Builder setStatus(jint arg0) const;
	};
} // namespace android::print

