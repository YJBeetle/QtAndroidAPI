#pragma once

#include "./InputStream.def.hpp"

class JByteArray;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit PipedInputStream(const char *className, const char *sig, Ts...agv) : java::io::InputStream(className, sig, std::forward<Ts>(agv)...) {}
		PipedInputStream(QJniObject obj) : java::io::InputStream(obj) {}
		
		// Constructors
		PipedInputStream();
		PipedInputStream(jint arg0);
		PipedInputStream(java::io::PipedOutputStream arg0);
		PipedInputStream(java::io::PipedOutputStream arg0, jint arg1);
		
		// Methods
		jint available() const;
		void close() const;
		void connect(java::io::PipedOutputStream arg0) const;
		jint read() const;
		jint read(JByteArray arg0, jint arg1, jint arg2) const;
	};
} // namespace java::io

