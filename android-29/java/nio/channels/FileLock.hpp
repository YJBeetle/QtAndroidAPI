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
		
		FileLock(QAndroidJniObject obj);
		// Constructors
		FileLock() = default;
		
		// Methods
		QAndroidJniObject acquiredBy();
		QAndroidJniObject channel();
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

