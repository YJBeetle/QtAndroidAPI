#pragma once

#include "../../JByteArray.hpp"
#include "./InputStream.def.hpp"
#include "./OutputStream.def.hpp"
#include "./PushbackInputStream.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline PushbackInputStream::PushbackInputStream(java::io::InputStream arg0)
		: java::io::FilterInputStream(
			"java.io.PushbackInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	inline PushbackInputStream::PushbackInputStream(java::io::InputStream arg0, jint arg1)
		: java::io::FilterInputStream(
			"java.io.PushbackInputStream",
			"(Ljava/io/InputStream;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline jint PushbackInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	inline void PushbackInputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void PushbackInputStream::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	inline jboolean PushbackInputStream::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	inline jint PushbackInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint PushbackInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void PushbackInputStream::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline jlong PushbackInputStream::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	inline jlong PushbackInputStream::transferTo(java::io::OutputStream arg0) const
	{
		return callMethod<jlong>(
			"transferTo",
			"(Ljava/io/OutputStream;)J",
			arg0.object()
		);
	}
	inline void PushbackInputStream::unread(JByteArray arg0) const
	{
		callMethod<void>(
			"unread",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void PushbackInputStream::unread(jint arg0) const
	{
		callMethod<void>(
			"unread",
			"(I)V",
			arg0
		);
	}
	inline void PushbackInputStream::unread(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"unread",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::io

// Base class headers
#include "./InputStream.hpp"
#include "./FilterInputStream.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::io;
#endif
