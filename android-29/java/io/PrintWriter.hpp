#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Writer.hpp"

namespace java::io
{
	class File;
}
namespace java::io
{
	class OutputStream;
}
namespace java::io
{
	class PrintStream;
}
namespace java::io
{
	class Writer;
}
namespace java::nio::charset
{
	class Charset;
}
namespace java::util
{
	class Formatter;
}
namespace java::util
{
	class Locale;
}

namespace java::io
{
	class PrintWriter : public java::io::Writer
	{
	public:
		// Fields
		
		PrintWriter(QAndroidJniObject obj);
		// Constructors
		PrintWriter(java::io::File arg0);
		PrintWriter(java::io::OutputStream arg0);
		PrintWriter(java::io::Writer arg0);
		PrintWriter(jstring arg0);
		PrintWriter(java::io::File arg0, jstring arg1);
		PrintWriter(java::io::File arg0, java::nio::charset::Charset arg1);
		PrintWriter(java::io::OutputStream arg0, jboolean arg1);
		PrintWriter(java::io::Writer arg0, jboolean arg1);
		PrintWriter(jstring arg0, jstring arg1);
		PrintWriter(jstring arg0, java::nio::charset::Charset arg1);
		PrintWriter(java::io::OutputStream arg0, jboolean arg1, java::nio::charset::Charset arg2);
		PrintWriter() = default;
		
		// Methods
		QAndroidJniObject append(jchar arg0);
		QAndroidJniObject append(jstring arg0);
		QAndroidJniObject append(jstring arg0, jint arg1, jint arg2);
		jboolean checkError();
		void close();
		void flush();
		QAndroidJniObject format(jstring arg0, jobjectArray arg1);
		QAndroidJniObject format(java::util::Locale arg0, jstring arg1, jobjectArray arg2);
		void print(jcharArray arg0);
		void print(jboolean arg0);
		void print(jchar arg0);
		void print(jdouble arg0);
		void print(jfloat arg0);
		void print(jint arg0);
		void print(jobject arg0);
		void print(jstring arg0);
		void print(jlong arg0);
		QAndroidJniObject printf(jstring arg0, jobjectArray arg1);
		QAndroidJniObject printf(java::util::Locale arg0, jstring arg1, jobjectArray arg2);
		void println();
		void println(jcharArray arg0);
		void println(jboolean arg0);
		void println(jchar arg0);
		void println(jdouble arg0);
		void println(jfloat arg0);
		void println(jint arg0);
		void println(jobject arg0);
		void println(jstring arg0);
		void println(jlong arg0);
		void write(jcharArray arg0);
		void write(jint arg0);
		void write(jstring arg0);
		void write(jcharArray arg0, jint arg1, jint arg2);
		void write(jstring arg0, jint arg1, jint arg2);
	};
} // namespace java::io

