#pragma once

#include "../../__JniBaseClass.hpp"
#include "./InputStream.hpp"
#include "./FilterInputStream.hpp"

namespace java::io
{
	class InputStream;
}

namespace java::io
{
	class PushbackInputStream : public java::io::FilterInputStream
	{
	public:
		// Fields
		
		PushbackInputStream(QAndroidJniObject obj);
		// Constructors
		PushbackInputStream(java::io::InputStream &arg0);
		PushbackInputStream(java::io::InputStream &arg0, jint &arg1);
		PushbackInputStream() = default;
		
		// Methods
		jint available();
		void close();
		void mark(jint arg0);
		jboolean markSupported();
		jint read();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		void reset();
		jlong skip(jlong arg0);
		void unread(jbyteArray arg0);
		void unread(jint arg0);
		void unread(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::io

