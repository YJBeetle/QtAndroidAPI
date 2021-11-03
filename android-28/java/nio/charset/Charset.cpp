#include "../../../JObjectArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
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
	Charset::Charset(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject Charset::availableCharsets()
	{
		return callStaticObjectMethod(
			"java.nio.charset.Charset",
			"availableCharsets",
			"()Ljava/util/SortedMap;"
		);
	}
	java::nio::charset::Charset Charset::defaultCharset()
	{
		return callStaticObjectMethod(
			"java.nio.charset.Charset",
			"defaultCharset",
			"()Ljava/nio/charset/Charset;"
		);
	}
	java::nio::charset::Charset Charset::forName(JString arg0)
	{
		return callStaticObjectMethod(
			"java.nio.charset.Charset",
			"forName",
			"(Ljava/lang/String;)Ljava/nio/charset/Charset;",
			arg0.object<jstring>()
		);
	}
	jboolean Charset::isSupported(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"java.nio.charset.Charset",
			"isSupported",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	JObject Charset::aliases() const
	{
		return callObjectMethod(
			"aliases",
			"()Ljava/util/Set;"
		);
	}
	jboolean Charset::canEncode() const
	{
		return callMethod<jboolean>(
			"canEncode",
			"()Z"
		);
	}
	jint Charset::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint Charset::compareTo(java::nio::charset::Charset arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/nio/charset/Charset;)I",
			arg0.object()
		);
	}
	jboolean Charset::contains(java::nio::charset::Charset arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/nio/charset/Charset;)Z",
			arg0.object()
		);
	}
	java::nio::CharBuffer Charset::decode(java::nio::ByteBuffer arg0) const
	{
		return callObjectMethod(
			"decode",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/CharBuffer;",
			arg0.object()
		);
	}
	JString Charset::displayName() const
	{
		return callObjectMethod(
			"displayName",
			"()Ljava/lang/String;"
		);
	}
	JString Charset::displayName(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"displayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	java::nio::ByteBuffer Charset::encode(JString arg0) const
	{
		return callObjectMethod(
			"encode",
			"(Ljava/lang/String;)Ljava/nio/ByteBuffer;",
			arg0.object<jstring>()
		);
	}
	java::nio::ByteBuffer Charset::encode(java::nio::CharBuffer arg0) const
	{
		return callObjectMethod(
			"encode",
			"(Ljava/nio/CharBuffer;)Ljava/nio/ByteBuffer;",
			arg0.object()
		);
	}
	jboolean Charset::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint Charset::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Charset::isRegistered() const
	{
		return callMethod<jboolean>(
			"isRegistered",
			"()Z"
		);
	}
	JString Charset::name() const
	{
		return callObjectMethod(
			"name",
			"()Ljava/lang/String;"
		);
	}
	java::nio::charset::CharsetDecoder Charset::newDecoder() const
	{
		return callObjectMethod(
			"newDecoder",
			"()Ljava/nio/charset/CharsetDecoder;"
		);
	}
	java::nio::charset::CharsetEncoder Charset::newEncoder() const
	{
		return callObjectMethod(
			"newEncoder",
			"()Ljava/nio/charset/CharsetEncoder;"
		);
	}
	JString Charset::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::charset

