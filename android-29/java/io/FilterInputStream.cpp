#include "../../JByteArray.hpp"
#include "./InputStream.hpp"
#include "./FilterInputStream.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	
	// Methods
	jint FilterInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	void FilterInputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void FilterInputStream::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean FilterInputStream::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint FilterInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint FilterInputStream::read(JByteArray arg0) const
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	jint FilterInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void FilterInputStream::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong FilterInputStream::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io

