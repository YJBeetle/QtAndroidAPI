#pragma once

#include "../../JByteArray.hpp"
#include "./InputStream.def.hpp"
#include "./SequenceInputStream.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline SequenceInputStream::SequenceInputStream(JObject arg0)
		: java::io::InputStream(
			"java.io.SequenceInputStream",
			"(Ljava/util/Enumeration;)V",
			arg0.object()
		) {}
	inline SequenceInputStream::SequenceInputStream(java::io::InputStream arg0, java::io::InputStream arg1)
		: java::io::InputStream(
			"java.io.SequenceInputStream",
			"(Ljava/io/InputStream;Ljava/io/InputStream;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jint SequenceInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	inline void SequenceInputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jint SequenceInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint SequenceInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::io

// Base class headers
#include "./InputStream.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::io;
#endif
