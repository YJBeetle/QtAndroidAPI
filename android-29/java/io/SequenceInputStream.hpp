#pragma once

#include "../../__JniBaseClass.hpp"
#include "./InputStream.hpp"

namespace java::io
{
	class InputStream;
}

namespace java::io
{
	class SequenceInputStream : public java::io::InputStream
	{
	public:
		// Fields
		
		SequenceInputStream(QAndroidJniObject obj);
		// Constructors
		SequenceInputStream(__JniBaseClass &arg0);
		SequenceInputStream(java::io::InputStream &arg0, java::io::InputStream &arg1);
		SequenceInputStream() = default;
		
		// Methods
		jint available();
		void close();
		jint read();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::io

