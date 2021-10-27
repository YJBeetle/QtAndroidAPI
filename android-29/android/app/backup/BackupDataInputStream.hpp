#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/io/InputStream.hpp"

namespace android::app::backup
{
	class BackupDataInput;
}

namespace android::app::backup
{
	class BackupDataInputStream : public java::io::InputStream
	{
	public:
		// Fields
		
		BackupDataInputStream(QAndroidJniObject obj);
		// Constructors
		BackupDataInputStream() = default;
		
		// Methods
		jstring getKey();
		jint read();
		jint read(jbyteArray arg0);
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jint size();
	};
} // namespace android::app::backup

