#include "./PrintAttributes.hpp"
#include "./PrintDocumentAdapter.hpp"
#include "./PrintJob.hpp"
#include "./PrintManager.hpp"

namespace android::print
{
	// Fields
	
	// QJniObject forward
	PrintManager::PrintManager(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass PrintManager::getPrintJobs()
	{
		return callObjectMethod(
			"getPrintJobs",
			"()Ljava/util/List;"
		);
	}
	android::print::PrintJob PrintManager::print(jstring arg0, android::print::PrintDocumentAdapter arg1, android::print::PrintAttributes arg2)
	{
		return callObjectMethod(
			"print",
			"(Ljava/lang/String;Landroid/print/PrintDocumentAdapter;Landroid/print/PrintAttributes;)Landroid/print/PrintJob;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::print

