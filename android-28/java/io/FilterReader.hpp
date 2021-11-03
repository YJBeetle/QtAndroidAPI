#pragma once

#include "./Reader.hpp"

class JCharArray;
namespace java::io
{
	class Reader;
}

namespace java::io
{
	class FilterReader : public java::io::Reader
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FilterReader(const char *className, const char *sig, Ts...agv) : java::io::Reader(className, sig, std::forward<Ts>(agv)...) {}
		FilterReader(QAndroidJniObject obj);
		
		// Constructors
		
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

