#pragma once

#include "./FilterOutputStream.def.hpp"

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
		PrintStream(QJniObject obj) : java::io::FilterOutputStream(obj) {}
		
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
		java::io::PrintStream append(jchar arg0) const;
		java::io::PrintStream append(JString arg0) const;
		java::io::PrintStream append(JString arg0, jint arg1, jint arg2) const;
		jboolean checkError() const;
		void close() const;
		void flush() const;
		java::io::PrintStream format(JString arg0, JObjectArray arg1) const;
		java::io::PrintStream format(java::util::Locale arg0, JString arg1, JObjectArray arg2) const;
		void print(JCharArray arg0) const;
		void print(jboolean arg0) const;
		void print(jchar arg0) const;
		void print(jdouble arg0) const;
		void print(jfloat arg0) const;
		void print(jint arg0) const;
		void print(JObject arg0) const;
		void print(JString arg0) const;
		void print(jlong arg0) const;
		java::io::PrintStream printf(JString arg0, JObjectArray arg1) const;
		java::io::PrintStream printf(java::util::Locale arg0, JString arg1, JObjectArray arg2) const;
		void println() const;
		void println(JCharArray arg0) const;
		void println(jboolean arg0) const;
		void println(jchar arg0) const;
		void println(jdouble arg0) const;
		void println(jfloat arg0) const;
		void println(jint arg0) const;
		void println(JObject arg0) const;
		void println(JString arg0) const;
		void println(jlong arg0) const;
		void write(JByteArray arg0) const;
		void write(jint arg0) const;
		void write(JByteArray arg0, jint arg1, jint arg2) const;
		void writeBytes(JByteArray arg0) const;
	};
} // namespace java::io

