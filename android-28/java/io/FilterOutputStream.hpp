#pragma once

#include "../../JByteArray.hpp"
#include "./OutputStream.def.hpp"
#include "../../JObject.hpp"
#include "./FilterOutputStream.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline FilterOutputStream::FilterOutputStream(java::io::OutputStream arg0)
		: java::io::OutputStream(
			"java.io.FilterOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void FilterOutputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void FilterOutputStream::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline void FilterOutputStream::write(JByteArray arg0) const
	{
		callMethod<void>(
			"write",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void FilterOutputStream::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	inline void FilterOutputStream::write(JByteArray arg0, jint arg1, jint arg2) const
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
#include "./OutputStream.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::io;
#endif
