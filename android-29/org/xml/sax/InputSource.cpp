#include "../../../java/io/InputStream.hpp"
#include "../../../java/io/Reader.hpp"
#include "./InputSource.hpp"

namespace org::xml::sax
{
	// Fields
	
	InputSource::InputSource(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InputSource::InputSource()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.InputSource",
			"()V"
		);
	}
	InputSource::InputSource(java::io::InputStream &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.InputSource",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	InputSource::InputSource(java::io::Reader &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.InputSource",
			"(Ljava/io/Reader;)V",
			arg0.__jniObject().object()
		);
	}
	InputSource::InputSource(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.InputSource",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	InputSource::InputSource(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.InputSource",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject InputSource::getByteStream()
	{
		return __thiz.callObjectMethod(
			"getByteStream",
			"()Ljava/io/InputStream;"
		);
	}
	QAndroidJniObject InputSource::getCharacterStream()
	{
		return __thiz.callObjectMethod(
			"getCharacterStream",
			"()Ljava/io/Reader;"
		);
	}
	jstring InputSource::getEncoding()
	{
		return __thiz.callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InputSource::getPublicId()
	{
		return __thiz.callObjectMethod(
			"getPublicId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InputSource::getSystemId()
	{
		return __thiz.callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean InputSource::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	void InputSource::setByteStream(java::io::InputStream arg0)
	{
		__thiz.callMethod<void>(
			"setByteStream",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void InputSource::setCharacterStream(java::io::Reader arg0)
	{
		__thiz.callMethod<void>(
			"setCharacterStream",
			"(Ljava/io/Reader;)V",
			arg0.__jniObject().object()
		);
	}
	void InputSource::setEncoding(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setEncoding",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void InputSource::setEncoding(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setEncoding",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void InputSource::setPublicId(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPublicId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void InputSource::setPublicId(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPublicId",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void InputSource::setSystemId(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void InputSource::setSystemId(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace org::xml::sax

