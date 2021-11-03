#include "../../../../java/io/File.hpp"
#include "../../../../java/io/InputStream.hpp"
#include "../../../../java/io/Reader.hpp"
#include "../../../../JString.hpp"
#include "./StreamSource.hpp"

namespace javax::xml::transform::stream
{
	// Fields
	JString StreamSource::FEATURE()
	{
		return getStaticObjectField(
			"javax.xml.transform.stream.StreamSource",
			"FEATURE",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	StreamSource::StreamSource(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	StreamSource::StreamSource()
		: JObject(
			"javax.xml.transform.stream.StreamSource",
			"()V"
		) {}
	StreamSource::StreamSource(java::io::File arg0)
		: JObject(
			"javax.xml.transform.stream.StreamSource",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	StreamSource::StreamSource(java::io::InputStream arg0)
		: JObject(
			"javax.xml.transform.stream.StreamSource",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	StreamSource::StreamSource(java::io::Reader arg0)
		: JObject(
			"javax.xml.transform.stream.StreamSource",
			"(Ljava/io/Reader;)V",
			arg0.object()
		) {}
	StreamSource::StreamSource(JString arg0)
		: JObject(
			"javax.xml.transform.stream.StreamSource",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	StreamSource::StreamSource(java::io::InputStream arg0, JString arg1)
		: JObject(
			"javax.xml.transform.stream.StreamSource",
			"(Ljava/io/InputStream;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	StreamSource::StreamSource(java::io::Reader arg0, JString arg1)
		: JObject(
			"javax.xml.transform.stream.StreamSource",
			"(Ljava/io/Reader;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	java::io::InputStream StreamSource::getInputStream() const
	{
		return callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	JString StreamSource::getPublicId() const
	{
		return callObjectMethod(
			"getPublicId",
			"()Ljava/lang/String;"
		);
	}
	java::io::Reader StreamSource::getReader() const
	{
		return callObjectMethod(
			"getReader",
			"()Ljava/io/Reader;"
		);
	}
	JString StreamSource::getSystemId() const
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		);
	}
	jboolean StreamSource::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	void StreamSource::setInputStream(java::io::InputStream arg0) const
	{
		callMethod<void>(
			"setInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	void StreamSource::setPublicId(JString arg0) const
	{
		callMethod<void>(
			"setPublicId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void StreamSource::setReader(java::io::Reader arg0) const
	{
		callMethod<void>(
			"setReader",
			"(Ljava/io/Reader;)V",
			arg0.object()
		);
	}
	void StreamSource::setSystemId(java::io::File arg0) const
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/io/File;)V",
			arg0.object()
		);
	}
	void StreamSource::setSystemId(JString arg0) const
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace javax::xml::transform::stream

