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
		
		PrintAttributes_Builder(QAndroidJniObject obj);
		// Constructors
		PrintAttributes_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setColorMode(jint arg0);
		QAndroidJniObject setDuplexMode(jint arg0);
		QAndroidJniObject setMediaSize(android::print::PrintAttributes_MediaSize arg0);
		QAndroidJniObject setMinMargins(android::print::PrintAttributes_Margins arg0);
		QAndroidJniObject setResolution(android::print::PrintAttributes_Resolution arg0);
	};
} // namespace android::print

