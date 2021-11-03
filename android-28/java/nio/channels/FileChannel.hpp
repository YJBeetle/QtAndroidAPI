#pragma once

#include "./spi/AbstractInterruptibleChannel.hpp"

class JArray;
class JArray;
class JArray;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileChannel(const char *className, const char *sig, Ts...agv) : java::nio::channels::spi::AbstractInterruptibleChannel(className, sig, std::forward<Ts>(agv)...) {}
		FileChannel(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::channels::FileChannel open(JObject arg0, JArray arg1);
		static java::nio::channels::FileChannel open(JObject arg0, JObject arg1, JArray arg2);
		void force(jboolean arg0);
		java::nio::channels::FileLock lock();
		java::nio::channels::FileLock lock(jlong arg0, jlong arg1, jboolean arg2);
		java::nio::MappedByteBuffer map(java::nio::channels::FileChannel_MapMode arg0, jlong arg1, jlong arg2);
		java::nio::channels::FileChannel position(jlong arg0);
		jlong position();
		jint read(java::nio::ByteBuffer arg0);
		jint read(java::nio::ByteBuffer arg0, jlong arg1);
		jlong read(JArray arg0);
		jlong read(JArray arg0, jint arg1, jint arg2);
		jlong size();
		jlong transferFrom(JObject arg0, jlong arg1, jlong arg2);
		jlong transferTo(jlong arg0, jlong arg1, JObject arg2);
		java::nio::channels::FileChannel truncate(jlong arg0);
		java::nio::channels::FileLock tryLock();
		java::nio::channels::FileLock tryLock(jlong arg0, jlong arg1, jboolean arg2);
		jint write(java::nio::ByteBuffer arg0);
		jint write(java::nio::ByteBuffer arg0, jlong arg1);
		jlong write(JArray arg0);
		jlong write(JArray arg0, jint arg1, jint arg2);
	};
} // namespace java::nio::channels

