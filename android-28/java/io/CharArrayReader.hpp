#pragma once

#include "./Reader.hpp"

class JCharArray;

namespace java::io
{
	class CharArrayReader : public java::io::Reader
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CharArrayReader(const char *className, const char *sig, Ts...agv) : java::io::Reader(className, sig, std::forward<Ts>(agv)...) {}
		CharArrayReader(QAndroidJniObject obj);
		
		// Constructors
		CharArrayReader(JCharArray arg0);
		CharArrayReader(JCharArray arg0, jint arg1, jint arg2);
		
		// Methods
		void close();
		void mark(jint arg0);
		jboolean markSupported();
		jint read();
		jint read(JCharArray arg0, jint arg1, jint arg2);
		jboolean ready();
		void reset();
		jlong skip(jlong arg0);
	};
} // namespace java::io

