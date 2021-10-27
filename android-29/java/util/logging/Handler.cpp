#include "../../lang/Exception.hpp"
#include "./ErrorManager.hpp"
#include "./Formatter.hpp"
#include "./Level.hpp"
#include "./LogManager.hpp"
#include "./LogRecord.hpp"
#include "./Handler.hpp"

namespace java::util::logging
{
	// Fields
	
	Handler::Handler(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
	jboolean Handler::isLoggable(java::util::logging::LogRecord arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isLoggable",
			"(Ljava/util/logging/LogRecord;)Z",
			arg0.__jniObject().object()
		);
	}
	void Handler::publish(java::util::logging::LogRecord arg0)
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
	void Handler::setErrorManager(java::util::logging::ErrorManager arg0)
	{
		__thiz.callMethod<void>(
			"setErrorManager",
			"(Ljava/util/logging/ErrorManager;)V",
			arg0.__jniObject().object()
		);
	}
	void Handler::setFilter(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setFilter",
			"(Ljava/util/logging/Filter;)V",
			arg0.__jniObject().object()
		);
	}
	void Handler::setFormatter(java::util::logging::Formatter arg0)
	{
		__thiz.callMethod<void>(
			"setFormatter",
			"(Ljava/util/logging/Formatter;)V",
			arg0.__jniObject().object()
		);
	}
	void Handler::setLevel(java::util::logging::Level arg0)
	{
		__thiz.callMethod<void>(
			"setLevel",
			"(Ljava/util/logging/Level;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace java::util::logging

