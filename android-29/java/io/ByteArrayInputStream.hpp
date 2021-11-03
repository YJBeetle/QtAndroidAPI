#pragma once

#include "./InputStream.hpp"

class JByteArray;
namespace java::io
{
	class OutputStream;
}

namespace java::io
{
	class ByteArrayInputStream : public java::io::InputStream
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ByteArrayInputStream(const char *className, const char *sig, Ts...agv) : java::io::InputStream(className, sig, std::forward<Ts>(agv)...) {}
		ByteArrayInputStream(QAndroidJniObject obj);
		
		// Constructors
		ByteArrayInputStream(JByteArray arg0);
		ByteArrayInputStream(JByteArray arg0, jint arg1, jint arg2);
		
		// Methods
		jint available();
		void close();
		void mark(jint arg0);
		jboolean markSupported();
		jint read();
		jint read(JByteArray arg0, jint arg1, jint arg2);
		JByteArray readAllBytes();
		jint readNBytes(JByteArray arg0, jint arg1, jint arg2);
		void reset();
		jlong skip(jlong arg0);
		jlong transferTo(java::io::OutputStream arg0);
	};
} // namespace java::io

