#include "../../JByteArray.hpp"
#include "../../java/io/InputStream.hpp"
#include "./Base64InputStream.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	Base64InputStream::Base64InputStream(java::io::InputStream arg0, jint arg1)
		: java::io::FilterInputStream(
			"android.util.Base64InputStream",
			"(Ljava/io/InputStream;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jint Base64InputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	void Base64InputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void Base64InputStream::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean Base64InputStream::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint Base64InputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint Base64InputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void Base64InputStream::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong Base64InputStream::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace android::util

