#pragma once

#include "../../JObject.hpp"
#include "./Reader.hpp"


namespace java::io
{
	class StringReader : public java::io::Reader
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StringReader(const char *className, const char *sig, Ts...agv) : java::io::Reader(className, sig, std::forward<Ts>(agv)...) {}
		StringReader(QAndroidJniObject obj);
		
		// Constructors
		StringReader(jstring arg0);
		
		// Methods
		void close();
		void mark(jint arg0);
		jboolean markSupported();
		jint read();
		jint read(jcharArray arg0, jint arg1, jint arg2);
		jboolean ready();
		void reset();
		jlong skip(jlong arg0);
	};
} // namespace java::io

