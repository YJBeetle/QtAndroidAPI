#pragma once

#include "../os/ParcelFileDescriptor.def.hpp"
#include "../print/PrintDocumentInfo.def.hpp"
#include "./PrintDocument.def.hpp"

namespace android::printservice
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::os::ParcelFileDescriptor PrintDocument::getData() const
	{
		return callObjectMethod(
			"getData",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	inline android::print::PrintDocumentInfo PrintDocument::getInfo() const
	{
		return callObjectMethod(
			"getInfo",
			"()Landroid/print/PrintDocumentInfo;"
		);
	}
} // namespace android::printservice

// Base class headers

