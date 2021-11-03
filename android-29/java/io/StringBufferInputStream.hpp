#pragma once

#include "./InputStream.hpp"

class JByteArray;
class JString;

namespace java::io
{
	class StringBufferInputStream : public java::io::InputStream
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StringBufferInputStream(const char *className, const char *sig, Ts...agv) : java::io::InputStream(className, sig, std::forward<Ts>(agv)...) {}
		StringBufferInputStream(QAndroidJniObject obj);
		
		// Constructors
		StringBufferInputStream(JString arg0);
		
		// Methods
		jint available() const;
		jint read() const;
		jint read(JByteArray arg0, jint arg1, jint arg2) const;
		void reset() const;
		jlong skip(jlong arg0) const;
	};
} // namespace java::io

