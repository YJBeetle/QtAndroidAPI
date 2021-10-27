#pragma once

#include "../../../__JniBaseClass.hpp"
#include "Handler.hpp"
#include "StreamHandler.hpp"

namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::nio::channels
{
	class FileChannel;
}
namespace __jni_impl::java::util::logging
{
	class LogRecord;
}

namespace __jni_impl::java::util::logging
{
	class FileHandler : public __jni_impl::java::util::logging::StreamHandler
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, jboolean arg1);
		void __constructor(const QString &arg0, jboolean arg1);
		void __constructor(jstring arg0, jint arg1, jint arg2);
		void __constructor(const QString &arg0, jint arg1, jint arg2);
		void __constructor(jstring arg0, jint arg1, jint arg2, jboolean arg3);
		void __constructor(const QString &arg0, jint arg1, jint arg2, jboolean arg3);
		void __constructor(jstring arg0, jlong arg1, jint arg2, jboolean arg3);
		void __constructor(const QString &arg0, jlong arg1, jint arg2, jboolean arg3);
		
		// Methods
		void close();
		void publish(__jni_impl::java::util::logging::LogRecord arg0);
	};
} // namespace __jni_impl::java::util::logging

#include "../../io/File.hpp"
#include "../../nio/channels/FileChannel.hpp"
#include "LogRecord.hpp"

namespace __jni_impl::java::util::logging
{
	// Fields
	
	// Constructors
	void FileHandler::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.FileHandler",
			"()V"
		);
	}
	void FileHandler::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.FileHandler",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void FileHandler::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.FileHandler",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void FileHandler::__constructor(jstring arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.FileHandler",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void FileHandler::__constructor(const QString &arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.FileHandler",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void FileHandler::__constructor(jstring arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.FileHandler",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void FileHandler::__constructor(const QString &arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.FileHandler",
			"(Ljava/lang/String;II)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	void FileHandler::__constructor(jstring arg0, jint arg1, jint arg2, jboolean arg3)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.FileHandler",
			"(Ljava/lang/String;IIZ)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void FileHandler::__constructor(const QString &arg0, jint arg1, jint arg2, jboolean arg3)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.FileHandler",
			"(Ljava/lang/String;IIZ)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	void FileHandler::__constructor(jstring arg0, jlong arg1, jint arg2, jboolean arg3)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.FileHandler",
			"(Ljava/lang/String;JIZ)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void FileHandler::__constructor(const QString &arg0, jlong arg1, jint arg2, jboolean arg3)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.FileHandler",
			"(Ljava/lang/String;JIZ)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	void FileHandler::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void FileHandler::publish(__jni_impl::java::util::logging::LogRecord arg0)
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
	class FileHandler : public __jni_impl::java::util::logging::FileHandler
	{
	public:
		FileHandler(QAndroidJniObject obj) { __thiz = obj; }
		FileHandler()
		{
			__constructor();
		}
		FileHandler(jstring arg0)
		{
			__constructor(
				arg0);
		}
		FileHandler(jstring arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		FileHandler(jstring arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		FileHandler(jstring arg0, jint arg1, jint arg2, jboolean arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		FileHandler(jstring arg0, jlong arg1, jint arg2, jboolean arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace java::util::logging

