#include "../../JCharArray.hpp"
#include "../../JBooleanArray.hpp"
#include "./Reader.hpp"
#include "../../JString.hpp"
#include "./BufferedReader.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	BufferedReader::BufferedReader(QAndroidJniObject obj) : java::io::Reader(obj) {}
	
	// Constructors
	BufferedReader::BufferedReader(java::io::Reader arg0)
		: java::io::Reader(
			"java.io.BufferedReader",
			"(Ljava/io/Reader;)V",
			arg0.object()
		) {}
	BufferedReader::BufferedReader(java::io::Reader arg0, jint arg1)
		: java::io::Reader(
			"java.io.BufferedReader",
			"(Ljava/io/Reader;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	void BufferedReader::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	JObject BufferedReader::lines() const
	{
		return callObjectMethod(
			"lines",
			"()Ljava/util/stream/Stream;"
		);
	}
	void BufferedReader::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean BufferedReader::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint BufferedReader::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint BufferedReader::read(JCharArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([CII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	JString BufferedReader::readLine() const
	{
		return callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		);
	}
	jboolean BufferedReader::ready() const
	{
		return callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
	void BufferedReader::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong BufferedReader::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io

