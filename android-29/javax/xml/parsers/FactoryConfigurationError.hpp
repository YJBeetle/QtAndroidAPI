#pragma once

#ifndef JAVAX_XML_PARSERS_FACTORYCONFIGURATIONERROR
#define JAVAX_XML_PARSERS_FACTORYCONFIGURATIONERROR

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Error.hpp"

namespace __jni_impl::java::lang
{
	class Exception;
}

namespace __jni_impl::javax::xml::parsers
{
	class FactoryConfigurationError : public __jni_impl::java::lang::Error
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::lang::Exception arg0, jstring arg1);
		void __constructor(__jni_impl::java::lang::Exception arg0);
		void __constructor(jstring arg0);
		void __constructor();
		
		// Methods
		QAndroidJniObject getCause();
		QAndroidJniObject getMessage();
		QAndroidJniObject getException();
	};
} // namespace __jni_impl::javax::xml::parsers

#include "../../../java/lang/Exception.hpp"

namespace __jni_impl::javax::xml::parsers
{
	// Fields
	
	// Constructors
	void FactoryConfigurationError::__constructor(__jni_impl::java::lang::Exception arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.parsers.FactoryConfigurationError",
			"(Ljava/lang/Exception;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void FactoryConfigurationError::__constructor(__jni_impl::java::lang::Exception arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.parsers.FactoryConfigurationError",
			"(Ljava/lang/Exception;)V",
			arg0.__jniObject().object());
	}
	void FactoryConfigurationError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.parsers.FactoryConfigurationError",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void FactoryConfigurationError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.parsers.FactoryConfigurationError",
			"()V");
	}
	
	// Methods
	QAndroidJniObject FactoryConfigurationError::getCause()
	{
		return __thiz.callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;");
	}
	QAndroidJniObject FactoryConfigurationError::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject FactoryConfigurationError::getException()
	{
		return __thiz.callObjectMethod(
			"getException",
			"()Ljava/lang/Exception;");
	}
} // namespace __jni_impl::javax::xml::parsers

namespace javax::xml::parsers
{
	class FactoryConfigurationError : public __jni_impl::javax::xml::parsers::FactoryConfigurationError
	{
	public:
		FactoryConfigurationError(QAndroidJniObject obj) { __thiz = obj; }
		FactoryConfigurationError(__jni_impl::java::lang::Exception arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		FactoryConfigurationError(__jni_impl::java::lang::Exception arg0)
		{
			__constructor(
				arg0);
		}
		FactoryConfigurationError(jstring arg0)
		{
			__constructor(
				arg0);
		}
		FactoryConfigurationError()
		{
			__constructor();
		}
	};
} // namespace javax::xml::parsers

#endif // JAVAX_XML_PARSERS_FACTORYCONFIGURATIONERROR

