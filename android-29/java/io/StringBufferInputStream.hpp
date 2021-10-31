#pragma once

#include "../../__JniBaseClass.hpp"
#include "./InputStream.hpp"


namespace java::io
{
	class StringBufferInputStream : public java::io::InputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StringBufferInputStream(const char *className, const char *sig, Ts...agv) : java::io::InputStream(className, sig, std::forward<Ts>(agv)...) {}
		StringBufferInputStream(QJniObject obj);
		
		// Constructors
		StringBufferInputStream(jstring arg0);
		
		// Methods
		jint available();
		jint read();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		void reset();
		jlong skip(jlong arg0);
	};
} // namespace java::io

