#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace java::nio
{
	class ByteBuffer;
}

namespace java::util::zip
{
	class Inflater : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Inflater(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Inflater(QJniObject obj);
		
		// Constructors
		Inflater();
		Inflater(jboolean arg0);
		
		// Methods
		void end();
		jboolean finished();
		jint getAdler();
		jlong getBytesRead();
		jlong getBytesWritten();
		jint getRemaining();
		jint getTotalIn();
		jint getTotalOut();
		jint inflate(JByteArray arg0);
		jint inflate(java::nio::ByteBuffer arg0);
		jint inflate(JByteArray arg0, jint arg1, jint arg2);
		jboolean needsDictionary();
		jboolean needsInput();
		void reset();
		void setDictionary(JByteArray arg0);
		void setDictionary(java::nio::ByteBuffer arg0);
		void setDictionary(JByteArray arg0, jint arg1, jint arg2);
		void setInput(JByteArray arg0);
		void setInput(java::nio::ByteBuffer arg0);
		void setInput(JByteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::util::zip

