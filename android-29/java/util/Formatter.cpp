#include "../io/File.hpp"
#include "../io/IOException.hpp"
#include "../io/OutputStream.hpp"
#include "../io/PrintStream.hpp"
#include "../nio/charset/Charset.hpp"
#include "./Locale.hpp"
#include "./regex/Pattern.hpp"
#include "./Formatter.hpp"

namespace java::util
{
	// Fields
	
	Formatter::Formatter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Formatter::Formatter()
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"()V"
		);
	}
	Formatter::Formatter(java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
	Formatter::Formatter(java::io::OutputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	Formatter::Formatter(java::io::PrintStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/io/PrintStream;)V",
			arg0.__jniObject().object()
		);
	}
	Formatter::Formatter(__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/lang/Appendable;)V",
			arg0.__jniObject().object()
		);
	}
	Formatter::Formatter(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	Formatter::Formatter(java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	Formatter::Formatter(java::io::File arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	Formatter::Formatter(java::io::OutputStream arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/io/OutputStream;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	Formatter::Formatter(__JniBaseClass arg0, java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/lang/Appendable;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	Formatter::Formatter(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	Formatter::Formatter(java::io::File arg0, jstring arg1, java::util::Locale arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/io/File;Ljava/lang/String;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	Formatter::Formatter(java::io::File arg0, java::nio::charset::Charset arg1, java::util::Locale arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/io/File;Ljava/nio/charset/Charset;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	Formatter::Formatter(java::io::OutputStream arg0, jstring arg1, java::util::Locale arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/io/OutputStream;Ljava/lang/String;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	Formatter::Formatter(java::io::OutputStream arg0, java::nio::charset::Charset arg1, java::util::Locale arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/io/OutputStream;Ljava/nio/charset/Charset;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	Formatter::Formatter(jstring arg0, jstring arg1, java::util::Locale arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Locale;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	Formatter::Formatter(jstring arg0, java::nio::charset::Charset arg1, java::util::Locale arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;Ljava/util/Locale;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	void Formatter::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void Formatter::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	QAndroidJniObject Formatter::format(jstring arg0, jobjectArray arg1)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/Formatter;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Formatter::format(java::util::Locale arg0, jstring arg1, jobjectArray arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/Formatter;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject Formatter::ioException()
	{
		return __thiz.callObjectMethod(
			"ioException",
			"()Ljava/io/IOException;"
		);
	}
	QAndroidJniObject Formatter::locale()
	{
		return __thiz.callObjectMethod(
			"locale",
			"()Ljava/util/Locale;"
		);
	}
	QAndroidJniObject Formatter::out()
	{
		return __thiz.callObjectMethod(
			"out",
			"()Ljava/lang/Appendable;"
		);
	}
	jstring Formatter::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

