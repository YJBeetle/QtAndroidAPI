#pragma once

#include "../../JCharArray.hpp"
#include "./PipedReader.def.hpp"
#include "./PipedWriter.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline PipedWriter::PipedWriter()
		: java::io::Writer(
			"java.io.PipedWriter",
			"()V"
		) {}
	inline PipedWriter::PipedWriter(java::io::PipedReader arg0)
		: java::io::Writer(
			"java.io.PipedWriter",
			"(Ljava/io/PipedReader;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void PipedWriter::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void PipedWriter::connect(java::io::PipedReader arg0) const
	{
		callMethod<void>(
			"connect",
			"(Ljava/io/PipedReader;)V",
			arg0.object()
		);
	}
	inline void PipedWriter::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline void PipedWriter::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	inline void PipedWriter::write(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::io

// Base class headers
#include "./Writer.hpp"

