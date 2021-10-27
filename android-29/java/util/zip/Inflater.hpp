#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::nio
{
	class ByteBuffer;
}

namespace java::util::zip
{
	class Inflater : public __JniBaseClass
	{
	public:
		// Fields
		
		Inflater(QAndroidJniObject obj);
		// Constructors
		Inflater();
		Inflater(jboolean &arg0);
		
		// Methods
		void end();
		jboolean finished();
		jint getAdler();
		jlong getBytesRead();
		jlong getBytesWritten();
		jint getRemaining();
		jint getTotalIn();
		jint getTotalOut();
		jint inflate(jbyteArray arg0);
		jint inflate(java::nio::ByteBuffer arg0);
		jint inflate(jbyteArray arg0, jint arg1, jint arg2);
		jboolean needsDictionary();
		jboolean needsInput();
		void reset();
		void setDictionary(jbyteArray arg0);
		void setDictionary(java::nio::ByteBuffer arg0);
		void setDictionary(jbyteArray arg0, jint arg1, jint arg2);
		void setInput(jbyteArray arg0);
		void setInput(java::nio::ByteBuffer arg0);
		void setInput(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::util::zip

