#pragma once

#include "../../JObject.hpp"

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
	class PrinterCapabilitiesInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrinterCapabilitiesInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrinterCapabilitiesInfo_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		PrinterCapabilitiesInfo_Builder(android::print::PrinterId arg0);
		
		// Methods
		android::print::PrinterCapabilitiesInfo_Builder addMediaSize(android::print::PrintAttributes_MediaSize arg0, jboolean arg1) const;
		android::print::PrinterCapabilitiesInfo_Builder addResolution(android::print::PrintAttributes_Resolution arg0, jboolean arg1) const;
		android::print::PrinterCapabilitiesInfo build() const;
		android::print::PrinterCapabilitiesInfo_Builder setColorModes(jint arg0, jint arg1) const;
		android::print::PrinterCapabilitiesInfo_Builder setDuplexModes(jint arg0, jint arg1) const;
		android::print::PrinterCapabilitiesInfo_Builder setMinMargins(android::print::PrintAttributes_Margins arg0) const;
	};
} // namespace android::print

