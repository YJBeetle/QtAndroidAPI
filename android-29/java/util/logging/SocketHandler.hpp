#pragma once

#include "../../../__JniBaseClass.hpp"
#include "Handler.hpp"
#include "StreamHandler.hpp"

namespace __jni_impl::java::net
{
	class Socket;
}
namespace __jni_impl::java::util::logging
{
	class LogRecord;
}

namespace __jni_impl::java::util::logging
{
	class SocketHandler : public __jni_impl::java::util::logging::StreamHandler
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0, jint arg1);
		void __constructor(const QString &arg0, jint arg1);
		
		// Methods
		void close();
		void publish(__jni_impl::java::util::logging::LogRecord arg0);
	};
} // namespace __jni_impl::java::util::logging

#include "../../net/Socket.hpp"
#include "LogRecord.hpp"

namespace __jni_impl::java::util::logging
{
	// Fields
	
	// Constructors
	void SocketHandler::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.SocketHandler",
			"()V"
		);
	}
	void SocketHandler::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.SocketHandler",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void SocketHandler::__constructor(const QString &arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.SocketHandler",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
	void SocketHandler::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void SocketHandler::publish(__jni_impl::java::util::logging::LogRecord arg0)
	{
		__thiz.callMethod<void>(
			"publish",
			"(Ljava/util/logging/LogRecord;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::util::logging

namespace java::util::logging
{
	class SocketHandler : public __jni_impl::java::util::logging::SocketHandler
	{
	public:
		SocketHandler(QAndroidJniObject obj) { __thiz = obj; }
		SocketHandler()
		{
			__constructor();
		}
		SocketHandler(jstring arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util::logging

