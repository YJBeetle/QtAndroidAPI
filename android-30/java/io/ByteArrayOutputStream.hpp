#pragma once

#include "./OutputStream.hpp"

class JByteArray;
namespace java::io
{
	class OutputStream;
}
class JString;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ByteArrayOutputStream(const char *className, const char *sig, Ts...agv) : java::io::OutputStream(className, sig, std::forward<Ts>(agv)...) {}
		ByteArrayOutputStream(QAndroidJniObject obj);
		
		// Constructors
		ByteArrayOutputStream();
		ByteArrayOutputStream(jint arg0);
		
		// Methods
		void close();
		void reset();
		jint size();
		JByteArray toByteArray();
		JString toString();
		JString toString(jint arg0);
		JString toString(JString arg0);
		JString toString(java::nio::charset::Charset arg0);
		void write(jint arg0);
		void write(JByteArray arg0, jint arg1, jint arg2);
		void writeBytes(JByteArray arg0);
		void writeTo(java::io::OutputStream arg0);
	};
} // namespace java::io

