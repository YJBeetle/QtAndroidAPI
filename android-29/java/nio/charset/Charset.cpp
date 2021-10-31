#include "../../lang/ThreadLocal.hpp"
#include "../ByteBuffer.hpp"
#include "../CharBuffer.hpp"
#include "./CharsetDecoder.hpp"
#include "./CharsetEncoder.hpp"
#include "./spi/CharsetProvider.hpp"
#include "../../util/Locale.hpp"
#include "./Charset.hpp"

namespace java::nio::charset
{
	// Fields
	
	Charset::Charset(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Charset::availableCharsets()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.charset.Charset",
			"availableCharsets",
			"()Ljava/util/SortedMap;"
		);
	}
	QAndroidJniObject Charset::defaultCharset()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.charset.Charset",
			"defaultCharset",
			"()Ljava/nio/charset/Charset;"
		);
	}
	QAndroidJniObject Charset::forName(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.charset.Charset",
			"forName",
			"(Ljava/lang/String;)Ljava/nio/charset/Charset;",
			arg0
		);
	}
	jboolean Charset::isSupported(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.nio.charset.Charset",
			"isSupported",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	QAndroidJniObject Charset::aliases()
	{
		return __thiz.callObjectMethod(
			"aliases",
			"()Ljava/util/Set;"
		);
	}
	jboolean Charset::canEncode()
	{
		return __thiz.callMethod<jboolean>(
			"canEncode",
			"()Z"
		);
	}
	jint Charset::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint Charset::compareTo(java::nio::charset::Charset arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/nio/charset/Charset;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean Charset::contains(java::nio::charset::Charset arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/nio/charset/Charset;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Charset::decode(java::nio::ByteBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"decode",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/CharBuffer;",
			arg0.__jniObject().object()
		);
	}
	jstring Charset::displayName()
	{
		return __thiz.callObjectMethod(
			"displayName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Charset::displayName(java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"displayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject Charset::encode(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"encode",
			"(Ljava/lang/String;)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	QAndroidJniObject Charset::encode(java::nio::CharBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"encode",
			"(Ljava/nio/CharBuffer;)Ljava/nio/ByteBuffer;",
			arg0.__jniObject().object()
		);
	}
	jboolean Charset::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Charset::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Charset::isRegistered()
	{
		return __thiz.callMethod<jboolean>(
			"isRegistered",
			"()Z"
		);
	}
	jstring Charset::name()
	{
		return __thiz.callObjectMethod(
			"name",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Charset::newDecoder()
	{
		return __thiz.callObjectMethod(
			"newDecoder",
			"()Ljava/nio/charset/CharsetDecoder;"
		);
	}
	QAndroidJniObject Charset::newEncoder()
	{
		return __thiz.callObjectMethod(
			"newEncoder",
			"()Ljava/nio/charset/CharsetEncoder;"
		);
	}
	jstring Charset::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio::charset

