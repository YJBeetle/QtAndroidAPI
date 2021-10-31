#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::print
{
	class PrintAttributes_Margins;
}
namespace android::print
{
	class PrintAttributes_MediaSize;
}
namespace android::print
{
	class PrintAttributes_Resolution;
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
	class PrinterCapabilitiesInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		PrinterCapabilitiesInfo_Builder(QAndroidJniObject obj);
		// Constructors
		PrinterCapabilitiesInfo_Builder(android::print::PrinterId arg0);
		PrinterCapabilitiesInfo_Builder() = default;
		
		// Methods
		QAndroidJniObject addMediaSize(android::print::PrintAttributes_MediaSize arg0, jboolean arg1);
		QAndroidJniObject addResolution(android::print::PrintAttributes_Resolution arg0, jboolean arg1);
		QAndroidJniObject build();
		QAndroidJniObject setColorModes(jint arg0, jint arg1);
		QAndroidJniObject setDuplexModes(jint arg0, jint arg1);
		QAndroidJniObject setMinMargins(android::print::PrintAttributes_Margins arg0);
	};
} // namespace android::print

