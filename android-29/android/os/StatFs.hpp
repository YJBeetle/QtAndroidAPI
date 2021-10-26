#pragma once

#ifndef ANDROID_OS_STATFS
#define ANDROID_OS_STATFS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::os
{
	class StatFs : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		void restat(jstring arg0);
		void restat(const QString &arg0);
		jlong getBlockSizeLong();
		jlong getBlockCountLong();
		jint getFreeBlocks();
		jlong getFreeBlocksLong();
		jint getAvailableBlocks();
		jlong getAvailableBlocksLong();
		jlong getAvailableBytes();
		jint getBlockSize();
		jint getBlockCount();
		jlong getTotalBytes();
		jlong getFreeBytes();
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void StatFs::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.StatFs",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void StatFs::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.StatFs",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	void StatFs::restat(jstring arg0)
	{
		__thiz.callMethod<void>(
			"restat",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void StatFs::restat(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"restat",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jlong StatFs::getBlockSizeLong()
	{
		return __thiz.callMethod<jlong>(
			"getBlockSizeLong",
			"()J"
		);
	}
	jlong StatFs::getBlockCountLong()
	{
		return __thiz.callMethod<jlong>(
			"getBlockCountLong",
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
	jint StatFs::getBlockSize()
	{
		return __thiz.callMethod<jint>(
			"getBlockSize",
			"()I"
		);
	}
	jint StatFs::getBlockCount()
	{
		return __thiz.callMethod<jint>(
			"getBlockCount",
			"()I"
		);
	}
	jlong StatFs::getTotalBytes()
	{
		return __thiz.callMethod<jlong>(
			"getTotalBytes",
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
} // namespace __jni_impl::android::os

namespace android::os
{
	class StatFs : public __jni_impl::android::os::StatFs
	{
	public:
		StatFs(QAndroidJniObject obj) { __thiz = obj; }
		StatFs(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::os

#endif // ANDROID_OS_STATFS

