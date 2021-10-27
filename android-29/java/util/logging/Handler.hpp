#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class Exception;
}
namespace __jni_impl::java::util::logging
{
	class ErrorManager;
}
namespace __jni_impl::java::util::logging
{
	class Formatter;
}
namespace __jni_impl::java::util::logging
{
	class Level;
}
namespace __jni_impl::java::util::logging
{
	class LogManager;
}
namespace __jni_impl::java::util::logging
{
	class LogRecord;
}

namespace __jni_impl::java::util::logging
{
	class Handler : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		void flush();
		jstring getEncoding();
		QAndroidJniObject getErrorManager();
		QAndroidJniObject getFilter();
		QAndroidJniObject getFormatter();
		QAndroidJniObject getLevel();
		jboolean isLoggable(__jni_impl::java::util::logging::LogRecord arg0);
		void publish(__jni_impl::java::util::logging::LogRecord arg0);
		void setEncoding(jstring arg0);
		void setEncoding(const QString &arg0);
		void setErrorManager(__jni_impl::java::util::logging::ErrorManager arg0);
		void setFilter(__jni_impl::__JniBaseClass arg0);
		void setFormatter(__jni_impl::java::util::logging::Formatter arg0);
		void setLevel(__jni_impl::java::util::logging::Level arg0);
	};
} // namespace __jni_impl::java::util::logging

#include "../../lang/Exception.hpp"
#include "ErrorManager.hpp"
#include "Formatter.hpp"
#include "Level.hpp"
#include "LogManager.hpp"
#include "LogRecord.hpp"

namespace __jni_impl::java::util::logging
{
	// Fields
	
	// Constructors
	void Handler::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.Handler",
			"(V)V");
	}
	
	// Methods
	void Handler::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void Handler::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	jstring Handler::getEncoding()
	{
		return __thiz.callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Handler::getErrorManager()
	{
		return __thiz.callObjectMethod(
			"getErrorManager",
			"()Ljava/util/logging/ErrorManager;"
		);
	}
	QAndroidJniObject Handler::getFilter()
	{
		return __thiz.callObjectMethod(
			"getFilter",
			"()Ljava/util/logging/Filter;"
		);
	}
	QAndroidJniObject Handler::getFormatter()
	{
		return __thiz.callObjectMethod(
			"getFormatter",
			"()Ljava/util/logging/Formatter;"
		);
	}
	QAndroidJniObject Handler::getLevel()
	{
		return __thiz.callObjectMethod(
			"getLevel",
			"()Ljava/util/logging/Level;"
		);
	}
	jboolean Handler::isLoggable(__jni_impl::java::util::logging::LogRecord arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isLoggable",
			"(Ljava/util/logging/LogRecord;)Z",
			arg0.__jniObject().object()
		);
	}
	void Handler::publish(__jni_impl::java::util::logging::LogRecord arg0)
	{
		__thiz.callMethod<void>(
			"publish",
			"(Ljava/util/logging/LogRecord;)V",
			arg0.__jniObject().object()
		);
	}
	void Handler::setEncoding(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setEncoding",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Handler::setEncoding(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setEncoding",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Handler::setErrorManager(__jni_impl::java::util::logging::ErrorManager arg0)
	{
		__thiz.callMethod<void>(
			"setErrorManager",
			"(Ljava/util/logging/ErrorManager;)V",
			arg0.__jniObject().object()
		);
	}
	void Handler::setFilter(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setFilter",
			"(Ljava/util/logging/Filter;)V",
			arg0.__jniObject().object()
		);
	}
	void Handler::setFormatter(__jni_impl::java::util::logging::Formatter arg0)
	{
		__thiz.callMethod<void>(
			"setFormatter",
			"(Ljava/util/logging/Formatter;)V",
			arg0.__jniObject().object()
		);
	}
	void Handler::setLevel(__jni_impl::java::util::logging::Level arg0)
	{
		__thiz.callMethod<void>(
			"setLevel",
			"(Ljava/util/logging/Level;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::util::logging

namespace java::util::logging
{
	class Handler : public __jni_impl::java::util::logging::Handler
	{
	public:
		Handler(QAndroidJniObject obj) { __thiz = obj; }
		Handler()
		{
			__constructor();
		}
	};
} // namespace java::util::logging

