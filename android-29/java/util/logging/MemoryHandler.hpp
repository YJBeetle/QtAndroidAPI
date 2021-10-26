#pragma once

#ifndef JAVA_UTIL_LOGGING_MEMORYHANDLER
#define JAVA_UTIL_LOGGING_MEMORYHANDLER

#include "../../../__JniBaseClass.hpp"
#include "Handler.hpp"

namespace __jni_impl::java::util::logging
{
	class Level;
}
namespace __jni_impl::java::util::logging
{
	class Handler;
}
namespace __jni_impl::java::util::logging
{
	class LogRecord;
}

namespace __jni_impl::java::util::logging
{
	class MemoryHandler : public __jni_impl::java::util::logging::Handler
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::util::logging::Handler arg0, jint arg1, __jni_impl::java::util::logging::Level arg2);
		void __constructor();
		
		// Methods
		void flush();
		void close();
		void push();
		jboolean isLoggable(__jni_impl::java::util::logging::LogRecord arg0);
		void publish(__jni_impl::java::util::logging::LogRecord arg0);
		void setPushLevel(__jni_impl::java::util::logging::Level arg0);
		QAndroidJniObject getPushLevel();
	};
} // namespace __jni_impl::java::util::logging

#include "Level.hpp"
#include "Handler.hpp"
#include "LogRecord.hpp"

namespace __jni_impl::java::util::logging
{
	// Fields
	
	// Constructors
	void MemoryHandler::__constructor(__jni_impl::java::util::logging::Handler arg0, jint arg1, __jni_impl::java::util::logging::Level arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.MemoryHandler",
			"(Ljava/util/logging/Handler;ILjava/util/logging/Level;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void MemoryHandler::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.MemoryHandler",
			"()V"
		);
	}
	
	// Methods
	void MemoryHandler::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	void MemoryHandler::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void MemoryHandler::push()
	{
		__thiz.callMethod<void>(
			"push",
			"()V"
		);
	}
	jboolean MemoryHandler::isLoggable(__jni_impl::java::util::logging::LogRecord arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isLoggable",
			"(Ljava/util/logging/LogRecord;)Z",
			arg0.__jniObject().object()
		);
	}
	void MemoryHandler::publish(__jni_impl::java::util::logging::LogRecord arg0)
	{
		__thiz.callMethod<void>(
			"publish",
			"(Ljava/util/logging/LogRecord;)V",
			arg0.__jniObject().object()
		);
	}
	void MemoryHandler::setPushLevel(__jni_impl::java::util::logging::Level arg0)
	{
		__thiz.callMethod<void>(
			"setPushLevel",
			"(Ljava/util/logging/Level;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MemoryHandler::getPushLevel()
	{
		return __thiz.callObjectMethod(
			"getPushLevel",
			"()Ljava/util/logging/Level;"
		);
	}
} // namespace __jni_impl::java::util::logging

namespace java::util::logging
{
	class MemoryHandler : public __jni_impl::java::util::logging::MemoryHandler
	{
	public:
		MemoryHandler(QAndroidJniObject obj) { __thiz = obj; }
		MemoryHandler(__jni_impl::java::util::logging::Handler arg0, jint arg1, __jni_impl::java::util::logging::Level arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		MemoryHandler()
		{
			__constructor();
		}
	};
} // namespace java::util::logging

#endif // JAVA_UTIL_LOGGING_MEMORYHANDLER

