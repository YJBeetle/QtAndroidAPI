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
		
		// QJniObject forward
		template<typename ...Ts> explicit AsynchronousFileChannel(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AsynchronousFileChannel(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::channels::AsynchronousFileChannel open(__JniBaseClass arg0, jarray arg1);
		static java::nio::channels::AsynchronousFileChannel open(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2, jarray arg3);
		void force(jboolean arg0);
		__JniBaseClass lock();
		__JniBaseClass lock(jlong arg0, jlong arg1, jboolean arg2);
		void lock(jobject arg0, __JniBaseClass arg1);
		void lock(jlong arg0, jlong arg1, jboolean arg2, jobject arg3, __JniBaseClass arg4);
		__JniBaseClass read(java::nio::ByteBuffer arg0, jlong arg1);
		void read(java::nio::ByteBuffer arg0, jlong arg1, jobject arg2, __JniBaseClass arg3);
		jlong size();
		java::nio::channels::AsynchronousFileChannel truncate(jlong arg0);
		java::nio::channels::FileLock tryLock();
		java::nio::channels::FileLock tryLock(jlong arg0, jlong arg1, jboolean arg2);
		__JniBaseClass write(java::nio::ByteBuffer arg0, jlong arg1);
		void write(java::nio::ByteBuffer arg0, jlong arg1, jobject arg2, __JniBaseClass arg3);
	};
} // namespace java::nio::channels

