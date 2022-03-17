#pragma once

#include "../../JCharArray.hpp"
#include "./Reader.def.hpp"
#include "../../JString.hpp"
#include "./LineNumberReader.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline LineNumberReader::LineNumberReader(java::io::Reader arg0)
		: java::io::BufferedReader(
			"java.io.LineNumberReader",
			"(Ljava/io/Reader;)V",
			arg0.object()
		) {}
	inline LineNumberReader::LineNumberReader(java::io::Reader arg0, jint arg1)
		: java::io::BufferedReader(
			"java.io.LineNumberReader",
			"(Ljava/io/Reader;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline jint LineNumberReader::getLineNumber() const
	{
		return callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	inline void LineNumberReader::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	inline jint LineNumberReader::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint LineNumberReader::read(JCharArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([CII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline JString LineNumberReader::readLine() const
	{
		return callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		);
	}
	inline void LineNumberReader::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void LineNumberReader::setLineNumber(jint arg0) const
	{
		callMethod<void>(
			"setLineNumber",
			"(I)V",
			arg0
		);
	}
	inline jlong LineNumberReader::skip(jlong arg0) const
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
#include "./BufferedReader.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::io;
#endif
