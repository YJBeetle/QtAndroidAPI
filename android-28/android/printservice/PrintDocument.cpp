#include "../os/ParcelFileDescriptor.hpp"
#include "../print/PrintDocumentInfo.hpp"
#include "./PrintDocument.hpp"

namespace android::printservice
{
	// Fields
	
	// QJniObject forward
	PrintDocument::PrintDocument(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::os::ParcelFileDescriptor PrintDocument::getData() const
	{
		return callObjectMethod(
			"getData",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	android::print::PrintDocumentInfo PrintDocument::getInfo() const
	{
		return callObjectMethod(
			"getInfo",
			"()Landroid/print/PrintDocumentInfo;"
		);
	}
} // namespace android::printservice

