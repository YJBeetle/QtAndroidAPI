#include "../../io/File.hpp"
#include "../../nio/channels/FileChannel.hpp"
#include "./LogRecord.hpp"
#include "./FileHandler.hpp"

namespace java::util::logging
{
	// Fields
	
	FileHandler::FileHandler(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FileHandler::FileHandler()
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.FileHandler",
			"()V"
		);
	}
	FileHandler::FileHandler(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.FileHandler",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	FileHandler::FileHandler(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.FileHandler",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	FileHandler::FileHandler(jstring &arg0, jboolean &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.FileHandler",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	FileHandler::FileHandler(const QString &arg0, jboolean &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.FileHandler",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	FileHandler::FileHandler(jstring &arg0, jint &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.FileHandler",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	FileHandler::FileHandler(const QString &arg0, jint &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.FileHandler",
			"(Ljava/lang/String;II)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	FileHandler::FileHandler(jstring &arg0, jint &arg1, jint &arg2, jboolean &arg3)
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
	FileHandler::FileHandler(const QString &arg0, jint &arg1, jint &arg2, jboolean &arg3)
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
	FileHandler::FileHandler(jstring &arg0, jlong &arg1, jint &arg2, jboolean &arg3)
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
	FileHandler::FileHandler(const QString &arg0, jlong &arg1, jint &arg2, jboolean &arg3)
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
	void FileHandler::publish(java::util::logging::LogRecord arg0)
	{
		__thiz.callMethod<void>(
			"publish",
			"(Ljava/util/logging/LogRecord;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace java::util::logging

