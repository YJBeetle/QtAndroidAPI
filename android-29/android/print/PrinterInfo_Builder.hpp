#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::print
{
	class PrinterInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrinterInfo_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PrinterInfo_Builder(QAndroidJniObject obj);
		
		// Constructors
		PrinterInfo_Builder(android::print::PrinterInfo arg0);
		PrinterInfo_Builder(android::print::PrinterId arg0, jstring arg1, jint arg2);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setCapabilities(android::print::PrinterCapabilitiesInfo arg0);
		QAndroidJniObject setDescription(jstring arg0);
		QAndroidJniObject setHasCustomPrinterIcon(jboolean arg0);
		QAndroidJniObject setIconResourceId(jint arg0);
		QAndroidJniObject setInfoIntent(android::app::PendingIntent arg0);
		QAndroidJniObject setName(jstring arg0);
		QAndroidJniObject setStatus(jint arg0);
	};
} // namespace android::print

