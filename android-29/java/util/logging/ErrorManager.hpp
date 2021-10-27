#pragma once

#ifndef JAVA_UTIL_LOGGING_ERRORMANAGER
#define JAVA_UTIL_LOGGING_ERRORMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class Exception;
}

namespace __jni_impl::java::util::logging
{
	class ErrorManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint CLOSE_FAILURE();
		static jint FLUSH_FAILURE();
		static jint FORMAT_FAILURE();
		static jint GENERIC_FAILURE();
		static jint OPEN_FAILURE();
		static jint WRITE_FAILURE();
		
		// Constructors
		void __constructor();
		
		// Methods
		void error(jstring arg0, __jni_impl::java::lang::Exception arg1, jint arg2);
		void error(const QString &arg0, __jni_impl::java::lang::Exception arg1, jint arg2);
	};
} // namespace __jni_impl::java::util::logging

#include "../../lang/Exception.hpp"

namespace __jni_impl::java::util::logging
{
	// Fields
	jint ErrorManager::CLOSE_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.logging.ErrorManager",
			"CLOSE_FAILURE"
		);
	}
	jint ErrorManager::FLUSH_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.logging.ErrorManager",
			"FLUSH_FAILURE"
		);
	}
	jint ErrorManager::FORMAT_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.logging.ErrorManager",
			"FORMAT_FAILURE"
		);
	}
	jint ErrorManager::GENERIC_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.logging.ErrorManager",
			"GENERIC_FAILURE"
		);
	}
	jint ErrorManager::OPEN_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.logging.ErrorManager",
			"OPEN_FAILURE"
		);
	}
	jint ErrorManager::WRITE_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.logging.ErrorManager",
			"WRITE_FAILURE"
		);
	}
	
	// Constructors
	void ErrorManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.ErrorManager",
			"()V"
		);
	}
	
	// Methods
	void ErrorManager::error(jstring arg0, __jni_impl::java::lang::Exception arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"error",
			"(Ljava/lang/String;Ljava/lang/Exception;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	void ErrorManager::error(const QString &arg0, __jni_impl::java::lang::Exception arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"error",
			"(Ljava/lang/String;Ljava/lang/Exception;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2
		);
	}
} // namespace __jni_impl::java::util::logging

namespace java::util::logging
{
	class ErrorManager : public __jni_impl::java::util::logging::ErrorManager
	{
	public:
		ErrorManager(QAndroidJniObject obj) { __thiz = obj; }
		ErrorManager()
		{
			__constructor();
		}
	};
} // namespace java::util::logging

#endif // JAVA_UTIL_LOGGING_ERRORMANAGER

