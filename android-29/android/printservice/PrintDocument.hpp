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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrintDocument(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PrintDocument(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject getData();
		QAndroidJniObject getInfo();
	};
} // namespace android::printservice

