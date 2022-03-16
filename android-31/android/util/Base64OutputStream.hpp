#pragma once

#include "../../JByteArray.hpp"
#include "../../java/io/OutputStream.def.hpp"
#include "./Base64OutputStream.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline Base64OutputStream::Base64OutputStream(java::io::OutputStream arg0, jint arg1)
		: java::io::FilterOutputStream(
			"android.util.Base64OutputStream",
			"(Ljava/io/OutputStream;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline void Base64OutputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void Base64OutputStream::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	inline void Base64OutputStream::write(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace android::util

// Base class headers
#include "../../java/io/OutputStream.hpp"
#include "../../java/io/FilterOutputStream.hpp"

