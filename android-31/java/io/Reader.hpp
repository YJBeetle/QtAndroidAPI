#pragma once

#include "../../JCharArray.hpp"
#include "./Writer.def.hpp"
#include "../../JObject.hpp"
#include "../nio/CharBuffer.def.hpp"
#include "./Reader.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::io::Reader Reader::nullReader()
	{
		return callStaticObjectMethod(
			"java.io.Reader",
			"nullReader",
			"()Ljava/io/Reader;"
		);
	}
	inline void Reader::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void Reader::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	inline jboolean Reader::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	inline jint Reader::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint Reader::read(JCharArray arg0) const
	{
		return callMethod<jint>(
			"read",
			"([C)I",
			arg0.object<jcharArray>()
		);
	}
	inline jint Reader::read(java::nio::CharBuffer arg0) const
	{
		return callMethod<jint>(
			"read",
			"(Ljava/nio/CharBuffer;)I",
			arg0.object()
		);
	}
	inline jint Reader::read(JCharArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([CII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline jboolean Reader::ready() const
	{
		return callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
	inline void Reader::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline jlong Reader::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	inline jlong Reader::transferTo(java::io::Writer arg0) const
	{
		return callMethod<jlong>(
			"transferTo",
			"(Ljava/io/Writer;)J",
			arg0.object()
		);
	}
} // namespace java::io

// Base class headers

