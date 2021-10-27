#pragma once

#include "../../__JniBaseClass.hpp"
#include "./InputStream.hpp"


namespace java::io
{
	class StringBufferInputStream : public java::io::InputStream
	{
	public:
		// Fields
		
		StringBufferInputStream(QAndroidJniObject obj);
		// Constructors
		StringBufferInputStream(jstring &arg0);
		StringBufferInputStream(const QString &arg0);
		StringBufferInputStream() = default;
		
		// Methods
		jint available();
		jint read();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		void reset();
		jlong skip(jlong arg0);
	};
} // namespace java::io

