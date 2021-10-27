#include "../os/ParcelFileDescriptor.hpp"
#include "../print/PrintDocumentInfo.hpp"
#include "./PrintDocument.hpp"

namespace android::printservice
{
	// Fields
	
	PrintDocument::PrintDocument(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject PrintDocument::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	QAndroidJniObject PrintDocument::getInfo()
	{
		return __thiz.callObjectMethod(
			"getInfo",
			"()Landroid/print/PrintDocumentInfo;"
		);
	}
} // namespace android::printservice

