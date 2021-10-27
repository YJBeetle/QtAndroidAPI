#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::io
{
	class FileDescriptor;
}

namespace android::app::backup
{
	class BackupDataOutput : public __JniBaseClass
	{
	public:
		// Fields
		
		BackupDataOutput(QAndroidJniObject obj);
		// Constructors
		BackupDataOutput() = default;
		
		// Methods
		jlong getQuota();
		jint getTransportFlags();
		jint writeEntityData(jbyteArray arg0, jint arg1);
		jint writeEntityHeader(jstring arg0, jint arg1);
		jint writeEntityHeader(const QString &arg0, jint arg1);
	};
} // namespace android::app::backup

