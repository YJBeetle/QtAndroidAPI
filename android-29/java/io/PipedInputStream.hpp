#pragma once

#include "../../__JniBaseClass.hpp"
#include "./InputStream.hpp"

namespace java::io
{
	class PipedOutputStream;
}
namespace java::lang
{
	class Thread;
}

namespace java::io
{
	class PipedInputStream : public java::io::InputStream
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PipedInputStream(const char *className, const char *sig, Ts...agv) : java::io::InputStream(className, sig, std::forward<Ts>(agv)...) {}
		PipedInputStream(QAndroidJniObject obj);
		
		// Constructors
		PipedInputStream();
		PipedInputStream(jint arg0);
		PipedInputStream(java::io::PipedOutputStream arg0);
		PipedInputStream(java::io::PipedOutputStream arg0, jint arg1);
		
		// Methods
		jint available();
		void close();
		void connect(java::io::PipedOutputStream arg0);
		jint read();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::io

