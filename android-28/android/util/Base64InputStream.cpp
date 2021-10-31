#include "../../java/io/InputStream.hpp"
#include "./Base64InputStream.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	Base64InputStream::Base64InputStream(QJniObject obj) : java::io::FilterInputStream(obj) {}
	
	// Constructors
	Base64InputStream::Base64InputStream(java::io::InputStream arg0, jint arg1)
		: java::io::FilterInputStream(
			"android.util.Base64InputStream",
			"(Ljava/io/InputStream;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jint Base64InputStream::available()
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	void Base64InputStream::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void Base64InputStream::mark(jint arg0)
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean Base64InputStream::markSupported()
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint Base64InputStream::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint Base64InputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	void Base64InputStream::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong Base64InputStream::skip(jlong arg0)
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace android::util

