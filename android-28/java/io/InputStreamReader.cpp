#include "./InputStream.hpp"
#include "../nio/charset/Charset.hpp"
#include "../nio/charset/CharsetDecoder.hpp"
#include "./InputStreamReader.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	InputStreamReader::InputStreamReader(QJniObject obj) : java::io::Reader(obj) {}
	
	// Constructors
	InputStreamReader::InputStreamReader(java::io::InputStream arg0)
		: java::io::Reader(
			"java.io.InputStreamReader",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	InputStreamReader::InputStreamReader(java::io::InputStream arg0, jstring arg1)
		: java::io::Reader(
			"java.io.InputStreamReader",
			"(Ljava/io/InputStream;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	InputStreamReader::InputStreamReader(java::io::InputStream arg0, java::nio::charset::Charset arg1)
		: java::io::Reader(
			"java.io.InputStreamReader",
			"(Ljava/io/InputStream;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1.object()
		) {}
	InputStreamReader::InputStreamReader(java::io::InputStream arg0, java::nio::charset::CharsetDecoder arg1)
		: java::io::Reader(
			"java.io.InputStreamReader",
			"(Ljava/io/InputStream;Ljava/nio/charset/CharsetDecoder;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void InputStreamReader::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jstring InputStreamReader::getEncoding()
	{
		return callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint InputStreamReader::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint InputStreamReader::read(jcharArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean InputStreamReader::ready()
	{
		return callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
} // namespace java::io

