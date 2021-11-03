#include "./BackupDataInput.hpp"

namespace android::app::backup
{
	// Fields
	
	// QAndroidJniObject forward
	BackupDataInput::BackupDataInput(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint BackupDataInput::getDataSize()
	{
		return callMethod<jint>(
			"getDataSize",
			"()I"
		);
	}
	jstring BackupDataInput::getKey()
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint BackupDataInput::readEntityData(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"readEntityData",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean BackupDataInput::readNextHeader()
	{
		return callMethod<jboolean>(
			"readNextHeader",
			"()Z"
		);
	}
	void BackupDataInput::skipEntityData()
	{
		callMethod<void>(
			"skipEntityData",
			"()V"
		);
	}
} // namespace android::app::backup

