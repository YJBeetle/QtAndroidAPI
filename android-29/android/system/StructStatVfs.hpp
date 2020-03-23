#pragma once

#ifndef ANDROID_SYSTEM_STRUCTSTATVFS
#define ANDROID_SYSTEM_STRUCTSTATVFS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::system
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
		
		// Constructors
		void __constructor(jlong arg0, jlong arg1, jlong arg2, jlong arg3, jlong arg4, jlong arg5, jlong arg6, jlong arg7, jlong arg8, jlong arg9, jlong arg10);
		
		// Methods
		QAndroidJniObject toString();
	};
} // namespace __jni_impl::android::system


namespace __jni_impl::android::system
{
	// Fields
	jlong StructStatVfs::f_bavail()
	{
		return __thiz.getField<jlong>(
			"f_bavail");
	}
	jlong StructStatVfs::f_bfree()
	{
		return __thiz.getField<jlong>(
			"f_bfree");
	}
	jlong StructStatVfs::f_blocks()
	{
		return __thiz.getField<jlong>(
			"f_blocks");
	}
	jlong StructStatVfs::f_bsize()
	{
		return __thiz.getField<jlong>(
			"f_bsize");
	}
	jlong StructStatVfs::f_favail()
	{
		return __thiz.getField<jlong>(
			"f_favail");
	}
	jlong StructStatVfs::f_ffree()
	{
		return __thiz.getField<jlong>(
			"f_ffree");
	}
	jlong StructStatVfs::f_files()
	{
		return __thiz.getField<jlong>(
			"f_files");
	}
	jlong StructStatVfs::f_flag()
	{
		return __thiz.getField<jlong>(
			"f_flag");
	}
	jlong StructStatVfs::f_frsize()
	{
		return __thiz.getField<jlong>(
			"f_frsize");
	}
	jlong StructStatVfs::f_fsid()
	{
		return __thiz.getField<jlong>(
			"f_fsid");
	}
	jlong StructStatVfs::f_namemax()
	{
		return __thiz.getField<jlong>(
			"f_namemax");
	}
	
	// Constructors
	void StructStatVfs::__constructor(jlong arg0, jlong arg1, jlong arg2, jlong arg3, jlong arg4, jlong arg5, jlong arg6, jlong arg7, jlong arg8, jlong arg9, jlong arg10)
	{
		__thiz = QAndroidJniObject(
			"android.system.StructStatVfs",
			"(JJJJJJJJJJJ)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg10);
	}
	
	// Methods
	QAndroidJniObject StructStatVfs::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::system

namespace android::system
{
	class StructStatVfs : public __jni_impl::android::system::StructStatVfs
	{
	public:
		StructStatVfs(QAndroidJniObject obj) { __thiz = obj; }
		StructStatVfs(jlong arg0, jlong arg1, jlong arg2, jlong arg3, jlong arg4, jlong arg5, jlong arg6, jlong arg7, jlong arg8, jlong arg9, jlong arg10)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6,
				arg7,
				arg8,
				arg9,
				arg10);
		}
	};
} // namespace android::system

#endif // ANDROID_SYSTEM_STRUCTSTATVFS

