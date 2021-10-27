#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/io/OutputStream.hpp"
#include "../../java/io/FileOutputStream.hpp"

namespace android::os
{
	class ParcelFileDescriptor;
}

namespace android::os
{
	class ParcelFileDescriptor_AutoCloseOutputStream : public java::io::FileOutputStream
	{
	public:
		// Fields
		
		ParcelFileDescriptor_AutoCloseOutputStream(QAndroidJniObject obj);
		// Constructors
		ParcelFileDescriptor_AutoCloseOutputStream(android::os::ParcelFileDescriptor &arg0);
		ParcelFileDescriptor_AutoCloseOutputStream() = default;
		
		// Methods
		void close();
	};
} // namespace android::os

