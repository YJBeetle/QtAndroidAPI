#pragma once

#include "../../JByteArray.hpp"
#include "./OutputStream.def.hpp"
#include "./BufferedOutputStream.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline BufferedOutputStream::BufferedOutputStream(java::io::OutputStream arg0)
		: java::io::FilterOutputStream(
			"java.io.BufferedOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	inline BufferedOutputStream::BufferedOutputStream(java::io::OutputStream arg0, jint arg1)
		: java::io::FilterOutputStream(
			"java.io.BufferedOutputStream",
			"(Ljava/io/OutputStream;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline void BufferedOutputStream::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline void BufferedOutputStream::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	inline void BufferedOutputStream::write(JByteArray arg0, jint arg1, jint arg2) const
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
#include "./FilterOutputStream.hpp"

