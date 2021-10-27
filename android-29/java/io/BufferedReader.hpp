#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Reader.hpp"

namespace java::io
{
	class Reader;
}

namespace java::io
{
	class BufferedReader : public java::io::Reader
	{
	public:
		// Fields
		
		BufferedReader(QAndroidJniObject obj);
		// Constructors
		BufferedReader(java::io::Reader &arg0);
		BufferedReader(java::io::Reader &arg0, jint &arg1);
		BufferedReader() = default;
		
		// Methods
		void close();
		QAndroidJniObject lines();
		void mark(jint arg0);
		jboolean markSupported();
		jint read();
		jint read(jcharArray arg0, jint arg1, jint arg2);
		jstring readLine();
		jboolean ready();
		void reset();
		jlong skip(jlong arg0);
	};
} // namespace java::io

