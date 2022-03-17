#pragma once

#include "../../../../java/io/File.def.hpp"
#include "../../../../java/io/InputStream.def.hpp"
#include "../../../../java/io/Reader.def.hpp"
#include "../../../../JString.hpp"
#include "./StreamSource.def.hpp"

namespace javax::xml::transform::stream
{
	// Fields
	inline JString StreamSource::FEATURE()
	{
		return getStaticObjectField(
			"javax.xml.transform.stream.StreamSource",
			"FEATURE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline StreamSource::StreamSource()
		: JObject(
			"javax.xml.transform.stream.StreamSource",
			"()V"
		) {}
	inline StreamSource::StreamSource(java::io::File arg0)
		: JObject(
			"javax.xml.transform.stream.StreamSource",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	inline StreamSource::StreamSource(java::io::InputStream arg0)
		: JObject(
			"javax.xml.transform.stream.StreamSource",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	inline StreamSource::StreamSource(java::io::Reader arg0)
		: JObject(
			"javax.xml.transform.stream.StreamSource",
			"(Ljava/io/Reader;)V",
			arg0.object()
		) {}
	inline StreamSource::StreamSource(JString arg0)
		: JObject(
			"javax.xml.transform.stream.StreamSource",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline StreamSource::StreamSource(java::io::InputStream arg0, JString arg1)
		: JObject(
			"javax.xml.transform.stream.StreamSource",
			"(Ljava/io/InputStream;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	inline StreamSource::StreamSource(java::io::Reader arg0, JString arg1)
		: JObject(
			"javax.xml.transform.stream.StreamSource",
			"(Ljava/io/Reader;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline java::io::InputStream StreamSource::getInputStream() const
	{
		return callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	inline JString StreamSource::getPublicId() const
	{
		return callObjectMethod(
			"getPublicId",
			"()Ljava/lang/String;"
		);
	}
	inline java::io::Reader StreamSource::getReader() const
	{
		return callObjectMethod(
			"getReader",
			"()Ljava/io/Reader;"
		);
	}
	inline JString StreamSource::getSystemId() const
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean StreamSource::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline void StreamSource::setInputStream(java::io::InputStream arg0) const
	{
		callMethod<void>(
			"setInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	inline void StreamSource::setPublicId(JString arg0) const
	{
		callMethod<void>(
			"setPublicId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void StreamSource::setReader(java::io::Reader arg0) const
	{
		callMethod<void>(
			"setReader",
			"(Ljava/io/Reader;)V",
			arg0.object()
		);
	}
	inline void StreamSource::setSystemId(java::io::File arg0) const
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/io/File;)V",
			arg0.object()
		);
	}
	inline void StreamSource::setSystemId(JString arg0) const
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace javax::xml::transform::stream

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::xml::transform::stream;
#endif
