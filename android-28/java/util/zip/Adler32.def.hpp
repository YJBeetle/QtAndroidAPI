#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace java::nio
{
	class ByteBuffer;
}

namespace java::util::zip
{
	class Adler32 : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Adler32(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Adler32(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Adler32();
		
		// Methods
		jlong getValue() const;
		void reset() const;
		void update(jint arg0) const;
		void update(java::nio::ByteBuffer arg0) const;
		void update(JByteArray arg0, jint arg1, jint arg2) const;
	};
} // namespace java::util::zip

