#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::system
{
	class StructStatVfs : public __JniBaseClass
	{
	public:
		// Fields
		jlong f_bavail();
		jlong f_bfree();
		jlong f_blocks();
		jlong f_bsize();
		jlong f_favail();
		jlong f_ffree();
		jlong f_files();
		jlong f_flag();
		jlong f_frsize();
		jlong f_fsid();
		jlong f_namemax();
		
		StructStatVfs(QAndroidJniObject obj);
		// Constructors
		StructStatVfs(jlong &arg0, jlong &arg1, jlong &arg2, jlong &arg3, jlong &arg4, jlong &arg5, jlong &arg6, jlong &arg7, jlong &arg8, jlong &arg9, jlong &arg10);
		StructStatVfs() = default;
		
		// Methods
		jstring toString();
	};
} // namespace android::system

