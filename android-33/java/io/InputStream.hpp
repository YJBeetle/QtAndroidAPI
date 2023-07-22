#pragma once

#include "../../JByteArray.hpp"
#include "./OutputStream.def.hpp"
#include "./InputStream.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline InputStream::InputStream()
		: JObject(
			"java.io.InputStream",
			"()V"
		) {}
	
	// Methods
	inline java::io::InputStream InputStream::nullInputStream()
	{
		return callStaticObjectMethod(
			"java.io.InputStream",
			"nullInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	inline jint InputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	inline void InputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void InputStream::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	inline jboolean InputStream::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	inline jint InputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint InputStream::read(JByteArray arg0) const
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	inline jint InputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline JByteArray InputStream::readAllBytes() const
	{
		return callObjectMethod(
			"readAllBytes",
			"()[B"
		);
	}
	inline JByteArray InputStream::readNBytes(jint arg0) const
	{
		return callObjectMethod(
			"readNBytes",
			"(I)[B",
			arg0
		);
	}
	inline jint InputStream::readNBytes(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"readNBytes",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void InputStream::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline jlong InputStream::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	inline void InputStream::skipNBytes(jlong arg0) const
	{
		callMethod<void>(
			"skipNBytes",
			"(J)V",
			arg0
		);
	}
	inline jlong InputStream::transferTo(java::io::OutputStream arg0) const
	{
		return callMethod<jlong>(
			"transferTo",
			"(Ljava/io/OutputStream;)J",
			arg0.object()
		);
	}
} // namespace java::io

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::io;
#endif
