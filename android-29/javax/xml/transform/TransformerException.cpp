#include "../../../java/io/PrintStream.hpp"
#include "../../../java/io/PrintWriter.hpp"
#include "../../../java/security/ProtectionDomain.hpp"
#include "./TransformerException.hpp"

namespace javax::xml::transform
{
	// Fields
	
	TransformerException::TransformerException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TransformerException::TransformerException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	TransformerException::TransformerException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	TransformerException::TransformerException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	TransformerException::TransformerException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	TransformerException::TransformerException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	TransformerException::TransformerException(jstring &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	TransformerException::TransformerException(const QString &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	TransformerException::TransformerException(jstring &arg0, __JniBaseClass &arg1, jthrowable &arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;Ljava/lang/Throwable;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	TransformerException::TransformerException(const QString &arg0, __JniBaseClass &arg1, jthrowable &arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	
	// Methods
	jthrowable TransformerException::getCause()
	{
		return __thiz.callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	jthrowable TransformerException::getException()
	{
		return __thiz.callObjectMethod(
			"getException",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	jstring TransformerException::getLocationAsString()
	{
		return __thiz.callObjectMethod(
			"getLocationAsString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TransformerException::getLocator()
	{
		return __thiz.callObjectMethod(
			"getLocator",
			"()Ljavax/xml/transform/SourceLocator;"
		);
	}
	jstring TransformerException::getMessageAndLocation()
	{
		return __thiz.callObjectMethod(
			"getMessageAndLocation",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jthrowable TransformerException::initCause(jthrowable arg0)
	{
		return __thiz.callObjectMethod(
			"initCause",
			"(Ljava/lang/Throwable;)Ljava/lang/Throwable;",
			arg0
		).object<jthrowable>();
	}
	void TransformerException::printStackTrace()
	{
		__thiz.callMethod<void>(
			"printStackTrace",
			"()V"
		);
	}
	void TransformerException::printStackTrace(java::io::PrintStream arg0)
	{
		__thiz.callMethod<void>(
			"printStackTrace",
			"(Ljava/io/PrintStream;)V",
			arg0.__jniObject().object()
		);
	}
	void TransformerException::printStackTrace(java::io::PrintWriter arg0)
	{
		__thiz.callMethod<void>(
			"printStackTrace",
			"(Ljava/io/PrintWriter;)V",
			arg0.__jniObject().object()
		);
	}
	void TransformerException::setLocator(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setLocator",
			"(Ljavax/xml/transform/SourceLocator;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace javax::xml::transform

