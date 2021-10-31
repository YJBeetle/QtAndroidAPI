#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../java/io/FilterInputStream.hpp"

namespace java::io
{
	class InputStream;
}

namespace android::util
{
	class Base64InputStream : public java::io::FilterInputStream
	{
	public:
		// Fields
		
		Base64InputStream(QAndroidJniObject obj);
		// Constructors
		Base64InputStream(java::io::InputStream arg0, jint arg1);
		Base64InputStream() = default;
		
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
} // namespace android::util

