#pragma once

#ifndef JAVA_IO_PRINTSTREAM
#define JAVA_IO_PRINTSTREAM

#include "../../__JniBaseClass.hpp"
#include "OutputStream.hpp"
#include "FilterOutputStream.hpp"

namespace __jni_impl::java::util
{
	class Formatter;
}
namespace __jni_impl::java::io
{
	class BufferedWriter;
}
namespace __jni_impl::java::io
{
	class OutputStreamWriter;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::java::nio::charset
{
	class Charset;
}
namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::java::io
{
	class PrintStream : public __jni_impl::java::io::FilterOutputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(jstring arg0);
		void __constructor(__jni_impl::java::io::OutputStream arg0, jboolean arg1, __jni_impl::java::nio::charset::Charset arg2);
		void __constructor(__jni_impl::java::io::OutputStream arg0, jboolean arg1, jstring arg2);
		void __constructor(jstring arg0, __jni_impl::java::nio::charset::Charset arg1);
		void __constructor(__jni_impl::java::io::File arg0, jstring arg1);
		void __constructor(__jni_impl::java::io::File arg0, __jni_impl::java::nio::charset::Charset arg1);
		void __constructor(__jni_impl::java::io::File arg0);
		void __constructor(__jni_impl::java::io::OutputStream arg0);
		void __constructor(__jni_impl::java::io::OutputStream arg0, jboolean arg1);
		
		// Methods
		void println(jstring arg0);
		void println(jobject arg0);
		void println(jfloat arg0);
		void println(jdouble arg0);
		void println(jcharArray arg0);
		void println(jboolean arg0);
		void println();
		void println(jchar arg0);
		void println(jint arg0);
		void println(jlong arg0);
		QAndroidJniObject append(jstring arg0);
		QAndroidJniObject append(jstring arg0, jint arg1, jint arg2);
		QAndroidJniObject append(jchar arg0);
		QAndroidJniObject format(__jni_impl::java::util::Locale arg0, jstring arg1, jobjectArray arg2);
		QAndroidJniObject format(jstring arg0, jobjectArray arg1);
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
		void print(jchar arg0);
		void print(jint arg0);
		void print(jdouble arg0);
		void print(jobject arg0);
		void print(jstring arg0);
		void print(jcharArray arg0);
		void print(jlong arg0);
		void print(jfloat arg0);
		void print(jboolean arg0);
		void flush();
		void close();
		jboolean checkError();
		QAndroidJniObject printf(__jni_impl::java::util::Locale arg0, jstring arg1, jobjectArray arg2);
		QAndroidJniObject printf(jstring arg0, jobjectArray arg1);
	};
} // namespace __jni_impl::java::io

#include "../util/Formatter.hpp"
#include "BufferedWriter.hpp"
#include "OutputStreamWriter.hpp"
#include "OutputStream.hpp"
#include "../nio/charset/Charset.hpp"
#include "File.hpp"
#include "../util/Locale.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void PrintStream::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.PrintStream",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	void PrintStream::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.PrintStream",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void PrintStream::__constructor(__jni_impl::java::io::OutputStream arg0, jboolean arg1, __jni_impl::java::nio::charset::Charset arg2)
	{
		__thiz = QAndroidJniObject(
			"java.io.PrintStream",
			"(Ljava/io/OutputStream;ZLjava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	void PrintStream::__constructor(__jni_impl::java::io::OutputStream arg0, jboolean arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"java.io.PrintStream",
			"(Ljava/io/OutputStream;ZLjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void PrintStream::__constructor(jstring arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.PrintStream",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void PrintStream::__constructor(__jni_impl::java::io::File arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.PrintStream",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void PrintStream::__constructor(__jni_impl::java::io::File arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.PrintStream",
			"(Ljava/io/File;Ljava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void PrintStream::__constructor(__jni_impl::java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.PrintStream",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object());
	}
	void PrintStream::__constructor(__jni_impl::java::io::OutputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.PrintStream",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object());
	}
	void PrintStream::__constructor(__jni_impl::java::io::OutputStream arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.PrintStream",
			"(Ljava/io/OutputStream;Z)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
	void PrintStream::println(jstring arg0)
	{
		__thiz.callMethod<void>(
			"println",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void PrintStream::println(jobject arg0)
	{
		__thiz.callMethod<void>(
			"println",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	void PrintStream::println(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"println",
			"(F)V",
			arg0);
	}
	void PrintStream::println(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"println",
			"(D)V",
			arg0);
	}
	void PrintStream::println(jcharArray arg0)
	{
		__thiz.callMethod<void>(
			"println",
			"([C)V",
			arg0);
	}
	void PrintStream::println(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"println",
			"(Z)V",
			arg0);
	}
	void PrintStream::println()
	{
		__thiz.callMethod<void>(
			"println",
			"()V");
	}
	void PrintStream::println(jchar arg0)
	{
		__thiz.callMethod<void>(
			"println",
			"(C)V",
			arg0);
	}
	void PrintStream::println(jint arg0)
	{
		__thiz.callMethod<void>(
			"println",
			"(I)V",
			arg0);
	}
	void PrintStream::println(jlong arg0)
	{
		__thiz.callMethod<void>(
			"println",
			"(J)V",
			arg0);
	}
	QAndroidJniObject PrintStream::append(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/PrintStream;",
			arg0);
	}
	QAndroidJniObject PrintStream::append(jstring arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/PrintStream;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject PrintStream::append(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(C)Ljava/io/PrintStream;",
			arg0);
	}
	QAndroidJniObject PrintStream::format(__jni_impl::java::util::Locale arg0, jstring arg1, jobjectArray arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	QAndroidJniObject PrintStream::format(jstring arg0, jobjectArray arg1)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;",
			arg0,
			arg1);
	}
	void PrintStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0);
	}
	void PrintStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2);
	}
	void PrintStream::print(jchar arg0)
	{
		__thiz.callMethod<void>(
			"print",
			"(C)V",
			arg0);
	}
	void PrintStream::print(jint arg0)
	{
		__thiz.callMethod<void>(
			"print",
			"(I)V",
			arg0);
	}
	void PrintStream::print(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"print",
			"(D)V",
			arg0);
	}
	void PrintStream::print(jobject arg0)
	{
		__thiz.callMethod<void>(
			"print",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	void PrintStream::print(jstring arg0)
	{
		__thiz.callMethod<void>(
			"print",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void PrintStream::print(jcharArray arg0)
	{
		__thiz.callMethod<void>(
			"print",
			"([C)V",
			arg0);
	}
	void PrintStream::print(jlong arg0)
	{
		__thiz.callMethod<void>(
			"print",
			"(J)V",
			arg0);
	}
	void PrintStream::print(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"print",
			"(F)V",
			arg0);
	}
	void PrintStream::print(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"print",
			"(Z)V",
			arg0);
	}
	void PrintStream::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V");
	}
	void PrintStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	jboolean PrintStream::checkError()
	{
		return __thiz.callMethod<jboolean>(
			"checkError",
			"()Z");
	}
	QAndroidJniObject PrintStream::printf(__jni_impl::java::util::Locale arg0, jstring arg1, jobjectArray arg2)
	{
		return __thiz.callObjectMethod(
			"printf",
			"(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	QAndroidJniObject PrintStream::printf(jstring arg0, jobjectArray arg1)
	{
		return __thiz.callObjectMethod(
			"printf",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;",
			arg0,
			arg1);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class PrintStream : public __jni_impl::java::io::PrintStream
	{
	public:
		PrintStream(QAndroidJniObject obj) { __thiz = obj; }
		PrintStream(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PrintStream(jstring arg0)
		{
			__constructor(
				arg0);
		}
		PrintStream(__jni_impl::java::io::OutputStream arg0, jboolean arg1, __jni_impl::java::nio::charset::Charset arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		PrintStream(__jni_impl::java::io::OutputStream arg0, jboolean arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		PrintStream(jstring arg0, __jni_impl::java::nio::charset::Charset arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PrintStream(__jni_impl::java::io::File arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PrintStream(__jni_impl::java::io::File arg0, __jni_impl::java::nio::charset::Charset arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PrintStream(__jni_impl::java::io::File arg0)
		{
			__constructor(
				arg0);
		}
		PrintStream(__jni_impl::java::io::OutputStream arg0)
		{
			__constructor(
				arg0);
		}
		PrintStream(__jni_impl::java::io::OutputStream arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::io

#endif // JAVA_IO_PRINTSTREAM

