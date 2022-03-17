#pragma once

#include "../../JCharArray.hpp"
#include "../../JBooleanArray.hpp"
#include "./Reader.def.hpp"
#include "../../JString.hpp"
#include "./BufferedReader.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline BufferedReader::BufferedReader(java::io::Reader arg0)
		: java::io::Reader(
			"java.io.BufferedReader",
			"(Ljava/io/Reader;)V",
			arg0.object()
		) {}
	inline BufferedReader::BufferedReader(java::io::Reader arg0, jint arg1)
		: java::io::Reader(
			"java.io.BufferedReader",
			"(Ljava/io/Reader;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline void BufferedReader::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline JObject BufferedReader::lines() const
	{
		return callObjectMethod(
			"lines",
			"()Ljava/util/stream/Stream;"
		);
	}
	inline void BufferedReader::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	inline jboolean BufferedReader::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	inline jint BufferedReader::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint BufferedReader::read(JCharArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([CII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline JString BufferedReader::readLine() const
	{
		return callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean BufferedReader::ready() const
	{
		return callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
	inline void BufferedReader::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline jlong BufferedReader::skip(jlong arg0) const
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
