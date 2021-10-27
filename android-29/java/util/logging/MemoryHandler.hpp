#pragma once

#include "../../../__JniBaseClass.hpp"
#include "Handler.hpp"

namespace __jni_impl::java::util::logging
{
	class Handler;
}
namespace __jni_impl::java::util::logging
{
	class Level;
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
		void __constructor();
		void __constructor(__jni_impl::java::util::logging::Handler arg0, jint arg1, __jni_impl::java::util::logging::Level arg2);
		
		// Methods
		void close();
		void flush();
		QAndroidJniObject getPushLevel();
		jboolean isLoggable(__jni_impl::java::util::logging::LogRecord arg0);
		void publish(__jni_impl::java::util::logging::LogRecord arg0);
		void push();
		void setPushLevel(__jni_impl::java::util::logging::Level arg0);
	};
} // namespace __jni_impl::java::util::logging

#include "Handler.hpp"
#include "Level.hpp"
#include "LogRecord.hpp"

namespace __jni_impl::java::util::logging
{
	// Fields
	
	// Constructors
	void MemoryHandler::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.MemoryHandler",
			"()V"
		);
	}
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
	
	// Methods
	void MemoryHandler::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void MemoryHandler::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	QAndroidJniObject MemoryHandler::getPushLevel()
	{
		return __thiz.callObjectMethod(
			"getPushLevel",
			"()Ljava/util/logging/Level;"
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
	void MemoryHandler::push()
	{
		__thiz.callMethod<void>(
			"push",
			"()V"
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
} // namespace __jni_impl::java::util::logging

namespace java::util::logging
{
	class MemoryHandler : public __jni_impl::java::util::logging::MemoryHandler
	{
	public:
		MemoryHandler(QAndroidJniObject obj) { __thiz = obj; }
		MemoryHandler()
		{
			__constructor();
		}
		MemoryHandler(__jni_impl::java::util::logging::Handler arg0, jint arg1, __jni_impl::java::util::logging::Level arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::util::logging

