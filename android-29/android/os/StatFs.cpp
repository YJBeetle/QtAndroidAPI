#include "../../JString.hpp"
#include "./StatFs.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	StatFs::StatFs(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	StatFs::StatFs(JString arg0)
		: JObject(
			"android.os.StatFs",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	jint StatFs::getAvailableBlocks() const
	{
		return callMethod<jint>(
			"getAvailableBlocks",
			"()I"
		);
	}
	jlong StatFs::getAvailableBlocksLong() const
	{
		return callMethod<jlong>(
			"getAvailableBlocksLong",
			"()J"
		);
	}
	jlong StatFs::getAvailableBytes() const
	{
		return callMethod<jlong>(
			"getAvailableBytes",
			"()J"
		);
	}
	jint StatFs::getBlockCount() const
	{
		return callMethod<jint>(
			"getBlockCount",
			"()I"
		);
	}
	jlong StatFs::getBlockCountLong() const
	{
		return callMethod<jlong>(
			"getBlockCountLong",
			"()J"
		);
	}
	jint StatFs::getBlockSize() const
	{
		return callMethod<jint>(
			"getBlockSize",
			"()I"
		);
	}
	jlong StatFs::getBlockSizeLong() const
	{
		return callMethod<jlong>(
			"getBlockSizeLong",
			"()J"
		);
	}
	jint StatFs::getFreeBlocks() const
	{
		return callMethod<jint>(
			"getFreeBlocks",
			"()I"
		);
	}
	jlong StatFs::getFreeBlocksLong() const
	{
		return callMethod<jlong>(
			"getFreeBlocksLong",
			"()J"
		);
	}
	jlong StatFs::getFreeBytes() const
	{
		return callMethod<jlong>(
			"getFreeBytes",
			"()J"
		);
	}
	jlong StatFs::getTotalBytes() const
	{
		return callMethod<jlong>(
			"getTotalBytes",
			"()J"
		);
	}
	void StatFs::restat(JString arg0) const
	{
		callMethod<void>(
			"restat",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::os

