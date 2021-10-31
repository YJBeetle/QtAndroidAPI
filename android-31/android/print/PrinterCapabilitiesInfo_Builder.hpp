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
		
		// QJniObject forward
		template<typename ...Ts> explicit PrinterCapabilitiesInfo_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PrinterCapabilitiesInfo_Builder(QJniObject obj);
		
		// Constructors
		PrinterCapabilitiesInfo_Builder(android::print::PrinterId arg0);
		
		// Methods
		android::print::PrinterCapabilitiesInfo_Builder addMediaSize(android::print::PrintAttributes_MediaSize arg0, jboolean arg1);
		android::print::PrinterCapabilitiesInfo_Builder addResolution(android::print::PrintAttributes_Resolution arg0, jboolean arg1);
		android::print::PrinterCapabilitiesInfo build();
		android::print::PrinterCapabilitiesInfo_Builder setColorModes(jint arg0, jint arg1);
		android::print::PrinterCapabilitiesInfo_Builder setDuplexModes(jint arg0, jint arg1);
		android::print::PrinterCapabilitiesInfo_Builder setMinMargins(android::print::PrintAttributes_Margins arg0);
	};
} // namespace android::print

