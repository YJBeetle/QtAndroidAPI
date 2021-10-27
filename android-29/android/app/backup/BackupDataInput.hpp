#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::io
{
	class FileDescriptor;
}

namespace android::app::backup
{
	class BackupDataInput : public __JniBaseClass
	{
	public:
		// Fields
		
		BackupDataInput(QAndroidJniObject obj);
		// Constructors
		BackupDataInput() = default;
		
		// Methods
		jint getDataSize();
		jstring getKey();
		jint readEntityData(jbyteArray arg0, jint arg1, jint arg2);
		jboolean readNextHeader();
		void skipEntityData();
	};
} // namespace android::app::backup

