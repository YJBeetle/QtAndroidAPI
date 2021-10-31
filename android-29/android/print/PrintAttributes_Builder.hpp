#pragma once

#include "../../__JniBaseClass.hpp"

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
	class PrintAttributes_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PrintAttributes_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PrintAttributes_Builder(QJniObject obj);
		
		// Constructors
		PrintAttributes_Builder();
		
		// Methods
		android::print::PrintAttributes build();
		android::print::PrintAttributes_Builder setColorMode(jint arg0);
		android::print::PrintAttributes_Builder setDuplexMode(jint arg0);
		android::print::PrintAttributes_Builder setMediaSize(android::print::PrintAttributes_MediaSize arg0);
		android::print::PrintAttributes_Builder setMinMargins(android::print::PrintAttributes_Margins arg0);
		android::print::PrintAttributes_Builder setResolution(android::print::PrintAttributes_Resolution arg0);
	};
} // namespace android::print

