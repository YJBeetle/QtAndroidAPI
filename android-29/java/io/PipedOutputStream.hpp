#pragma once

#include "../../JByteArray.hpp"
#include "./PipedInputStream.def.hpp"
#include "./PipedOutputStream.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline PipedOutputStream::PipedOutputStream()
		: java::io::OutputStream(
			"java.io.PipedOutputStream",
			"()V"
		) {}
	inline PipedOutputStream::PipedOutputStream(java::io::PipedInputStream arg0)
		: java::io::OutputStream(
			"java.io.PipedOutputStream",
			"(Ljava/io/PipedInputStream;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void PipedOutputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void PipedOutputStream::connect(java::io::PipedInputStream arg0) const
	{
		callMethod<void>(
			"connect",
			"(Ljava/io/PipedInputStream;)V",
			arg0.object()
		);
	}
	inline void PipedOutputStream::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline void PipedOutputStream::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	inline void PipedOutputStream::write(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::io

// Base class headers
#include "./OutputStream.hpp"

