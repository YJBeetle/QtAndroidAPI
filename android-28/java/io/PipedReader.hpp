#pragma once

#include "../../JCharArray.hpp"
#include "./PipedWriter.def.hpp"
#include "../lang/Thread.def.hpp"
#include "./PipedReader.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline PipedReader::PipedReader()
		: java::io::Reader(
			"java.io.PipedReader",
			"()V"
		) {}
	inline PipedReader::PipedReader(jint arg0)
		: java::io::Reader(
			"java.io.PipedReader",
			"(I)V",
			arg0
		) {}
	inline PipedReader::PipedReader(java::io::PipedWriter arg0)
		: java::io::Reader(
			"java.io.PipedReader",
			"(Ljava/io/PipedWriter;)V",
			arg0.object()
		) {}
	inline PipedReader::PipedReader(java::io::PipedWriter arg0, jint arg1)
		: java::io::Reader(
			"java.io.PipedReader",
			"(Ljava/io/PipedWriter;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline void PipedReader::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void PipedReader::connect(java::io::PipedWriter arg0) const
	{
		callMethod<void>(
			"connect",
			"(Ljava/io/PipedWriter;)V",
			arg0.object()
		);
	}
	inline jint PipedReader::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint PipedReader::read(JCharArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([CII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline jboolean PipedReader::ready() const
	{
		return callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
} // namespace java::io

// Base class headers
#include "./Reader.hpp"

