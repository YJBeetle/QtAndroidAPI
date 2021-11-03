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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PipedReader(const char *className, const char *sig, Ts...agv) : java::io::Reader(className, sig, std::forward<Ts>(agv)...) {}
		PipedReader(QAndroidJniObject obj);
		
		// Constructors
		PipedReader();
		PipedReader(jint arg0);
		PipedReader(java::io::PipedWriter arg0);
		PipedReader(java::io::PipedWriter arg0, jint arg1);
		
		// Methods
		void close() const;
		void connect(java::io::PipedWriter arg0) const;
		jint read() const;
		jint read(JCharArray arg0, jint arg1, jint arg2) const;
		jboolean ready() const;
	};
} // namespace java::io

