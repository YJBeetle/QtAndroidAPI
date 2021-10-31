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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrintManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PrintManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject getPrintJobs();
		QAndroidJniObject print(jstring arg0, android::print::PrintDocumentAdapter arg1, android::print::PrintAttributes arg2);
	};
} // namespace android::print

