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
	
	// QAndroidJniObject forward
	Charset::Charset(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass Charset::availableCharsets()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.charset.Charset",
			"availableCharsets",
			"()Ljava/util/SortedMap;"
		);
	}
	java::nio::charset::Charset Charset::defaultCharset()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.charset.Charset",
			"defaultCharset",
			"()Ljava/nio/charset/Charset;"
		);
	}
	java::nio::charset::Charset Charset::forName(jstring arg0)
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
	__JniBaseClass Charset::aliases()
	{
		return callObjectMethod(
			"aliases",
			"()Ljava/util/Set;"
		);
	}
	jboolean Charset::canEncode()
	{
		return callMethod<jboolean>(
			"canEncode",
			"()Z"
		);
	}
	jint Charset::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint Charset::compareTo(java::nio::charset::Charset arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/nio/charset/Charset;)I",
			arg0.object()
		);
	}
	jboolean Charset::contains(java::nio::charset::Charset arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/nio/charset/Charset;)Z",
			arg0.object()
		);
	}
	java::nio::CharBuffer Charset::decode(java::nio::ByteBuffer arg0)
	{
		return callObjectMethod(
			"decode",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/CharBuffer;",
			arg0.object()
		);
	}
	jstring Charset::displayName()
	{
		return callObjectMethod(
			"displayName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Charset::displayName(java::util::Locale arg0)
	{
		return callObjectMethod(
			"displayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	java::nio::ByteBuffer Charset::encode(jstring arg0)
	{
		return callObjectMethod(
			"encode",
			"(Ljava/lang/String;)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	java::nio::ByteBuffer Charset::encode(java::nio::CharBuffer arg0)
	{
		return callObjectMethod(
			"encode",
			"(Ljava/nio/CharBuffer;)Ljava/nio/ByteBuffer;",
			arg0.object()
		);
	}
	jboolean Charset::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Charset::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Charset::isRegistered()
	{
		return callMethod<jboolean>(
			"isRegistered",
			"()Z"
		);
	}
	jstring Charset::name()
	{
		return callObjectMethod(
			"name",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::nio::charset::CharsetDecoder Charset::newDecoder()
	{
		return callObjectMethod(
			"newDecoder",
			"()Ljava/nio/charset/CharsetDecoder;"
		);
	}
	java::nio::charset::CharsetEncoder Charset::newEncoder()
	{
		return callObjectMethod(
			"newEncoder",
			"()Ljava/nio/charset/CharsetEncoder;"
		);
	}
	jstring Charset::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio::charset

