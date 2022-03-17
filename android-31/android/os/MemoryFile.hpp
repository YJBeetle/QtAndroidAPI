#pragma once

#include "../../JByteArray.hpp"
#include "../../java/io/InputStream.def.hpp"
#include "../../java/io/OutputStream.def.hpp"
#include "../../JString.hpp"
#include "./MemoryFile.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline MemoryFile::MemoryFile(JString arg0, jint arg1)
		: JObject(
			"android.os.MemoryFile",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	inline jboolean MemoryFile::allowPurging(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"allowPurging",
			"(Z)Z",
			arg0
		);
	}
	inline void MemoryFile::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline java::io::InputStream MemoryFile::getInputStream() const
	{
		return callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	inline java::io::OutputStream MemoryFile::getOutputStream() const
	{
		return callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	inline jboolean MemoryFile::isPurgingAllowed() const
	{
		return callMethod<jboolean>(
			"isPurgingAllowed",
			"()Z"
		);
	}
	inline jint MemoryFile::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	inline jint MemoryFile::readBytes(JByteArray arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callMethod<jint>(
			"readBytes",
			"([BIII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline void MemoryFile::writeBytes(JByteArray arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"writeBytes",
			"([BIII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::os

// Base class headers

