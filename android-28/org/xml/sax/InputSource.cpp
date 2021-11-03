#include "../../../java/io/InputStream.hpp"
#include "../../../java/io/Reader.hpp"
#include "./InputSource.hpp"

namespace org::xml::sax
{
	// Fields
	
	// QJniObject forward
	InputSource::InputSource(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	InputSource::InputSource()
		: JObject(
			"org.xml.sax.InputSource",
			"()V"
		) {}
	InputSource::InputSource(java::io::InputStream arg0)
		: JObject(
			"org.xml.sax.InputSource",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	InputSource::InputSource(java::io::Reader arg0)
		: JObject(
			"org.xml.sax.InputSource",
			"(Ljava/io/Reader;)V",
			arg0.object()
		) {}
	InputSource::InputSource(jstring arg0)
		: JObject(
			"org.xml.sax.InputSource",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	java::io::InputStream InputSource::getByteStream()
	{
		return callObjectMethod(
			"getByteStream",
			"()Ljava/io/InputStream;"
		);
	}
	java::io::Reader InputSource::getCharacterStream()
	{
		return callObjectMethod(
			"getCharacterStream",
			"()Ljava/io/Reader;"
		);
	}
	jstring InputSource::getEncoding()
	{
		return callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InputSource::getPublicId()
	{
		return callObjectMethod(
			"getPublicId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InputSource::getSystemId()
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean InputSource::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	void InputSource::setByteStream(java::io::InputStream arg0)
	{
		callMethod<void>(
			"setByteStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	void InputSource::setCharacterStream(java::io::Reader arg0)
	{
		callMethod<void>(
			"setCharacterStream",
			"(Ljava/io/Reader;)V",
			arg0.object()
		);
	}
	void InputSource::setEncoding(jstring arg0)
	{
		callMethod<void>(
			"setEncoding",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void InputSource::setPublicId(jstring arg0)
	{
		callMethod<void>(
			"setPublicId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void InputSource::setSystemId(jstring arg0)
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace org::xml::sax

