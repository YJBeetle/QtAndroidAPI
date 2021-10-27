#include "../../../java/io/FileDescriptor.hpp"
#include "./BackupDataInput.hpp"

namespace android::app::backup
{
	// Fields
	
	BackupDataInput::BackupDataInput(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint BackupDataInput::getDataSize()
	{
		return __thiz.callMethod<jint>(
			"getDataSize",
			"()I"
		);
	}
	jstring BackupDataInput::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint BackupDataInput::readEntityData(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"readEntityData",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean BackupDataInput::readNextHeader()
	{
		return __thiz.callMethod<jboolean>(
			"readNextHeader",
			"()Z"
		);
	}
	void BackupDataInput::skipEntityData()
	{
		__thiz.callMethod<void>(
			"skipEntityData",
			"()V"
		);
	}
} // namespace android::app::backup

