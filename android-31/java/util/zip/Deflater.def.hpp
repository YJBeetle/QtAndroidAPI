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
		Deflater(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Deflater();
		Deflater(jint arg0);
		Deflater(jint arg0, jboolean arg1);
		
		// Methods
		jint deflate(JByteArray arg0) const;
		jint deflate(java::nio::ByteBuffer arg0) const;
		jint deflate(java::nio::ByteBuffer arg0, jint arg1) const;
		jint deflate(JByteArray arg0, jint arg1, jint arg2) const;
		jint deflate(JByteArray arg0, jint arg1, jint arg2, jint arg3) const;
		void end() const;
		void finish() const;
		jboolean finished() const;
		jint getAdler() const;
		jlong getBytesRead() const;
		jlong getBytesWritten() const;
		jint getTotalIn() const;
		jint getTotalOut() const;
		jboolean needsInput() const;
		void reset() const;
		void setDictionary(JByteArray arg0) const;
		void setDictionary(java::nio::ByteBuffer arg0) const;
		void setDictionary(JByteArray arg0, jint arg1, jint arg2) const;
		void setInput(JByteArray arg0) const;
		void setInput(java::nio::ByteBuffer arg0) const;
		void setInput(JByteArray arg0, jint arg1, jint arg2) const;
		void setLevel(jint arg0) const;
		void setStrategy(jint arg0) const;
	};
} // namespace java::util::zip

