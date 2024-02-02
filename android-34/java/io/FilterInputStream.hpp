#pragma once

#include "../../JByteArray.hpp"
#include "./InputStream.def.hpp"
#include "./FilterInputStream.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint FilterInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	inline void FilterInputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void FilterInputStream::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	inline jboolean FilterInputStream::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	inline jint FilterInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint FilterInputStream::read(JByteArray arg0) const
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	inline jint FilterInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void FilterInputStream::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline jlong FilterInputStream::skip(jlong arg0) const
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
