#pragma once

#include "./Writer.hpp"

class JCharArray;
namespace java::io
{
	class OutputStream;
}
namespace java::io
{
	class Writer;
}
class JString;
class JString;
namespace java::nio::charset
{
	class Charset;
}
namespace java::nio::charset
{
	class CharsetEncoder;
}

namespace java::io
{
	class OutputStreamWriter : public java::io::Writer
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit OutputStreamWriter(const char *className, const char *sig, Ts...agv) : java::io::Writer(className, sig, std::forward<Ts>(agv)...) {}
		OutputStreamWriter(QJniObject obj);
		
		// Constructors
		OutputStreamWriter(java::io::OutputStream arg0);
		OutputStreamWriter(java::io::OutputStream arg0, JString arg1);
		OutputStreamWriter(java::io::OutputStream arg0, java::nio::charset::Charset arg1);
		OutputStreamWriter(java::io::OutputStream arg0, java::nio::charset::CharsetEncoder arg1);
		
		// Methods
		java::io::Writer append(JString arg0) const;
		java::io::Writer append(JString arg0, jint arg1, jint arg2) const;
		void close() const;
		void flush() const;
		JString getEncoding() const;
		void write(jint arg0) const;
		void write(JCharArray arg0, jint arg1, jint arg2) const;
		void write(JString arg0, jint arg1, jint arg2) const;
	};
} // namespace java::io

