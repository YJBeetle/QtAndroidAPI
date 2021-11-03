#pragma once

#include "./Writer.hpp"

class JCharArray;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit PipedWriter(const char *className, const char *sig, Ts...agv) : java::io::Writer(className, sig, std::forward<Ts>(agv)...) {}
		PipedWriter(QJniObject obj);
		
		// Constructors
		PipedWriter();
		PipedWriter(java::io::PipedReader arg0);
		
		// Methods
		void close();
		void connect(java::io::PipedReader arg0);
		void flush();
		void write(jint arg0);
		void write(JCharArray arg0, jint arg1, jint arg2);
	};
} // namespace java::io

