#pragma once

#include "../../__JniBaseClass.hpp"
#include "./InputStream.hpp"

namespace java::io
{
	class InputStream;
}

namespace java::io
{
	class SequenceInputStream : public java::io::InputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SequenceInputStream(const char *className, const char *sig, Ts...agv) : java::io::InputStream(className, sig, std::forward<Ts>(agv)...) {}
		SequenceInputStream(QJniObject obj);
		
		// Constructors
		SequenceInputStream(__JniBaseClass arg0);
		SequenceInputStream(java::io::InputStream arg0, java::io::InputStream arg1);
		
		// Methods
		jint available();
		void close();
		jint read();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::io

