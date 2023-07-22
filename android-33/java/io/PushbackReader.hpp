#pragma once

#include "../../JCharArray.hpp"
#include "./Reader.def.hpp"
#include "./PushbackReader.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline PushbackReader::PushbackReader(java::io::Reader arg0)
		: java::io::FilterReader(
			"java.io.PushbackReader",
			"(Ljava/io/Reader;)V",
			arg0.object()
		) {}
	inline PushbackReader::PushbackReader(java::io::Reader arg0, jint arg1)
		: java::io::FilterReader(
			"java.io.PushbackReader",
			"(Ljava/io/Reader;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline void PushbackReader::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void PushbackReader::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	inline jboolean PushbackReader::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	inline jint PushbackReader::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint PushbackReader::read(JCharArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([CII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline jboolean PushbackReader::ready() const
	{
		return callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
	inline void PushbackReader::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline jlong PushbackReader::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	inline void PushbackReader::unread(JCharArray arg0) const
	{
		callMethod<void>(
			"unread",
			"([C)V",
			arg0.object<jcharArray>()
		);
	}
	inline void PushbackReader::unread(jint arg0) const
	{
		callMethod<void>(
			"unread",
			"(I)V",
			arg0
		);
	}
	inline void PushbackReader::unread(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"unread",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::io

// Base class headers
#include "./Reader.hpp"
#include "./FilterReader.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::io;
#endif
