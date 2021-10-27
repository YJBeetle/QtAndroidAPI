#include "./TransformerConfigurationException.hpp"

namespace javax::xml::transform
{
	// Fields
	
	TransformerConfigurationException::TransformerConfigurationException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TransformerConfigurationException::TransformerConfigurationException()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerConfigurationException",
			"()V"
		);
	}
	TransformerConfigurationException::TransformerConfigurationException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	TransformerConfigurationException::TransformerConfigurationException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	TransformerConfigurationException::TransformerConfigurationException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	TransformerConfigurationException::TransformerConfigurationException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	TransformerConfigurationException::TransformerConfigurationException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	TransformerConfigurationException::TransformerConfigurationException(jstring &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	TransformerConfigurationException::TransformerConfigurationException(const QString &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	TransformerConfigurationException::TransformerConfigurationException(jstring &arg0, __JniBaseClass &arg1, jthrowable &arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;Ljava/lang/Throwable;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	TransformerConfigurationException::TransformerConfigurationException(const QString &arg0, __JniBaseClass &arg1, jthrowable &arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	
	// Methods
} // namespace javax::xml::transform

