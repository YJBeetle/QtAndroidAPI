#include "../../../../java/io/File.hpp"
#include "../../../../java/io/InputStream.hpp"
#include "../../../../java/io/Reader.hpp"
#include "./StreamSource.hpp"

namespace javax::xml::transform::stream
{
	// Fields
	jstring StreamSource::FEATURE()
	{
		return getStaticObjectField(
			"javax.xml.transform.stream.StreamSource",
			"FEATURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	StreamSource::StreamSource(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	StreamSource::StreamSource()
		: __JniBaseClass(
			"javax.xml.transform.stream.StreamSource",
			"()V"
		) {}
	StreamSource::StreamSource(java::io::File arg0)
		: __JniBaseClass(
			"javax.xml.transform.stream.StreamSource",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	StreamSource::StreamSource(java::io::InputStream arg0)
		: __JniBaseClass(
			"javax.xml.transform.stream.StreamSource",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	StreamSource::StreamSource(java::io::Reader arg0)
		: __JniBaseClass(
			"javax.xml.transform.stream.StreamSource",
			"(Ljava/io/Reader;)V",
			arg0.object()
		) {}
	StreamSource::StreamSource(jstring arg0)
		: __JniBaseClass(
			"javax.xml.transform.stream.StreamSource",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	StreamSource::StreamSource(java::io::InputStream arg0, jstring arg1)
		: __JniBaseClass(
			"javax.xml.transform.stream.StreamSource",
			"(Ljava/io/InputStream;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	StreamSource::StreamSource(java::io::Reader arg0, jstring arg1)
		: __JniBaseClass(
			"javax.xml.transform.stream.StreamSource",
			"(Ljava/io/Reader;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	java::io::InputStream StreamSource::getInputStream()
	{
		return callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	jstring StreamSource::getPublicId()
	{
		return callObjectMethod(
			"getPublicId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::io::Reader StreamSource::getReader()
	{
		return callObjectMethod(
			"getReader",
			"()Ljava/io/Reader;"
		);
	}
	jstring StreamSource::getSystemId()
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean StreamSource::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	void StreamSource::setInputStream(java::io::InputStream arg0)
	{
		callMethod<void>(
			"setInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	void StreamSource::setPublicId(jstring arg0)
	{
		callMethod<void>(
			"setPublicId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void StreamSource::setReader(java::io::Reader arg0)
	{
		callMethod<void>(
			"setReader",
			"(Ljava/io/Reader;)V",
			arg0.object()
		);
	}
	void StreamSource::setSystemId(java::io::File arg0)
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/io/File;)V",
			arg0.object()
		);
	}
	void StreamSource::setSystemId(jstring arg0)
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace javax::xml::transform::stream

