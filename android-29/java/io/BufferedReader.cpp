#include "./Reader.hpp"
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
	void BufferedReader::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	JObject BufferedReader::lines()
	{
		return callObjectMethod(
			"lines",
			"()Ljava/util/stream/Stream;"
		);
	}
	void BufferedReader::mark(jint arg0)
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean BufferedReader::markSupported()
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint BufferedReader::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint BufferedReader::read(jcharArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jstring BufferedReader::readLine()
	{
		return callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean BufferedReader::ready()
	{
		return callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
	void BufferedReader::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong BufferedReader::skip(jlong arg0)
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io

