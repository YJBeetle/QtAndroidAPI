#pragma once

#include "../../JByteArray.hpp"
#include "./OutputStream.def.hpp"
#include "../../JString.hpp"
#include "../nio/charset/Charset.def.hpp"
#include "./ByteArrayOutputStream.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline ByteArrayOutputStream::ByteArrayOutputStream()
		: java::io::OutputStream(
			"java.io.ByteArrayOutputStream",
			"()V"
		) {}
	inline ByteArrayOutputStream::ByteArrayOutputStream(jint arg0)
		: java::io::OutputStream(
			"java.io.ByteArrayOutputStream",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline void ByteArrayOutputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void ByteArrayOutputStream::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline jint ByteArrayOutputStream::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JByteArray ByteArrayOutputStream::toByteArray() const
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		);
	}
	inline JString ByteArrayOutputStream::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline JString ByteArrayOutputStream::toString(jint arg0) const
	{
		return callObjectMethod(
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString ByteArrayOutputStream::toString(JString arg0) const
	{
		return callObjectMethod(
			"toString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString ByteArrayOutputStream::toString(java::nio::charset::Charset arg0) const
	{
		return callObjectMethod(
			"toString",
			"(Ljava/nio/charset/Charset;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline void ByteArrayOutputStream::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	inline void ByteArrayOutputStream::write(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void ByteArrayOutputStream::writeBytes(JByteArray arg0) const
	{
		callMethod<void>(
			"writeBytes",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void ByteArrayOutputStream::writeTo(java::io::OutputStream arg0) const
	{
		callMethod<void>(
			"writeTo",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
} // namespace java::io

// Base class headers
#include "./OutputStream.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::io;
#endif
