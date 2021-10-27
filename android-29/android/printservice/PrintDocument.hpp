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
		
		PrintDocument(QAndroidJniObject obj);
		// Constructors
		PrintDocument() = default;
		
		// Methods
		QAndroidJniObject getData();
		QAndroidJniObject getInfo();
	};
} // namespace android::printservice

