#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class ParcelFileDescriptor;
}
namespace android::print
{
	class PrintDocumentInfo;
}

namespace android::printservice
{
	class PrintDocument : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PrintDocument(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PrintDocument(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::os::ParcelFileDescriptor getData();
		android::print::PrintDocumentInfo getInfo();
	};
} // namespace android::printservice

