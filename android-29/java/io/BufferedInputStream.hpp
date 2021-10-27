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
	class BufferedInputStream : public java::io::FilterInputStream
	{
	public:
		// Fields
		
		BufferedInputStream(QAndroidJniObject obj);
		// Constructors
		BufferedInputStream(java::io::InputStream &arg0);
		BufferedInputStream(java::io::InputStream &arg0, jint &arg1);
		BufferedInputStream() = default;
		
		// Methods
		jint available();
		void close();
		void mark(jint arg0);
		jboolean markSupported();
		jint read();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		void reset();
		jlong skip(jlong arg0);
	};
} // namespace java::io

