#pragma once

#include "../../JByteArray.hpp"
#include "./PipedOutputStream.def.hpp"
#include "../lang/Thread.def.hpp"
#include "./PipedInputStream.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline PipedInputStream::PipedInputStream()
		: java::io::InputStream(
			"java.io.PipedInputStream",
			"()V"
		) {}
	inline PipedInputStream::PipedInputStream(jint arg0)
		: java::io::InputStream(
			"java.io.PipedInputStream",
			"(I)V",
			arg0
		) {}
	inline PipedInputStream::PipedInputStream(java::io::PipedOutputStream arg0)
		: java::io::InputStream(
			"java.io.PipedInputStream",
			"(Ljava/io/PipedOutputStream;)V",
			arg0.object()
		) {}
	inline PipedInputStream::PipedInputStream(java::io::PipedOutputStream arg0, jint arg1)
		: java::io::InputStream(
			"java.io.PipedInputStream",
			"(Ljava/io/PipedOutputStream;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline jint PipedInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	inline void PipedInputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void PipedInputStream::connect(java::io::PipedOutputStream arg0) const
	{
		callMethod<void>(
			"connect",
			"(Ljava/io/PipedOutputStream;)V",
			arg0.object()
		);
	}
	inline jint PipedInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint PipedInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::io

// Base class headers
#include "./InputStream.hpp"

