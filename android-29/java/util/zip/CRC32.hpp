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

