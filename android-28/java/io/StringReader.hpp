#pragma once

#include "../../JCharArray.hpp"
#include "../../JString.hpp"
#include "./StringReader.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline StringReader::StringReader(JString arg0)
		: java::io::Reader(
			"java.io.StringReader",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline void StringReader::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void StringReader::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	inline jboolean StringReader::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	inline jint StringReader::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint StringReader::read(JCharArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([CII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline jboolean StringReader::ready() const
	{
		return callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
	inline void StringReader::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline jlong StringReader::skip(jlong arg0) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::io;
#endif
