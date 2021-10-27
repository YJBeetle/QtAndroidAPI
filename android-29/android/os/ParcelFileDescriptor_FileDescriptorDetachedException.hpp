#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/io/IOException.hpp"


namespace android::os
{
	class ParcelFileDescriptor_FileDescriptorDetachedException : public java::io::IOException
	{
	public:
		// Fields
		
		ParcelFileDescriptor_FileDescriptorDetachedException(QAndroidJniObject obj);
		// Constructors
		ParcelFileDescriptor_FileDescriptorDetachedException();
		
		// Methods
	};
} // namespace android::os

