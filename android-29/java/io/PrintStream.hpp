#pragma once

#include "../../__JniBaseClass.hpp"
#include "./OutputStream.hpp"
#include "./FilterOutputStream.hpp"

namespace java::io
{
	class BufferedWriter;
}
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
	class OutputStreamWriter;
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
	class PrintStream : public java::io::FilterOutputStream
	{
	public:
		// Fields
		
		PrintStream(QAndroidJniObject obj);
		// Constructors
		PrintStream(java::io::File &arg0);
		PrintStream(java::io::OutputStream &arg0);
		PrintStream(jstring &arg0);
		PrintStream(const QString &arg0);
		PrintStream(java::io::File &arg0, jstring &arg1);
		PrintStream(java::io::File &arg0, const QString &arg1);
		PrintStream(java::io::File &arg0, java::nio::charset::Charset &arg1);
		PrintStream(java::io::OutputStream &arg0, jboolean &arg1);
		PrintStream(jstring &arg0, jstring &arg1);
		PrintStream(const QString &arg0, const QString &arg1);
		PrintStream(jstring &arg0, java::nio::charset::Charset &arg1);
		PrintStream(const QString &arg0, java::nio::charset::Charset &arg1);
		PrintStream(java::io::OutputStream &arg0, jboolean &arg1, jstring &arg2);
		PrintStream(java::io::OutputStream &arg0, jboolean &arg1, const QString &arg2);
		PrintStream(java::io::OutputStream &arg0, jboolean &arg1, java::nio::charset::Charset &arg2);
		PrintStream() = default;
		
		// Methods
		QAndroidJniObject append(jchar arg0);
		QAndroidJniObject append(jstring arg0);
		QAndroidJniObject append(const QString &arg0);
		QAndroidJniObject append(jstring arg0, jint arg1, jint arg2);
		QAndroidJniObject append(const QString &arg0, jint arg1, jint arg2);
		jboolean checkError();
		void close();
		void flush();
		QAndroidJniObject format(jstring arg0, jobjectArray arg1);
		QAndroidJniObject format(const QString &arg0, jobjectArray arg1);
		QAndroidJniObject format(java::util::Locale arg0, jstring arg1, jobjectArray arg2);
		QAndroidJniObject format(java::util::Locale arg0, const QString &arg1, jobjectArray arg2);
		void print(jcharArray arg0);
		void print(jboolean arg0);
		void print(jchar arg0);
		void print(jdouble arg0);
		void print(jfloat arg0);
		void print(jint arg0);
		void print(jobject arg0);
		void print(jstring arg0);
		void print(const QString &arg0);
		void print(jlong arg0);
		QAndroidJniObject printf(jstring arg0, jobjectArray arg1);
		QAndroidJniObject printf(const QString &arg0, jobjectArray arg1);
		QAndroidJniObject printf(java::util::Locale arg0, jstring arg1, jobjectArray arg2);
		QAndroidJniObject printf(java::util::Locale arg0, const QString &arg1, jobjectArray arg2);
		void println();
		void println(jcharArray arg0);
		void println(jboolean arg0);
		void println(jchar arg0);
		void println(jdouble arg0);
		void println(jfloat arg0);
		void println(jint arg0);
		void println(jobject arg0);
		void println(jstring arg0);
		void println(const QString &arg0);
		void println(jlong arg0);
		void write(jbyteArray arg0);
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
		void writeBytes(jbyteArray arg0);
	};
} // namespace java::io

