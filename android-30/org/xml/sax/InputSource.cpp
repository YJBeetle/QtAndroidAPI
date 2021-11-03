#include "../../../java/io/InputStream.hpp"
#include "../../../java/io/Reader.hpp"
#include "../../../JString.hpp"
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
	InputSource::InputSource(JString arg0)
		: JObject(
			"org.xml.sax.InputSource",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	java::io::InputStream InputSource::getByteStream() const
	{
		return callObjectMethod(
			"getByteStream",
			"()Ljava/io/InputStream;"
		);
	}
	java::io::Reader InputSource::getCharacterStream() const
	{
		return callObjectMethod(
			"getCharacterStream",
			"()Ljava/io/Reader;"
		);
	}
	JString InputSource::getEncoding() const
	{
		return callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;"
		);
	}
	JString InputSource::getPublicId() const
	{
		return callObjectMethod(
			"getPublicId",
			"()Ljava/lang/String;"
		);
	}
	JString InputSource::getSystemId() const
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		);
	}
	jboolean InputSource::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	void InputSource::setByteStream(java::io::InputStream arg0) const
	{
		callMethod<void>(
			"setByteStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	void InputSource::setCharacterStream(java::io::Reader arg0) const
	{
		callMethod<void>(
			"setCharacterStream",
			"(Ljava/io/Reader;)V",
			arg0.object()
		);
	}
	void InputSource::setEncoding(JString arg0) const
	{
		callMethod<void>(
			"setEncoding",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void InputSource::setPublicId(JString arg0) const
	{
		callMethod<void>(
			"setPublicId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void InputSource::setSystemId(JString arg0) const
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace org::xml::sax

