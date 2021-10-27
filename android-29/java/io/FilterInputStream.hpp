#pragma once

#include "../../__JniBaseClass.hpp"
#include "./InputStream.hpp"

namespace java::io
{
	class InputStream;
}

namespace java::io
{
	class FilterInputStream : public java::io::InputStream
	{
	public:
		// Fields
		
		FilterInputStream(QAndroidJniObject obj);
		// Constructors
		FilterInputStream() = default;
		
		// Methods
		jint available();
		void close();
		void mark(jint arg0);
		jboolean markSupported();
		jint read();
		jint read(jbyteArray arg0);
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		void reset();
		jlong skip(jlong arg0);
	};
} // namespace java::io

