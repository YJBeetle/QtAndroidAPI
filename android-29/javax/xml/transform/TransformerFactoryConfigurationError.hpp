#pragma once

#ifndef JAVAX_XML_TRANSFORM_TRANSFORMERFACTORYCONFIGURATIONERROR
#define JAVAX_XML_TRANSFORM_TRANSFORMERFACTORYCONFIGURATIONERROR

#include "../../../java/lang/Error.hpp"

namespace __jni_impl::java::lang
{
	class Exception;
}

namespace __jni_impl::javax::xml::transform
{
	class TransformerFactoryConfigurationError : public __jni_impl::java::lang::Error
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
} // namespace __jni_impl::javax::xml::transform

#include "../../../java/lang/Exception.hpp"

namespace __jni_impl::javax::xml::transform
{
	// Fields
	
	// Constructors
	void TransformerFactoryConfigurationError::__constructor(__jni_impl::java::lang::Exception arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerFactoryConfigurationError",
			"(Ljava/lang/Exception;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void TransformerFactoryConfigurationError::__constructor(__jni_impl::java::lang::Exception arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerFactoryConfigurationError",
			"(Ljava/lang/Exception;)V",
			arg0.__jniObject().object());
	}
	void TransformerFactoryConfigurationError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerFactoryConfigurationError",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void TransformerFactoryConfigurationError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerFactoryConfigurationError",
			"()V");
	}
	
	// Methods
	QAndroidJniObject TransformerFactoryConfigurationError::getCause()
	{
		return __thiz.callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;");
	}
	QAndroidJniObject TransformerFactoryConfigurationError::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TransformerFactoryConfigurationError::getException()
	{
		return __thiz.callObjectMethod(
			"getException",
			"()Ljava/lang/Exception;");
	}
} // namespace __jni_impl::javax::xml::transform

namespace javax::xml::transform
{
	class TransformerFactoryConfigurationError : public __jni_impl::javax::xml::transform::TransformerFactoryConfigurationError
	{
	public:
		TransformerFactoryConfigurationError(QAndroidJniObject obj) { __thiz = obj; }
		TransformerFactoryConfigurationError(__jni_impl::java::lang::Exception arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		TransformerFactoryConfigurationError(__jni_impl::java::lang::Exception arg0)
		{
			__constructor(
				arg0);
		}
		TransformerFactoryConfigurationError(jstring arg0)
		{
			__constructor(
				arg0);
		}
		TransformerFactoryConfigurationError()
		{
			__constructor();
		}
	};
} // namespace javax::xml::transform

#endif // JAVAX_XML_TRANSFORM_TRANSFORMERFACTORYCONFIGURATIONERROR

