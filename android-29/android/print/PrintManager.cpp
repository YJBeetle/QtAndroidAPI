#include "./PrintAttributes.hpp"
#include "./PrintDocumentAdapter.hpp"
#include "./PrintJob.hpp"
#include "./PrintManager.hpp"

namespace android::print
{
	// Fields
	
	PrintManager::PrintManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject PrintManager::getPrintJobs()
	{
		return __thiz.callObjectMethod(
			"getPrintJobs",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject PrintManager::print(jstring arg0, android::print::PrintDocumentAdapter arg1, android::print::PrintAttributes arg2)
	{
		return __thiz.callObjectMethod(
			"print",
			"(Ljava/lang/String;Landroid/print/PrintDocumentAdapter;Landroid/print/PrintAttributes;)Landroid/print/PrintJob;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject PrintManager::print(const QString &arg0, android::print::PrintDocumentAdapter arg1, android::print::PrintAttributes arg2)
	{
		return __thiz.callObjectMethod(
			"print",
			"(Ljava/lang/String;Landroid/print/PrintDocumentAdapter;Landroid/print/PrintAttributes;)Landroid/print/PrintJob;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace android::print

