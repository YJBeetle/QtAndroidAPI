#pragma once

#include "./FilterReader.hpp"

class JCharArray;
namespace java::io
{
	class Reader;
}

namespace java::io
{
	class PushbackReader : public java::io::FilterReader
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PushbackReader(const char *className, const char *sig, Ts...agv) : java::io::FilterReader(className, sig, std::forward<Ts>(agv)...) {}
		PushbackReader(QAndroidJniObject obj);
		
		// Constructors
		PushbackReader(java::io::Reader arg0);
		PushbackReader(java::io::Reader arg0, jint arg1);
		
		// Methods
		void close();
		void mark(jint arg0);
		jboolean markSupported();
		jint read();
		jint read(JCharArray arg0, jint arg1, jint arg2);
		jboolean ready();
		void reset();
		jlong skip(jlong arg0);
		void unread(JCharArray arg0);
		void unread(jint arg0);
		void unread(JCharArray arg0, jint arg1, jint arg2);
	};
} // namespace java::io

