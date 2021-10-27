#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./spi/AbstractInterruptibleChannel.hpp"

namespace java::nio
{
	class ByteBuffer;
}
namespace java::nio
{
	class MappedByteBuffer;
}
namespace java::nio::channels
{
	class FileChannel_MapMode;
}
namespace java::nio::channels
{
	class FileLock;
}

namespace java::nio::channels
{
	class FileChannel : public java::nio::channels::spi::AbstractInterruptibleChannel
	{
	public:
		// Fields
		
		FileChannel(QAndroidJniObject obj);
		// Constructors
		FileChannel() = default;
		
		// Methods
		static QAndroidJniObject open(__JniBaseClass arg0, jarray arg1);
		static QAndroidJniObject open(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2);
		void force(jboolean arg0);
		QAndroidJniObject lock();
		QAndroidJniObject lock(jlong arg0, jlong arg1, jboolean arg2);
		QAndroidJniObject map(java::nio::channels::FileChannel_MapMode arg0, jlong arg1, jlong arg2);
		QAndroidJniObject position(jlong arg0);
		jlong position();
		jint read(java::nio::ByteBuffer arg0);
		jint read(java::nio::ByteBuffer arg0, jlong arg1);
		jlong read(jarray arg0);
		jlong read(jarray arg0, jint arg1, jint arg2);
		jlong size();
		jlong transferFrom(__JniBaseClass arg0, jlong arg1, jlong arg2);
		jlong transferTo(jlong arg0, jlong arg1, __JniBaseClass arg2);
		QAndroidJniObject truncate(jlong arg0);
		QAndroidJniObject tryLock();
		QAndroidJniObject tryLock(jlong arg0, jlong arg1, jboolean arg2);
		jint write(java::nio::ByteBuffer arg0);
		jint write(java::nio::ByteBuffer arg0, jlong arg1);
		jlong write(jarray arg0);
		jlong write(jarray arg0, jint arg1, jint arg2);
	};
} // namespace java::nio::channels

