#pragma once

#include "../../../JByteArray.hpp"
#include "../../../java/io/FileDescriptor.def.hpp"
#include "../../../JString.hpp"
#include "./BackupDataInput.def.hpp"

namespace android::app::backup
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint BackupDataInput::getDataSize() const
	{
		return callMethod<jint>(
			"getDataSize",
			"()I"
		);
	}
	inline JString BackupDataInput::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
	inline jint BackupDataInput::readEntityData(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"readEntityData",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline jboolean BackupDataInput::readNextHeader() const
	{
		return callMethod<jboolean>(
			"readNextHeader",
			"()Z"
		);
	}
	inline void BackupDataInput::skipEntityData() const
	{
		callMethod<void>(
			"skipEntityData",
			"()V"
		);
	}
} // namespace android::app::backup

// Base class headers

