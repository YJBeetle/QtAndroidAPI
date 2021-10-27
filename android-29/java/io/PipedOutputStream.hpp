#pragma once

#include "../../__JniBaseClass.hpp"
#include "./OutputStream.hpp"

namespace java::io
{
	class PipedInputStream;
}

namespace java::io
{
	class PipedOutputStream : public java::io::OutputStream
	{
	public:
		// Fields
		
		PipedOutputStream(QAndroidJniObject obj);
		// Constructors
		PipedOutputStream();
		PipedOutputStream(java::io::PipedInputStream &arg0);
		
		// Methods
		void close();
		void connect(java::io::PipedInputStream arg0);
		void flush();
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::io

