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
		PushbackReader(QAndroidJniObject obj) : java::io::FilterReader(obj) {}
		
		// Constructors
		PushbackReader(java::io::Reader arg0);
		PushbackReader(java::io::Reader arg0, jint arg1);
		
		// Methods
		void close() const;
		void mark(jint arg0) const;
		jboolean markSupported() const;
		jint read() const;
		jint read(JCharArray arg0, jint arg1, jint arg2) const;
		jboolean ready() const;
		void reset() const;
		jlong skip(jlong arg0) const;
		void unread(JCharArray arg0) const;
		void unread(jint arg0) const;
		void unread(JCharArray arg0, jint arg1, jint arg2) const;
	};
} // namespace java::io

