#pragma once

#include "../../JString.hpp"
#include "./StatFs.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline StatFs::StatFs(JString arg0)
		: JObject(
			"android.os.StatFs",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jint StatFs::getAvailableBlocks() const
	{
		return callMethod<jint>(
			"getAvailableBlocks",
			"()I"
		);
	}
	inline jlong StatFs::getAvailableBlocksLong() const
	{
		return callMethod<jlong>(
			"getAvailableBlocksLong",
			"()J"
		);
	}
	inline jlong StatFs::getAvailableBytes() const
	{
		return callMethod<jlong>(
			"getAvailableBytes",
			"()J"
		);
	}
	inline jint StatFs::getBlockCount() const
	{
		return callMethod<jint>(
			"getBlockCount",
			"()I"
		);
	}
	inline jlong StatFs::getBlockCountLong() const
	{
		return callMethod<jlong>(
			"getBlockCountLong",
			"()J"
		);
	}
	inline jint StatFs::getBlockSize() const
	{
		return callMethod<jint>(
			"getBlockSize",
			"()I"
		);
	}
	inline jlong StatFs::getBlockSizeLong() const
	{
		return callMethod<jlong>(
			"getBlockSizeLong",
			"()J"
		);
	}
	inline jint StatFs::getFreeBlocks() const
	{
		return callMethod<jint>(
			"getFreeBlocks",
			"()I"
		);
	}
	inline jlong StatFs::getFreeBlocksLong() const
	{
		return callMethod<jlong>(
			"getFreeBlocksLong",
			"()J"
		);
	}
	inline jlong StatFs::getFreeBytes() const
	{
		return callMethod<jlong>(
			"getFreeBytes",
			"()J"
		);
	}
	inline jlong StatFs::getTotalBytes() const
	{
		return callMethod<jlong>(
			"getTotalBytes",
			"()J"
		);
	}
	inline void StatFs::restat(JString arg0) const
	{
		callMethod<void>(
			"restat",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
