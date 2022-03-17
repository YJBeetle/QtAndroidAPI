#pragma once

#include "../../JByteArray.hpp"
#include "./InputStream.def.hpp"
#include "./LineNumberInputStream.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline LineNumberInputStream::LineNumberInputStream(java::io::InputStream arg0)
		: java::io::FilterInputStream(
			"java.io.LineNumberInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint LineNumberInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	inline jint LineNumberInputStream::getLineNumber() const
	{
		return callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	inline void LineNumberInputStream::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	inline jint LineNumberInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint LineNumberInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void LineNumberInputStream::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void LineNumberInputStream::setLineNumber(jint arg0) const
	{
		callMethod<void>(
			"setLineNumber",
			"(I)V",
			arg0
		);
	}
	inline jlong LineNumberInputStream::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io

// Base class headers
#include "./InputStream.hpp"
#include "./FilterInputStream.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::io;
#endif
