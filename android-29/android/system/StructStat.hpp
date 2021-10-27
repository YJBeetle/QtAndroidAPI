#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::system
{
	class StructTimespec;
}

namespace android::system
{
	class StructStat : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject st_atim();
		jlong st_atime();
		jlong st_blksize();
		jlong st_blocks();
		QAndroidJniObject st_ctim();
		jlong st_ctime();
		jlong st_dev();
		jint st_gid();
		jlong st_ino();
		jint st_mode();
		QAndroidJniObject st_mtim();
		jlong st_mtime();
		jlong st_nlink();
		jlong st_rdev();
		jlong st_size();
		jint st_uid();
		
		StructStat(QAndroidJniObject obj);
		// Constructors
		StructStat(jlong &arg0, jlong &arg1, jint &arg2, jlong &arg3, jint &arg4, jint &arg5, jlong &arg6, jlong &arg7, android::system::StructTimespec &arg8, android::system::StructTimespec &arg9, android::system::StructTimespec &arg10, jlong &arg11, jlong &arg12);
		StructStat(jlong &arg0, jlong &arg1, jint &arg2, jlong &arg3, jint &arg4, jint &arg5, jlong &arg6, jlong &arg7, jlong &arg8, jlong &arg9, jlong &arg10, jlong &arg11, jlong &arg12);
		StructStat() = default;
		
		// Methods
		jstring toString();
	};
} // namespace android::system

