#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/io/InputStream.hpp"
#include "../../../java/io/FileInputStream.hpp"
#include "../../os/ParcelFileDescriptor_AutoCloseInputStream.hpp"

namespace android::content::res
{
	class AssetFileDescriptor;
}

namespace android::content::res
{
	class AssetFileDescriptor_AutoCloseInputStream : public android::os::ParcelFileDescriptor_AutoCloseInputStream
	{
	public:
		// Fields
		
		AssetFileDescriptor_AutoCloseInputStream(QAndroidJniObject obj);
		// Constructors
		AssetFileDescriptor_AutoCloseInputStream(android::content::res::AssetFileDescriptor &arg0);
		AssetFileDescriptor_AutoCloseInputStream() = default;
		
		// Methods
		jint available();
		void mark(jint arg0);
		jboolean markSupported();
		jint read();
		jint read(jbyteArray arg0);
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		void reset();
		jlong skip(jlong arg0);
	};
} // namespace android::content::res

