#pragma once

#include "../../JCharArray.hpp"
#include "./CharArrayReader.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline CharArrayReader::CharArrayReader(JCharArray arg0)
		: java::io::Reader(
			"java.io.CharArrayReader",
			"([C)V",
			arg0.object<jcharArray>()
		) {}
	inline CharArrayReader::CharArrayReader(JCharArray arg0, jint arg1, jint arg2)
		: java::io::Reader(
			"java.io.CharArrayReader",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		) {}
	
	// Methods
	inline void CharArrayReader::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void CharArrayReader::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	inline jboolean CharArrayReader::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	inline jint CharArrayReader::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint CharArrayReader::read(JCharArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([CII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline jboolean CharArrayReader::ready() const
	{
		return callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
	inline void CharArrayReader::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline jlong CharArrayReader::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io

// Base class headers
#include "./Reader.hpp"

