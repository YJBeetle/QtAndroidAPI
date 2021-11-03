#pragma once

#include "../../JObject.hpp"
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrintStream(const char *className, const char *sig, Ts...agv) : java::io::FilterOutputStream(className, sig, std::forward<Ts>(agv)...) {}
		PrintStream(QAndroidJniObject obj);
		
		// Constructors
		PrintStream(java::io::File arg0);
		PrintStream(java::io::OutputStream arg0);
		PrintStream(jstring arg0);
		PrintStream(java::io::File arg0, jstring arg1);
		PrintStream(java::io::File arg0, java::nio::charset::Charset arg1);
		PrintStream(java::io::OutputStream arg0, jboolean arg1);
		PrintStream(jstring arg0, jstring arg1);
		PrintStream(jstring arg0, java::nio::charset::Charset arg1);
		PrintStream(java::io::OutputStream arg0, jboolean arg1, jstring arg2);
		PrintStream(java::io::OutputStream arg0, jboolean arg1, java::nio::charset::Charset arg2);
		
		// Methods
		java::io::PrintStream append(jchar arg0);
		java::io::PrintStream append(jstring arg0);
		java::io::PrintStream append(jstring arg0, jint arg1, jint arg2);
		jboolean checkError();
		void close();
		void flush();
		java::io::PrintStream format(jstring arg0, jobjectArray arg1);
		java::io::PrintStream format(java::util::Locale arg0, jstring arg1, jobjectArray arg2);
		void print(jcharArray arg0);
		void print(jboolean arg0);
		void print(jchar arg0);
		void print(jdouble arg0);
		void print(jfloat arg0);
		void print(jint arg0);
		void print(jobject arg0);
		void print(jstring arg0);
		void print(jlong arg0);
		java::io::PrintStream printf(jstring arg0, jobjectArray arg1);
		java::io::PrintStream printf(java::util::Locale arg0, jstring arg1, jobjectArray arg2);
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
		void write(jbyteArray arg0);
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
		void writeBytes(jbyteArray arg0);
	};
} // namespace java::io

