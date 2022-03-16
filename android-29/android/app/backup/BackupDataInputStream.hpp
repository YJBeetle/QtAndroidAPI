#pragma once

#include "../../../JByteArray.hpp"
#include "./BackupDataInput.def.hpp"
#include "../../../JString.hpp"
#include "./BackupDataInputStream.def.hpp"

namespace android::app::backup
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString BackupDataInputStream::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
	inline jint BackupDataInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint BackupDataInputStream::read(JByteArray arg0) const
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	inline jint BackupDataInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline jint BackupDataInputStream::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
} // namespace android::app::backup

// Base class headers
#include "../../../java/io/InputStream.hpp"

