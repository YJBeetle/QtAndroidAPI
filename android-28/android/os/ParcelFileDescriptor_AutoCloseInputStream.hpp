#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../java/io/FileInputStream.hpp"

namespace android::os
{
	class ParcelFileDescriptor;
}

namespace android::os
{
	class ParcelFileDescriptor_AutoCloseInputStream : public java::io::FileInputStream
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ParcelFileDescriptor_AutoCloseInputStream(const char *className, const char *sig, Ts...agv) : java::io::FileInputStream(className, sig, std::forward<Ts>(agv)...) {}
		ParcelFileDescriptor_AutoCloseInputStream(QAndroidJniObject obj);
		
		// Constructors
		ParcelFileDescriptor_AutoCloseInputStream(android::os::ParcelFileDescriptor arg0);
		
		// Methods
		void close();
		jint read();
		jint read(jbyteArray arg0);
		jint read(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace android::os

