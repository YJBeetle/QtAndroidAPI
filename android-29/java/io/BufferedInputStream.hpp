#pragma once

#include "../../JByteArray.hpp"
#include "./InputStream.def.hpp"
#include "./BufferedInputStream.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline BufferedInputStream::BufferedInputStream(java::io::InputStream arg0)
		: java::io::FilterInputStream(
			"java.io.BufferedInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	inline BufferedInputStream::BufferedInputStream(java::io::InputStream arg0, jint arg1)
		: java::io::FilterInputStream(
			"java.io.BufferedInputStream",
			"(Ljava/io/InputStream;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline jint BufferedInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	inline void BufferedInputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void BufferedInputStream::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	inline jboolean BufferedInputStream::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	inline jint BufferedInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint BufferedInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void BufferedInputStream::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline jlong BufferedInputStream::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io

// Base class headers
#include "./InputStream.hpp"
#include "./FilterInputStream.hpp"

