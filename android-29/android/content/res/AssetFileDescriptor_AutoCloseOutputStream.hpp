#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/io/OutputStream.hpp"
#include "../../../java/io/FileOutputStream.hpp"
#include "../../os/ParcelFileDescriptor_AutoCloseOutputStream.hpp"

namespace android::content::res
{
	class AssetFileDescriptor;
}

namespace android::content::res
{
	class AssetFileDescriptor_AutoCloseOutputStream : public android::os::ParcelFileDescriptor_AutoCloseOutputStream
	{
	public:
		// Fields
		
		AssetFileDescriptor_AutoCloseOutputStream(QAndroidJniObject obj);
		// Constructors
		AssetFileDescriptor_AutoCloseOutputStream(android::content::res::AssetFileDescriptor &arg0);
		AssetFileDescriptor_AutoCloseOutputStream() = default;
		
		// Methods
		void write(jbyteArray arg0);
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace android::content::res

