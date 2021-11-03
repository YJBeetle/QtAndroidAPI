#pragma once

#include "../../JObject.hpp"


namespace android::os
{
	class StatFs : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StatFs(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StatFs(QAndroidJniObject obj);
		
		// Constructors
		StatFs(jstring arg0);
		
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

