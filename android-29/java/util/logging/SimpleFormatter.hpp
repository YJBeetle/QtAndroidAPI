#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Formatter.hpp"

namespace __jni_impl::java::util::logging
{
	class LogRecord;
}

namespace __jni_impl::java::util::logging
{
	class SimpleFormatter : public __jni_impl::java::util::logging::Formatter
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring format(__jni_impl::java::util::logging::LogRecord arg0);
	};
} // namespace __jni_impl::java::util::logging

#include "./LogRecord.hpp"

namespace __jni_impl::java::util::logging
{
	// Fields
	
	// Constructors
	void SimpleFormatter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.SimpleFormatter",
			"()V"
		);
	}
	
	// Methods
	jstring SimpleFormatter::format(__jni_impl::java::util::logging::LogRecord arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/util/logging/LogRecord;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
} // namespace __jni_impl::java::util::logging

namespace java::util::logging
{
	class SimpleFormatter : public __jni_impl::java::util::logging::SimpleFormatter
	{
	public:
		SimpleFormatter(QAndroidJniObject obj) { __thiz = obj; }
		SimpleFormatter()
		{
			__constructor();
		}
	};
} // namespace java::util::logging

