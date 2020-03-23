#pragma once

#ifndef JAVA_IO_PRINTWRITER
#define JAVA_IO_PRINTWRITER

#include "Writer.hpp"

namespace __jni_impl::java::io
{
	class Writer;
}
namespace __jni_impl::java::util
{
	class Formatter;
}
namespace __jni_impl::java::io
{
	class PrintStream;
}
namespace __jni_impl::java::nio::charset
{
	class Charset;
}
namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::java::io
{
	class PrintWriter : public __jni_impl::java::io::Writer
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(jstring arg0, __jni_impl::java::nio::charset::Charset arg1);
		void __constructor(__jni_impl::java::io::File arg0);
		void __constructor(__jni_impl::java::io::File arg0, jstring arg1);
		void __constructor(__jni_impl::java::io::File arg0, __jni_impl::java::nio::charset::Charset arg1);
		void __constructor(__jni_impl::java::io::Writer arg0);
		void __constructor(__jni_impl::java::io::Writer arg0, jboolean arg1);
		void __constructor(__jni_impl::java::io::OutputStream arg0, jboolean arg1, __jni_impl::java::nio::charset::Charset arg2);
		void __constructor(__jni_impl::java::io::OutputStream arg0, jboolean arg1);
		void __constructor(__jni_impl::java::io::OutputStream arg0);
		
		// Methods
		void println(jcharArray arg0);
		void println(jdouble arg0);
		void println(jfloat arg0);
		void println(jstring arg0);
		void println(jobject arg0);
		void println(jint arg0);
		void println(jchar arg0);
		void println(jboolean arg0);
		void println();
		void println(jlong arg0);
		QAndroidJniObject append(jstring arg0, jint arg1, jint arg2);
		QAndroidJniObject append(jstring arg0);
		QAndroidJniObject append(jchar arg0);
		QAndroidJniObject format(__jni_impl::java::util::Locale arg0, jstring arg1, jobjectArray arg2);
		QAndroidJniObject format(jstring arg0, jobjectArray arg1);
		void write(jint arg0);
		void write(jstring arg0, jint arg1, jint arg2);
		void write(jcharArray arg0);
		void write(jcharArray arg0, jint arg1, jint arg2);
		void write(jstring arg0);
		void print(jfloat arg0);
		void print(jlong arg0);
		void print(jint arg0);
		void print(jchar arg0);
		void print(jboolean arg0);
		void print(jobject arg0);
		void print(jstring arg0);
		void print(jcharArray arg0);
		void print(jdouble arg0);
		void flush();
		void close();
		jboolean checkError();
		QAndroidJniObject printf(__jni_impl::java::util::Locale arg0, jstring arg1, jobjectArray arg2);
		QAndroidJniObject printf(jstring arg0, jobjectArray arg1);
	};
} // namespace __jni_impl::java::io

#include "Writer.hpp"
#include "../util/Formatter.hpp"
#include "PrintStream.hpp"
#include "../nio/charset/Charset.hpp"
#include "File.hpp"
#include "OutputStream.hpp"
#include "../util/Locale.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void PrintWriter::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.PrintWriter",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void PrintWriter::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.PrintWriter",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	void PrintWriter::__constructor(jstring arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.PrintWriter",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void PrintWriter::__constructor(__jni_impl::java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.PrintWriter",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object());
	}
	void PrintWriter::__constructor(__jni_impl::java::io::File arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.PrintWriter",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void PrintWriter::__constructor(__jni_impl::java::io::File arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.PrintWriter",
			"(Ljava/io/File;Ljava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void PrintWriter::__constructor(__jni_impl::java::io::Writer arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.PrintWriter",
			"(Ljava/io/Writer;)V",
			arg0.__jniObject().object());
	}
	void PrintWriter::__constructor(__jni_impl::java::io::Writer arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.PrintWriter",
			"(Ljava/io/Writer;Z)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void PrintWriter::__constructor(__jni_impl::java::io::OutputStream arg0, jboolean arg1, __jni_impl::java::nio::charset::Charset arg2)
	{
		__thiz = QAndroidJniObject(
			"java.io.PrintWriter",
			"(Ljava/io/OutputStream;ZLjava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	void PrintWriter::__constructor(__jni_impl::java::io::OutputStream arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.PrintWriter",
			"(Ljava/io/OutputStream;Z)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void PrintWriter::__constructor(__jni_impl::java::io::OutputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.PrintWriter",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void PrintWriter::println(jcharArray arg0)
	{
		__thiz.callMethod<void>(
			"println",
			"([C)V",
			arg0);
	}
	void PrintWriter::println(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"println",
			"(D)V",
			arg0);
	}
	void PrintWriter::println(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"println",
			"(F)V",
			arg0);
	}
	void PrintWriter::println(jstring arg0)
	{
		__thiz.callMethod<void>(
			"println",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void PrintWriter::println(jobject arg0)
	{
		__thiz.callMethod<void>(
			"println",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	void PrintWriter::println(jint arg0)
	{
		__thiz.callMethod<void>(
			"println",
			"(I)V",
			arg0);
	}
	void PrintWriter::println(jchar arg0)
	{
		__thiz.callMethod<void>(
			"println",
			"(C)V",
			arg0);
	}
	void PrintWriter::println(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"println",
			"(Z)V",
			arg0);
	}
	void PrintWriter::println()
	{
		__thiz.callMethod<void>(
			"println",
			"()V");
	}
	void PrintWriter::println(jlong arg0)
	{
		__thiz.callMethod<void>(
			"println",
			"(J)V",
			arg0);
	}
	QAndroidJniObject PrintWriter::append(jstring arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/PrintWriter;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject PrintWriter::append(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/PrintWriter;",
			arg0);
	}
	QAndroidJniObject PrintWriter::append(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(C)Ljava/io/PrintWriter;",
			arg0);
	}
	QAndroidJniObject PrintWriter::format(__jni_impl::java::util::Locale arg0, jstring arg1, jobjectArray arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	QAndroidJniObject PrintWriter::format(jstring arg0, jobjectArray arg1)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;",
			arg0,
			arg1);
	}
	void PrintWriter::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0);
	}
	void PrintWriter::write(jstring arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2);
	}
	void PrintWriter::write(jcharArray arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"([C)V",
			arg0);
	}
	void PrintWriter::write(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([CII)V",
			arg0,
			arg1,
			arg2);
	}
	void PrintWriter::write(jstring arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void PrintWriter::print(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"print",
			"(F)V",
			arg0);
	}
	void PrintWriter::print(jlong arg0)
	{
		__thiz.callMethod<void>(
			"print",
			"(J)V",
			arg0);
	}
	void PrintWriter::print(jint arg0)
	{
		__thiz.callMethod<void>(
			"print",
			"(I)V",
			arg0);
	}
	void PrintWriter::print(jchar arg0)
	{
		__thiz.callMethod<void>(
			"print",
			"(C)V",
			arg0);
	}
	void PrintWriter::print(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"print",
			"(Z)V",
			arg0);
	}
	void PrintWriter::print(jobject arg0)
	{
		__thiz.callMethod<void>(
			"print",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	void PrintWriter::print(jstring arg0)
	{
		__thiz.callMethod<void>(
			"print",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void PrintWriter::print(jcharArray arg0)
	{
		__thiz.callMethod<void>(
			"print",
			"([C)V",
			arg0);
	}
	void PrintWriter::print(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"print",
			"(D)V",
			arg0);
	}
	void PrintWriter::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V");
	}
	void PrintWriter::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	jboolean PrintWriter::checkError()
	{
		return __thiz.callMethod<jboolean>(
			"checkError",
			"()Z");
	}
	QAndroidJniObject PrintWriter::printf(__jni_impl::java::util::Locale arg0, jstring arg1, jobjectArray arg2)
	{
		return __thiz.callObjectMethod(
			"printf",
			"(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	QAndroidJniObject PrintWriter::printf(jstring arg0, jobjectArray arg1)
	{
		return __thiz.callObjectMethod(
			"printf",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;",
			arg0,
			arg1);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class PrintWriter : public __jni_impl::java::io::PrintWriter
	{
	public:
		PrintWriter(QAndroidJniObject obj) { __thiz = obj; }
		PrintWriter(jstring arg0)
		{
			__constructor(
				arg0);
		}
		PrintWriter(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PrintWriter(jstring arg0, __jni_impl::java::nio::charset::Charset arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PrintWriter(__jni_impl::java::io::File arg0)
		{
			__constructor(
				arg0);
		}
		PrintWriter(__jni_impl::java::io::File arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PrintWriter(__jni_impl::java::io::File arg0, __jni_impl::java::nio::charset::Charset arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PrintWriter(__jni_impl::java::io::Writer arg0)
		{
			__constructor(
				arg0);
		}
		PrintWriter(__jni_impl::java::io::Writer arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PrintWriter(__jni_impl::java::io::OutputStream arg0, jboolean arg1, __jni_impl::java::nio::charset::Charset arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		PrintWriter(__jni_impl::java::io::OutputStream arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PrintWriter(__jni_impl::java::io::OutputStream arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

#endif // JAVA_IO_PRINTWRITER

