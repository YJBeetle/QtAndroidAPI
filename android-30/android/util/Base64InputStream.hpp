#pragma once

#include "../../JByteArray.hpp"
#include "../../java/io/InputStream.def.hpp"
#include "./Base64InputStream.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline Base64InputStream::Base64InputStream(java::io::InputStream arg0, jint arg1)
		: java::io::FilterInputStream(
			"android.util.Base64InputStream",
			"(Ljava/io/InputStream;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline jint Base64InputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	inline void Base64InputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void Base64InputStream::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	inline jboolean Base64InputStream::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	inline jint Base64InputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint Base64InputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void Base64InputStream::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline jlong Base64InputStream::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace android::util

// Base class headers
#include "../../java/io/InputStream.hpp"
#include "../../java/io/FilterInputStream.hpp"

