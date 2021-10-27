#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::nio
{
	class ByteBuffer;
}
namespace java::nio::channels
{
	class FileLock;
}

namespace java::nio::channels
{
	class AsynchronousFileChannel : public __JniBaseClass
	{
	public:
		// Fields
		
		AsynchronousFileChannel(QAndroidJniObject obj);
		// Constructors
		AsynchronousFileChannel() = default;
		
		// Methods
		static QAndroidJniObject open(__JniBaseClass arg0, jarray arg1);
		static QAndroidJniObject open(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2, jarray arg3);
		void force(jboolean arg0);
		QAndroidJniObject lock();
		QAndroidJniObject lock(jlong arg0, jlong arg1, jboolean arg2);
		void lock(jobject arg0, __JniBaseClass arg1);
		void lock(jlong arg0, jlong arg1, jboolean arg2, jobject arg3, __JniBaseClass arg4);
		QAndroidJniObject read(java::nio::ByteBuffer arg0, jlong arg1);
		void read(java::nio::ByteBuffer arg0, jlong arg1, jobject arg2, __JniBaseClass arg3);
		jlong size();
		QAndroidJniObject truncate(jlong arg0);
		QAndroidJniObject tryLock();
		QAndroidJniObject tryLock(jlong arg0, jlong arg1, jboolean arg2);
		QAndroidJniObject write(java::nio::ByteBuffer arg0, jlong arg1);
		void write(java::nio::ByteBuffer arg0, jlong arg1, jobject arg2, __JniBaseClass arg3);
	};
} // namespace java::nio::channels

