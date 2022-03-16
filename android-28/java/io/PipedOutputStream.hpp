#pragma once

#include "./OutputStream.hpp"

class JByteArray;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PipedOutputStream(const char *className, const char *sig, Ts...agv) : java::io::OutputStream(className, sig, std::forward<Ts>(agv)...) {}
		PipedOutputStream(QAndroidJniObject obj) : java::io::OutputStream(obj) {}
		
		// Constructors
		PipedOutputStream();
		PipedOutputStream(java::io::PipedInputStream arg0);
		
		// Methods
		void close() const;
		void connect(java::io::PipedInputStream arg0) const;
		void flush() const;
		void write(jint arg0) const;
		void write(JByteArray arg0, jint arg1, jint arg2) const;
	};
} // namespace java::io

