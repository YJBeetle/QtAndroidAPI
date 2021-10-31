#include "./StatFs.hpp"

namespace android::os
{
	// Fields
	
	StatFs::StatFs(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StatFs::StatFs(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.StatFs",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	jint StatFs::getAvailableBlocks()
	{
		return __thiz.callMethod<jint>(
			"getAvailableBlocks",
			"()I"
		);
	}
	jlong StatFs::getAvailableBlocksLong()
	{
		return __thiz.callMethod<jlong>(
			"getAvailableBlocksLong",
			"()J"
		);
	}
	jlong StatFs::getAvailableBytes()
	{
		return __thiz.callMethod<jlong>(
			"getAvailableBytes",
			"()J"
		);
	}
	jint StatFs::getBlockCount()
	{
		return __thiz.callMethod<jint>(
			"getBlockCount",
			"()I"
		);
	}
	jlong StatFs::getBlockCountLong()
	{
		return __thiz.callMethod<jlong>(
			"getBlockCountLong",
			"()J"
		);
	}
	jint StatFs::getBlockSize()
	{
		return __thiz.callMethod<jint>(
			"getBlockSize",
			"()I"
		);
	}
	jlong StatFs::getBlockSizeLong()
	{
		return __thiz.callMethod<jlong>(
			"getBlockSizeLong",
			"()J"
		);
	}
	jint StatFs::getFreeBlocks()
	{
		return __thiz.callMethod<jint>(
			"getFreeBlocks",
			"()I"
		);
	}
	jlong StatFs::getFreeBlocksLong()
	{
		return __thiz.callMethod<jlong>(
			"getFreeBlocksLong",
			"()J"
		);
	}
	jlong StatFs::getFreeBytes()
	{
		return __thiz.callMethod<jlong>(
			"getFreeBytes",
			"()J"
		);
	}
	jlong StatFs::getTotalBytes()
	{
		return __thiz.callMethod<jlong>(
			"getTotalBytes",
			"()J"
		);
	}
	void StatFs::restat(jstring arg0)
	{
		__thiz.callMethod<void>(
			"restat",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::os

