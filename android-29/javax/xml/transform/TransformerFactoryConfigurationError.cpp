#include "../../../java/lang/Exception.hpp"
#include "./TransformerFactoryConfigurationError.hpp"

namespace javax::xml::transform
{
	// Fields
	
	TransformerFactoryConfigurationError::TransformerFactoryConfigurationError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TransformerFactoryConfigurationError::TransformerFactoryConfigurationError()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerFactoryConfigurationError",
			"()V"
		);
	}
	TransformerFactoryConfigurationError::TransformerFactoryConfigurationError(java::lang::Exception &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerFactoryConfigurationError",
			"(Ljava/lang/Exception;)V",
			arg0.__jniObject().object()
		);
	}
	TransformerFactoryConfigurationError::TransformerFactoryConfigurationError(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerFactoryConfigurationError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	TransformerFactoryConfigurationError::TransformerFactoryConfigurationError(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerFactoryConfigurationError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	TransformerFactoryConfigurationError::TransformerFactoryConfigurationError(java::lang::Exception &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerFactoryConfigurationError",
			"(Ljava/lang/Exception;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	TransformerFactoryConfigurationError::TransformerFactoryConfigurationError(java::lang::Exception &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerFactoryConfigurationError",
			"(Ljava/lang/Exception;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jthrowable TransformerFactoryConfigurationError::getCause()
	{
		return __thiz.callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	QAndroidJniObject TransformerFactoryConfigurationError::getException()
	{
		return __thiz.callObjectMethod(
			"getException",
			"()Ljava/lang/Exception;"
		);
	}
	jstring TransformerFactoryConfigurationError::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace javax::xml::transform

