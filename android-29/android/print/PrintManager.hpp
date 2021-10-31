#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::print
{
	class PrintManager : public __JniBaseClass
	{
	public:
		// Fields
		
		PrintManager(QAndroidJniObject obj);
		// Constructors
		PrintManager() = default;
		
		// Methods
		QAndroidJniObject getPrintJobs();
		QAndroidJniObject print(jstring arg0, android::print::PrintDocumentAdapter arg1, android::print::PrintAttributes arg2);
	};
} // namespace android::print

