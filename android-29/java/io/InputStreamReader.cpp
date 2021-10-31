#include "./InputStream.hpp"
#include "../nio/charset/Charset.hpp"
#include "../nio/charset/CharsetDecoder.hpp"
#include "./InputStreamReader.hpp"

namespace java::io
{
	// Fields
	
	InputStreamReader::InputStreamReader(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InputStreamReader::InputStreamReader(java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.InputStreamReader",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	InputStreamReader::InputStreamReader(java::io::InputStream arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.InputStreamReader",
			"(Ljava/io/InputStream;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	InputStreamReader::InputStreamReader(java::io::InputStream arg0, java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.InputStreamReader",
			"(Ljava/io/InputStream;Ljava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	InputStreamReader::InputStreamReader(java::io::InputStream arg0, java::nio::charset::CharsetDecoder arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.InputStreamReader",
			"(Ljava/io/InputStream;Ljava/nio/charset/CharsetDecoder;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void InputStreamReader::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jstring InputStreamReader::getEncoding()
	{
		return __thiz.callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint InputStreamReader::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint InputStreamReader::read(jcharArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean InputStreamReader::ready()
	{
		return __thiz.callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
} // namespace java::io

