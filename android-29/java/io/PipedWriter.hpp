#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Writer.hpp"

namespace java::io
{
	class PipedReader;
}

namespace java::io
{
	class PipedWriter : public java::io::Writer
	{
	public:
		// Fields
		
		PipedWriter(QAndroidJniObject obj);
		// Constructors
		PipedWriter();
		PipedWriter(java::io::PipedReader &arg0);
		
		// Methods
		void close();
		void connect(java::io::PipedReader arg0);
		void flush();
		void write(jint arg0);
		void write(jcharArray arg0, jint arg1, jint arg2);
	};
} // namespace java::io

