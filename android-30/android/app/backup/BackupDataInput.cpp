#include "../../../JByteArray.hpp"
#include "../../../JString.hpp"
#include "./BackupDataInput.hpp"

namespace android::app::backup
{
	// Fields
	
	// Constructors
	
	// Methods
	jint BackupDataInput::getDataSize() const
	{
		return callMethod<jint>(
			"getDataSize",
			"()I"
		);
	}
	JString BackupDataInput::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
	jint BackupDataInput::readEntityData(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"readEntityData",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	jboolean BackupDataInput::readNextHeader() const
	{
		return callMethod<jboolean>(
			"readNextHeader",
			"()Z"
		);
	}
	void BackupDataInput::skipEntityData() const
	{
		callMethod<void>(
			"skipEntityData",
			"()V"
		);
	}
} // namespace android::app::backup

