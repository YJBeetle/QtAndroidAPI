#pragma once

#include "../../../java/io/InputStream.def.hpp"
#include "../../../java/io/Reader.def.hpp"
#include "../../../JString.hpp"
#include "./InputSource.def.hpp"

namespace org::xml::sax
{
	// Fields
	
	// Constructors
	inline InputSource::InputSource()
		: JObject(
			"org.xml.sax.InputSource",
			"()V"
		) {}
	inline InputSource::InputSource(java::io::InputStream arg0)
		: JObject(
			"org.xml.sax.InputSource",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	inline InputSource::InputSource(java::io::Reader arg0)
		: JObject(
			"org.xml.sax.InputSource",
			"(Ljava/io/Reader;)V",
			arg0.object()
		) {}
	inline InputSource::InputSource(JString arg0)
		: JObject(
			"org.xml.sax.InputSource",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline java::io::InputStream InputSource::getByteStream() const
	{
		return callObjectMethod(
			"getByteStream",
			"()Ljava/io/InputStream;"
		);
	}
	inline java::io::Reader InputSource::getCharacterStream() const
	{
		return callObjectMethod(
			"getCharacterStream",
			"()Ljava/io/Reader;"
		);
	}
	inline JString InputSource::getEncoding() const
	{
		return callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;"
		);
	}
	inline JString InputSource::getPublicId() const
	{
		return callObjectMethod(
			"getPublicId",
			"()Ljava/lang/String;"
		);
	}
	inline JString InputSource::getSystemId() const
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean InputSource::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline void InputSource::setByteStream(java::io::InputStream arg0) const
	{
		callMethod<void>(
			"setByteStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	inline void InputSource::setCharacterStream(java::io::Reader arg0) const
	{
		callMethod<void>(
			"setCharacterStream",
			"(Ljava/io/Reader;)V",
			arg0.object()
		);
	}
	inline void InputSource::setEncoding(JString arg0) const
	{
		callMethod<void>(
			"setEncoding",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void InputSource::setPublicId(JString arg0) const
	{
		callMethod<void>(
			"setPublicId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void InputSource::setSystemId(JString arg0) const
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace org::xml::sax

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace org::xml::sax;
#endif
