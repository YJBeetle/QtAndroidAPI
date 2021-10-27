#include "../../../java/lang/Exception.hpp"
#include "./FactoryConfigurationError.hpp"

namespace javax::xml::parsers
{
	// Fields
	
	FactoryConfigurationError::FactoryConfigurationError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FactoryConfigurationError::FactoryConfigurationError()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.parsers.FactoryConfigurationError",
			"()V"
		);
	}
	FactoryConfigurationError::FactoryConfigurationError(java::lang::Exception &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.parsers.FactoryConfigurationError",
			"(Ljava/lang/Exception;)V",
			arg0.__jniObject().object()
		);
	}
	FactoryConfigurationError::FactoryConfigurationError(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.parsers.FactoryConfigurationError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	FactoryConfigurationError::FactoryConfigurationError(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.parsers.FactoryConfigurationError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	FactoryConfigurationError::FactoryConfigurationError(java::lang::Exception &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.parsers.FactoryConfigurationError",
			"(Ljava/lang/Exception;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	FactoryConfigurationError::FactoryConfigurationError(java::lang::Exception &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.parsers.FactoryConfigurationError",
			"(Ljava/lang/Exception;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jthrowable FactoryConfigurationError::getCause()
	{
		return __thiz.callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	QAndroidJniObject FactoryConfigurationError::getException()
	{
		return __thiz.callObjectMethod(
			"getException",
			"()Ljava/lang/Exception;"
		);
	}
	jstring FactoryConfigurationError::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace javax::xml::parsers

