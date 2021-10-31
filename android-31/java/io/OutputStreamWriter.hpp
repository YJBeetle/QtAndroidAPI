#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Writer.hpp"

namespace java::io
{
	class OutputStream;
}
namespace java::io
{
	class Writer;
}
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit OutputStreamWriter(const char *className, const char *sig, Ts...agv) : java::io::Writer(className, sig, std::forward<Ts>(agv)...) {}
		OutputStreamWriter(QAndroidJniObject obj);
		
		// Constructors
		OutputStreamWriter(java::io::OutputStream arg0);
		OutputStreamWriter(java::io::OutputStream arg0, jstring arg1);
		OutputStreamWriter(java::io::OutputStream arg0, java::nio::charset::Charset arg1);
		OutputStreamWriter(java::io::OutputStream arg0, java::nio::charset::CharsetEncoder arg1);
		
		// Methods
		java::io::Writer append(jstring arg0);
		java::io::Writer append(jstring arg0, jint arg1, jint arg2);
		void close();
		void flush();
		jstring getEncoding();
		void write(jint arg0);
		void write(jcharArray arg0, jint arg1, jint arg2);
		void write(jstring arg0, jint arg1, jint arg2);
	};
} // namespace java::io

