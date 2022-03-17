#pragma once

#include "../../../JObjectArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../lang/ThreadLocal.def.hpp"
#include "../ByteBuffer.def.hpp"
#include "../CharBuffer.def.hpp"
#include "./CharsetDecoder.def.hpp"
#include "./CharsetEncoder.def.hpp"
#include "./spi/CharsetProvider.def.hpp"
#include "../../util/Locale.def.hpp"
#include "./Charset.def.hpp"

namespace java::nio::charset
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject Charset::availableCharsets()
	{
		return callStaticObjectMethod(
			"java.nio.charset.Charset",
			"availableCharsets",
			"()Ljava/util/SortedMap;"
		);
	}
	inline java::nio::charset::Charset Charset::defaultCharset()
	{
		return callStaticObjectMethod(
			"java.nio.charset.Charset",
			"defaultCharset",
			"()Ljava/nio/charset/Charset;"
		);
	}
	inline java::nio::charset::Charset Charset::forName(JString arg0)
	{
		return callStaticObjectMethod(
			"java.nio.charset.Charset",
			"forName",
			"(Ljava/lang/String;)Ljava/nio/charset/Charset;",
			arg0.object<jstring>()
		);
	}
	inline jboolean Charset::isSupported(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"java.nio.charset.Charset",
			"isSupported",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline JObject Charset::aliases() const
	{
		return callObjectMethod(
			"aliases",
			"()Ljava/util/Set;"
		);
	}
	inline jboolean Charset::canEncode() const
	{
		return callMethod<jboolean>(
			"canEncode",
			"()Z"
		);
	}
	inline jint Charset::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint Charset::compareTo(java::nio::charset::Charset arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/nio/charset/Charset;)I",
			arg0.object()
		);
	}
	inline jboolean Charset::contains(java::nio::charset::Charset arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/nio/charset/Charset;)Z",
			arg0.object()
		);
	}
	inline java::nio::CharBuffer Charset::decode(java::nio::ByteBuffer arg0) const
	{
		return callObjectMethod(
			"decode",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/CharBuffer;",
			arg0.object()
		);
	}
	inline JString Charset::displayName() const
	{
		return callObjectMethod(
			"displayName",
			"()Ljava/lang/String;"
		);
	}
	inline JString Charset::displayName(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"displayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline java::nio::ByteBuffer Charset::encode(JString arg0) const
	{
		return callObjectMethod(
			"encode",
			"(Ljava/lang/String;)Ljava/nio/ByteBuffer;",
			arg0.object<jstring>()
		);
	}
	inline java::nio::ByteBuffer Charset::encode(java::nio::CharBuffer arg0) const
	{
		return callObjectMethod(
			"encode",
			"(Ljava/nio/CharBuffer;)Ljava/nio/ByteBuffer;",
			arg0.object()
		);
	}
	inline jboolean Charset::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint Charset::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean Charset::isRegistered() const
	{
		return callMethod<jboolean>(
			"isRegistered",
			"()Z"
		);
	}
	inline JString Charset::name() const
	{
		return callObjectMethod(
			"name",
			"()Ljava/lang/String;"
		);
	}
	inline java::nio::charset::CharsetDecoder Charset::newDecoder() const
	{
		return callObjectMethod(
			"newDecoder",
			"()Ljava/nio/charset/CharsetDecoder;"
		);
	}
	inline java::nio::charset::CharsetEncoder Charset::newEncoder() const
	{
		return callObjectMethod(
			"newEncoder",
			"()Ljava/nio/charset/CharsetEncoder;"
		);
	}
	inline JString Charset::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::charset

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::charset;
#endif
