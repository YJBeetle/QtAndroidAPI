#pragma once

#include "../../__JniBaseClass.hpp"
#include "./OutputStream.hpp"

namespace java::io
{
	class OutputStream;
}
namespace java::nio::charset
{
	class Charset;
}

namespace java::io
{
	class ByteArrayOutputStream : public java::io::OutputStream
	{
	public:
		// Fields
		
		ByteArrayOutputStream(QAndroidJniObject obj);
		// Constructors
		ByteArrayOutputStream();
		ByteArrayOutputStream(jint arg0);
		
		// Methods
		void close();
		void reset();
		jint size();
		jbyteArray toByteArray();
		jstring toString();
		jstring toString(jint arg0);
		jstring toString(jstring arg0);
		jstring toString(java::nio::charset::Charset arg0);
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
		void writeBytes(jbyteArray arg0);
		void writeTo(java::io::OutputStream arg0);
	};
} // namespace java::io

