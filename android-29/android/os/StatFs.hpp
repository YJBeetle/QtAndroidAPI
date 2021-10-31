#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::os
{
	class StatFs : public __JniBaseClass
	{
	public:
		// Fields
		
		StatFs(QAndroidJniObject obj);
		// Constructors
		StatFs(jstring arg0);
		StatFs() = default;
		
		// Methods
		jint getAvailableBlocks();
		jlong getAvailableBlocksLong();
		jlong getAvailableBytes();
		jint getBlockCount();
		jlong getBlockCountLong();
		jint getBlockSize();
		jlong getBlockSizeLong();
		jint getFreeBlocks();
		jlong getFreeBlocksLong();
		jlong getFreeBytes();
		jlong getTotalBytes();
		void restat(jstring arg0);
	};
} // namespace android::os

