#pragma once

#include "./Reader.hpp"

class JCharArray;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit PipedReader(const char *className, const char *sig, Ts...agv) : java::io::Reader(className, sig, std::forward<Ts>(agv)...) {}
		PipedReader(QJniObject obj);
		
		// Constructors
		PipedReader();
		PipedReader(jint arg0);
		PipedReader(java::io::PipedWriter arg0);
		PipedReader(java::io::PipedWriter arg0, jint arg1);
		
		// Methods
		void close();
		void connect(java::io::PipedWriter arg0);
		jint read();
		jint read(JCharArray arg0, jint arg1, jint arg2);
		jboolean ready();
	};
} // namespace java::io

