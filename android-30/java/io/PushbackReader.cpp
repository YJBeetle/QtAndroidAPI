#include "../../JCharArray.hpp"
#include "./Reader.hpp"
#include "./PushbackReader.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	PushbackReader::PushbackReader(QAndroidJniObject obj) : java::io::FilterReader(obj) {}
	
	// Constructors
	PushbackReader::PushbackReader(java::io::Reader arg0)
		: java::io::FilterReader(
			"java.io.PushbackReader",
			"(Ljava/io/Reader;)V",
			arg0.object()
		) {}
	PushbackReader::PushbackReader(java::io::Reader arg0, jint arg1)
		: java::io::FilterReader(
			"java.io.PushbackReader",
			"(Ljava/io/Reader;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	void PushbackReader::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void PushbackReader::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean PushbackReader::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint PushbackReader::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint PushbackReader::read(JCharArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([CII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	jboolean PushbackReader::ready() const
	{
		return callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
	void PushbackReader::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong PushbackReader::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	void PushbackReader::unread(JCharArray arg0) const
	{
		callMethod<void>(
			"unread",
			"([C)V",
			arg0.object<jcharArray>()
		);
	}
	void PushbackReader::unread(jint arg0) const
	{
		callMethod<void>(
			"unread",
			"(I)V",
			arg0
		);
	}
	void PushbackReader::unread(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"unread",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::io

