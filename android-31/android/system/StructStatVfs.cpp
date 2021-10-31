#include "./StructStatVfs.hpp"

namespace android::system
{
	// Fields
	jlong StructStatVfs::f_bavail()
	{
		return getField<jlong>(
			"f_bavail"
		);
	}
	jlong StructStatVfs::f_bfree()
	{
		return getField<jlong>(
			"f_bfree"
		);
	}
	jlong StructStatVfs::f_blocks()
	{
		return getField<jlong>(
			"f_blocks"
		);
	}
	jlong StructStatVfs::f_bsize()
	{
		return getField<jlong>(
			"f_bsize"
		);
	}
	jlong StructStatVfs::f_favail()
	{
		return getField<jlong>(
			"f_favail"
		);
	}
	jlong StructStatVfs::f_ffree()
	{
		return getField<jlong>(
			"f_ffree"
		);
	}
	jlong StructStatVfs::f_files()
	{
		return getField<jlong>(
			"f_files"
		);
	}
	jlong StructStatVfs::f_flag()
	{
		return getField<jlong>(
			"f_flag"
		);
	}
	jlong StructStatVfs::f_frsize()
	{
		return getField<jlong>(
			"f_frsize"
		);
	}
	jlong StructStatVfs::f_fsid()
	{
		return getField<jlong>(
			"f_fsid"
		);
	}
	jlong StructStatVfs::f_namemax()
	{
		return getField<jlong>(
			"f_namemax"
		);
	}
	
	// QJniObject forward
	StructStatVfs::StructStatVfs(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	StructStatVfs::StructStatVfs(jlong arg0, jlong arg1, jlong arg2, jlong arg3, jlong arg4, jlong arg5, jlong arg6, jlong arg7, jlong arg8, jlong arg9, jlong arg10)
		: __JniBaseClass(
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
			arg10
		) {}
	
	// Methods
	jstring StructStatVfs::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::system

