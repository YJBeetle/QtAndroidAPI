#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::nio::channels
{
	class AsynchronousFileChannel;
}
namespace java::nio::channels
{
	class FileChannel;
}

namespace java::nio::channels
{
	class FileLock : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileLock(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FileLock(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass acquiredBy();
		java::nio::channels::FileChannel channel();
		void close();
		jboolean isShared();
		jboolean isValid();
		jboolean overlaps(jlong arg0, jlong arg1);
		jlong position();
		void release();
		jlong size();
		jstring toString();
	};
} // namespace java::nio::channels

