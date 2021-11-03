#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace java::nio
{
	class ByteBuffer;
}

namespace java::util::zip
{
	class CRC32 : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CRC32(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CRC32(QJniObject obj);
		
		// Constructors
		CRC32();
		
		// Methods
		jlong getValue();
		void reset();
		void update(jint arg0);
		void update(java::nio::ByteBuffer arg0);
		void update(JByteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::util::zip

