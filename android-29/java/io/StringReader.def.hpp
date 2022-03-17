#pragma once

#include "./Reader.def.hpp"

class JCharArray;
class JString;

namespace java::io
{
	class StringReader : public java::io::Reader
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StringReader(const char *className, const char *sig, Ts...agv) : java::io::Reader(className, sig, std::forward<Ts>(agv)...) {}
		StringReader(QAndroidJniObject obj) : java::io::Reader(obj) {}
		
		// Constructors
		StringReader(JString arg0);
		
		// Methods
		void close() const;
		void mark(jint arg0) const;
		jboolean markSupported() const;
		jint read() const;
		jint read(JCharArray arg0, jint arg1, jint arg2) const;
		jboolean ready() const;
		void reset() const;
		jlong skip(jlong arg0) const;
	};
} // namespace java::io

