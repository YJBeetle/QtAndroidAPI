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
		Inflater(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Inflater();
		Inflater(jboolean arg0);
		
		// Methods
		void end() const;
		jboolean finished() const;
		jint getAdler() const;
		jlong getBytesRead() const;
		jlong getBytesWritten() const;
		jint getRemaining() const;
		jint getTotalIn() const;
		jint getTotalOut() const;
		jint inflate(JByteArray arg0) const;
		jint inflate(java::nio::ByteBuffer arg0) const;
		jint inflate(JByteArray arg0, jint arg1, jint arg2) const;
		jboolean needsDictionary() const;
		jboolean needsInput() const;
		void reset() const;
		void setDictionary(JByteArray arg0) const;
		void setDictionary(java::nio::ByteBuffer arg0) const;
		void setDictionary(JByteArray arg0, jint arg1, jint arg2) const;
		void setInput(JByteArray arg0) const;
		void setInput(java::nio::ByteBuffer arg0) const;
		void setInput(JByteArray arg0, jint arg1, jint arg2) const;
	};
} // namespace java::util::zip

