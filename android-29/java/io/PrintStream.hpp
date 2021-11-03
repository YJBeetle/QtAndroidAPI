#pragma once

#include "./FilterOutputStream.hpp"

class JByteArray;
class JCharArray;
class JObjectArray;
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
class JString;
class JObject;
class JString;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit PrintStream(const char *className, const char *sig, Ts...agv) : java::io::FilterOutputStream(className, sig, std::forward<Ts>(agv)...) {}
		PrintStream(QJniObject obj);
		
		// Constructors
		PrintStream(java::io::File arg0);
		PrintStream(java::io::OutputStream arg0);
		PrintStream(JString arg0);
		PrintStream(java::io::File arg0, JString arg1);
		PrintStream(java::io::File arg0, java::nio::charset::Charset arg1);
		PrintStream(java::io::OutputStream arg0, jboolean arg1);
		PrintStream(JString arg0, JString arg1);
		PrintStream(JString arg0, java::nio::charset::Charset arg1);
		PrintStream(java::io::OutputStream arg0, jboolean arg1, JString arg2);
		PrintStream(java::io::OutputStream arg0, jboolean arg1, java::nio::charset::Charset arg2);
		
		// Methods
		java::io::PrintStream append(jchar arg0);
		java::io::PrintStream append(JString arg0);
		java::io::PrintStream append(JString arg0, jint arg1, jint arg2);
		jboolean checkError();
		void close();
		void flush();
		java::io::PrintStream format(JString arg0, JObjectArray arg1);
		java::io::PrintStream format(java::util::Locale arg0, JString arg1, JObjectArray arg2);
		void print(JCharArray arg0);
		void print(jboolean arg0);
		void print(jchar arg0);
		void print(jdouble arg0);
		void print(jfloat arg0);
		void print(jint arg0);
		void print(JObject arg0);
		void print(JString arg0);
		void print(jlong arg0);
		java::io::PrintStream printf(JString arg0, JObjectArray arg1);
		java::io::PrintStream printf(java::util::Locale arg0, JString arg1, JObjectArray arg2);
		void println();
		void println(JCharArray arg0);
		void println(jboolean arg0);
		void println(jchar arg0);
		void println(jdouble arg0);
		void println(jfloat arg0);
		void println(jint arg0);
		void println(JObject arg0);
		void println(JString arg0);
		void println(jlong arg0);
		void write(JByteArray arg0);
		void write(jint arg0);
		void write(JByteArray arg0, jint arg1, jint arg2);
		void writeBytes(JByteArray arg0);
	};
} // namespace java::io

