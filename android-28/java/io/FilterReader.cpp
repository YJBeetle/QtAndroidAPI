#include "./Reader.hpp"
#include "./FilterReader.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	FilterReader::FilterReader(QAndroidJniObject obj) : java::io::Reader(obj) {}
	
	// Constructors
	
	// Methods
	void FilterReader::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void FilterReader::mark(jint arg0)
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean FilterReader::markSupported()
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint FilterReader::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint FilterReader::read(jcharArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean FilterReader::ready()
	{
		return callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
	void FilterReader::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong FilterReader::skip(jlong arg0)
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io

