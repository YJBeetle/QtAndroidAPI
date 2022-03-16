#pragma once

#include "../../JCharArray.hpp"
#include "./Writer.def.hpp"
#include "../../JString.hpp"
#include "./BufferedWriter.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline BufferedWriter::BufferedWriter(java::io::Writer arg0)
		: java::io::Writer(
			"java.io.BufferedWriter",
			"(Ljava/io/Writer;)V",
			arg0.object()
		) {}
	inline BufferedWriter::BufferedWriter(java::io::Writer arg0, jint arg1)
		: java::io::Writer(
			"java.io.BufferedWriter",
			"(Ljava/io/Writer;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline void BufferedWriter::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void BufferedWriter::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline void BufferedWriter::newLine() const
	{
		callMethod<void>(
			"newLine",
			"()V"
		);
	}
	inline void BufferedWriter::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	inline void BufferedWriter::write(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline void BufferedWriter::write(JString arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
} // namespace java::io

// Base class headers
#include "./Writer.hpp"

