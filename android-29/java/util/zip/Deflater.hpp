#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace java::nio
{
	class ByteBuffer;
}

namespace java::util::zip
{
	class Deflater : public JObject
	{
	public:
		// Fields
		static jint BEST_COMPRESSION();
		static jint BEST_SPEED();
		static jint DEFAULT_COMPRESSION();
		static jint DEFAULT_STRATEGY();
		static jint DEFLATED();
		static jint FILTERED();
		static jint FULL_FLUSH();
		static jint HUFFMAN_ONLY();
		static jint NO_COMPRESSION();
		static jint NO_FLUSH();
		static jint SYNC_FLUSH();
		
		// QJniObject forward
		template<typename ...Ts> explicit Deflater(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Deflater(QJniObject obj);
		
		// Constructors
		Deflater();
		Deflater(jint arg0);
		Deflater(jint arg0, jboolean arg1);
		
		// Methods
		jint deflate(JByteArray arg0);
		jint deflate(java::nio::ByteBuffer arg0);
		jint deflate(java::nio::ByteBuffer arg0, jint arg1);
		jint deflate(JByteArray arg0, jint arg1, jint arg2);
		jint deflate(JByteArray arg0, jint arg1, jint arg2, jint arg3);
		void end();
		void finish();
		jboolean finished();
		jint getAdler();
		jlong getBytesRead();
		jlong getBytesWritten();
		jint getTotalIn();
		jint getTotalOut();
		jboolean needsInput();
		void reset();
		void setDictionary(JByteArray arg0);
		void setDictionary(java::nio::ByteBuffer arg0);
		void setDictionary(JByteArray arg0, jint arg1, jint arg2);
		void setInput(JByteArray arg0);
		void setInput(java::nio::ByteBuffer arg0);
		void setInput(JByteArray arg0, jint arg1, jint arg2);
		void setLevel(jint arg0);
		void setStrategy(jint arg0);
	};
} // namespace java::util::zip

