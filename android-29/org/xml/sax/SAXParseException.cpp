#include "../../../java/lang/Exception.hpp"
#include "./SAXParseException.hpp"

namespace org::xml::sax
{
	// Fields
	
	SAXParseException::SAXParseException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SAXParseException::SAXParseException(jstring &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXParseException",
			"(Ljava/lang/String;Lorg/xml/sax/Locator;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	SAXParseException::SAXParseException(const QString &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXParseException",
			"(Ljava/lang/String;Lorg/xml/sax/Locator;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	SAXParseException::SAXParseException(jstring &arg0, __JniBaseClass &arg1, java::lang::Exception &arg2)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXParseException",
			"(Ljava/lang/String;Lorg/xml/sax/Locator;Ljava/lang/Exception;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	SAXParseException::SAXParseException(const QString &arg0, __JniBaseClass &arg1, java::lang::Exception &arg2)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXParseException",
			"(Ljava/lang/String;Lorg/xml/sax/Locator;Ljava/lang/Exception;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	SAXParseException::SAXParseException(jstring &arg0, jstring &arg1, jstring &arg2, jint &arg3, jint &arg4)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXParseException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	SAXParseException::SAXParseException(const QString &arg0, const QString &arg1, const QString &arg2, jint &arg3, jint &arg4)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXParseException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;II)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			arg4
		);
	}
	SAXParseException::SAXParseException(jstring &arg0, jstring &arg1, jstring &arg2, jint &arg3, jint &arg4, java::lang::Exception &arg5)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXParseException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IILjava/lang/Exception;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	SAXParseException::SAXParseException(const QString &arg0, const QString &arg1, const QString &arg2, jint &arg3, jint &arg4, java::lang::Exception &arg5)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXParseException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IILjava/lang/Exception;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	
	// Methods
	jint SAXParseException::getColumnNumber()
	{
		return __thiz.callMethod<jint>(
			"getColumnNumber",
			"()I"
		);
	}
	jint SAXParseException::getLineNumber()
	{
		return __thiz.callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	jstring SAXParseException::getPublicId()
	{
		return __thiz.callObjectMethod(
			"getPublicId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SAXParseException::getSystemId()
	{
		return __thiz.callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SAXParseException::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace org::xml::sax

