#pragma once

#include "../../../__JniBaseClass.hpp"
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
		void __constructor();
		void __constructor(__jni_impl::java::lang::Exception arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(__jni_impl::java::lang::Exception arg0, jstring arg1);
		void __constructor(__jni_impl::java::lang::Exception arg0, const QString &arg1);
		
		// Methods
		jthrowable getCause();
		QAndroidJniObject getException();
		jstring getMessage();
	};
} // namespace __jni_impl::javax::xml::transform

#include "../../../java/lang/Exception.hpp"

namespace __jni_impl::javax::xml::transform
{
	// Fields
	
	// Constructors
	void TransformerFactoryConfigurationError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerFactoryConfigurationError",
			"()V"
		);
	}
	void TransformerFactoryConfigurationError::__constructor(__jni_impl::java::lang::Exception arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerFactoryConfigurationError",
			"(Ljava/lang/Exception;)V",
			arg0.__jniObject().object()
		);
	}
	void TransformerFactoryConfigurationError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerFactoryConfigurationError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TransformerFactoryConfigurationError::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerFactoryConfigurationError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void TransformerFactoryConfigurationError::__constructor(__jni_impl::java::lang::Exception arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerFactoryConfigurationError",
			"(Ljava/lang/Exception;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void TransformerFactoryConfigurationError::__constructor(__jni_impl::java::lang::Exception arg0, const QString &arg1)
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
} // namespace __jni_impl::javax::xml::transform

namespace javax::xml::transform
{
	class TransformerFactoryConfigurationError : public __jni_impl::javax::xml::transform::TransformerFactoryConfigurationError
	{
	public:
		TransformerFactoryConfigurationError(QAndroidJniObject obj) { __thiz = obj; }
		TransformerFactoryConfigurationError()
		{
			__constructor();
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
		TransformerFactoryConfigurationError(__jni_impl::java::lang::Exception arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace javax::xml::transform

