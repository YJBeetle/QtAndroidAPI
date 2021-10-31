#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::nio
{
	class ByteBuffer;
}

namespace java::util::zip
{
	class CRC32 : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CRC32(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CRC32(QAndroidJniObject obj);
		
		// Constructors
		CRC32();
		
		// Methods
		jlong getValue();
		void reset();
		void update(jint arg0);
		void update(java::nio::ByteBuffer arg0);
		void update(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::util::zip

