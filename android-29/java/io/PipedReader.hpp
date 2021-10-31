#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Reader.hpp"

namespace java::io
{
	class PipedWriter;
}
namespace java::lang
{
	class Thread;
}

namespace java::io
{
	class PipedReader : public java::io::Reader
	{
	public:
		// Fields
		
		PipedReader(QAndroidJniObject obj);
		// Constructors
		PipedReader();
		PipedReader(jint arg0);
		PipedReader(java::io::PipedWriter arg0);
		PipedReader(java::io::PipedWriter arg0, jint arg1);
		
		// Methods
		void close();
		void connect(java::io::PipedWriter arg0);
		jint read();
		jint read(jcharArray arg0, jint arg1, jint arg2);
		jboolean ready();
	};
} // namespace java::io

