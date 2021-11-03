#pragma once

#include "../../JObject.hpp"

namespace android::print
{
	class PrintAttributes;
}
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
	class PrintAttributes_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrintAttributes_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrintAttributes_Builder(QAndroidJniObject obj);
		
		// Constructors
		PrintAttributes_Builder();
		
		// Methods
		android::print::PrintAttributes build() const;
		android::print::PrintAttributes_Builder setColorMode(jint arg0) const;
		android::print::PrintAttributes_Builder setDuplexMode(jint arg0) const;
		android::print::PrintAttributes_Builder setMediaSize(android::print::PrintAttributes_MediaSize arg0) const;
		android::print::PrintAttributes_Builder setMinMargins(android::print::PrintAttributes_Margins arg0) const;
		android::print::PrintAttributes_Builder setResolution(android::print::PrintAttributes_Resolution arg0) const;
	};
} // namespace android::print

