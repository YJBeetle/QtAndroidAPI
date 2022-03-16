#include "../../JCharArray.hpp"
#include "./Reader.hpp"
#include "./FilterReader.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	
	// Methods
	void FilterReader::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void FilterReader::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean FilterReader::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint FilterReader::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint FilterReader::read(JCharArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([CII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	jboolean FilterReader::ready() const
	{
		return callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
	void FilterReader::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong FilterReader::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io

