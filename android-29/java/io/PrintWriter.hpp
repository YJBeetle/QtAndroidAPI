#pragma once

#include "./Writer.hpp"

class JCharArray;
class JObjectArray;
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
	class PrintWriter : public java::io::Writer
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrintWriter(const char *className, const char *sig, Ts...agv) : java::io::Writer(className, sig, std::forward<Ts>(agv)...) {}
		PrintWriter(QAndroidJniObject obj);
		
		// Constructors
		PrintWriter(java::io::File arg0);
		PrintWriter(java::io::OutputStream arg0);
		PrintWriter(java::io::Writer arg0);
		PrintWriter(JString arg0);
		PrintWriter(java::io::File arg0, JString arg1);
		PrintWriter(java::io::File arg0, java::nio::charset::Charset arg1);
		PrintWriter(java::io::OutputStream arg0, jboolean arg1);
		PrintWriter(java::io::Writer arg0, jboolean arg1);
		PrintWriter(JString arg0, JString arg1);
		PrintWriter(JString arg0, java::nio::charset::Charset arg1);
		PrintWriter(java::io::OutputStream arg0, jboolean arg1, java::nio::charset::Charset arg2);
		
		// Methods
		java::io::PrintWriter append(jchar arg0) const;
		java::io::PrintWriter append(JString arg0) const;
		java::io::PrintWriter append(JString arg0, jint arg1, jint arg2) const;
		jboolean checkError() const;
		void close() const;
		void flush() const;
		java::io::PrintWriter format(JString arg0, JObjectArray arg1) const;
		java::io::PrintWriter format(java::util::Locale arg0, JString arg1, JObjectArray arg2) const;
		void print(JCharArray arg0) const;
		void print(jboolean arg0) const;
		void print(jchar arg0) const;
		void print(jdouble arg0) const;
		void print(jfloat arg0) const;
		void print(jint arg0) const;
		void print(JObject arg0) const;
		void print(JString arg0) const;
		void print(jlong arg0) const;
		java::io::PrintWriter printf(JString arg0, JObjectArray arg1) const;
		java::io::PrintWriter printf(java::util::Locale arg0, JString arg1, JObjectArray arg2) const;
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
		void write(JCharArray arg0) const;
		void write(jint arg0) const;
		void write(JString arg0) const;
		void write(JCharArray arg0, jint arg1, jint arg2) const;
		void write(JString arg0, jint arg1, jint arg2) const;
	};
} // namespace java::io

