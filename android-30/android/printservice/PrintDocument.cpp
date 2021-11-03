#include "../os/ParcelFileDescriptor.hpp"
#include "../print/PrintDocumentInfo.hpp"
#include "./PrintDocument.hpp"

namespace android::printservice
{
	// Fields
	
	// QAndroidJniObject forward
	PrintDocument::PrintDocument(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::os::ParcelFileDescriptor PrintDocument::getData()
	{
		return callObjectMethod(
			"getData",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	android::print::PrintDocumentInfo PrintDocument::getInfo()
	{
		return callObjectMethod(
			"getInfo",
			"()Landroid/print/PrintDocumentInfo;"
		);
	}
} // namespace android::printservice

