#pragma once

#include "./spi/AbstractInterruptibleChannel.def.hpp"

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
		FileChannel(QAndroidJniObject obj) : java::nio::channels::spi::AbstractInterruptibleChannel(obj) {}
		
		// Constructors
		
		// Methods
		static java::nio::channels::FileChannel open(JObject arg0, JArray arg1);
		static java::nio::channels::FileChannel open(JObject arg0, JObject arg1, JArray arg2);
		void force(jboolean arg0) const;
		java::nio::channels::FileLock lock() const;
		java::nio::channels::FileLock lock(jlong arg0, jlong arg1, jboolean arg2) const;
		JObject map(java::nio::channels::FileChannel_MapMode arg0, jlong arg1, jlong arg2, JObject arg3) const;
		java::nio::MappedByteBuffer map(java::nio::channels::FileChannel_MapMode arg0, jlong arg1, jlong arg2) const;
		java::nio::channels::FileChannel position(jlong arg0) const;
		jlong position() const;
		jint read(java::nio::ByteBuffer arg0) const;
		jint read(java::nio::ByteBuffer arg0, jlong arg1) const;
		jlong read(JArray arg0) const;
		jlong read(JArray arg0, jint arg1, jint arg2) const;
		jlong size() const;
		jlong transferFrom(JObject arg0, jlong arg1, jlong arg2) const;
		jlong transferTo(jlong arg0, jlong arg1, JObject arg2) const;
		java::nio::channels::FileChannel truncate(jlong arg0) const;
		java::nio::channels::FileLock tryLock() const;
		java::nio::channels::FileLock tryLock(jlong arg0, jlong arg1, jboolean arg2) const;
		jint write(java::nio::ByteBuffer arg0) const;
		jint write(java::nio::ByteBuffer arg0, jlong arg1) const;
		jlong write(JArray arg0) const;
		jlong write(JArray arg0, jint arg1, jint arg2) const;
	};
} // namespace java::nio::channels

