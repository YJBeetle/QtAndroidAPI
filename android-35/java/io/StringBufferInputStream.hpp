#pragma once

#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "./StringBufferInputStream.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline StringBufferInputStream::StringBufferInputStream(JString arg0)
		: java::io::InputStream(
			"java.io.StringBufferInputStream",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jint StringBufferInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	inline jint StringBufferInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint StringBufferInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void StringBufferInputStream::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline jlong StringBufferInputStream::skip(jlong arg0) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::io;
#endif
