#pragma once

#include "../../JByteArray.hpp"
#include "./OutputStream.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline OutputStream::OutputStream()
		: JObject(
			"java.io.OutputStream",
			"()V"
		) {}
	
	// Methods
	inline java::io::OutputStream OutputStream::nullOutputStream()
	{
		return callStaticObjectMethod(
			"java.io.OutputStream",
			"nullOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	inline void OutputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void OutputStream::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline void OutputStream::write(JByteArray arg0) const
	{
		callMethod<void>(
			"write",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void OutputStream::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	inline void OutputStream::write(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::io

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::io;
#endif
