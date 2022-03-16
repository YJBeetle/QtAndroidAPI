#pragma once

#include "../../JByteArray.hpp"
#include "./OutputStream.def.hpp"
#include "./ByteArrayInputStream.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline ByteArrayInputStream::ByteArrayInputStream(JByteArray arg0)
		: java::io::InputStream(
			"java.io.ByteArrayInputStream",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	inline ByteArrayInputStream::ByteArrayInputStream(JByteArray arg0, jint arg1, jint arg2)
		: java::io::InputStream(
			"java.io.ByteArrayInputStream",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		) {}
	
	// Methods
	inline jint ByteArrayInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	inline void ByteArrayInputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void ByteArrayInputStream::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	inline jboolean ByteArrayInputStream::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	inline jint ByteArrayInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint ByteArrayInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline JByteArray ByteArrayInputStream::readAllBytes() const
	{
		return callObjectMethod(
			"readAllBytes",
			"()[B"
		);
	}
	inline jint ByteArrayInputStream::readNBytes(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"readNBytes",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void ByteArrayInputStream::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline jlong ByteArrayInputStream::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	inline jlong ByteArrayInputStream::transferTo(java::io::OutputStream arg0) const
	{
		return callMethod<jlong>(
			"transferTo",
			"(Ljava/io/OutputStream;)J",
			arg0.object()
		);
	}
} // namespace java::io

// Base class headers
#include "./InputStream.hpp"

