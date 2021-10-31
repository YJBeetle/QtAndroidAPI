#include "./StructTimespec.hpp"
#include "./StructStat.hpp"

namespace android::system
{
	// Fields
	QAndroidJniObject StructStat::st_atim()
	{
		return __thiz.getObjectField(
			"st_atim",
			"Landroid/system/StructTimespec;"
		);
	}
	jlong StructStat::st_atime()
	{
		return __thiz.getField<jlong>(
			"st_atime"
		);
	}
	jlong StructStat::st_blksize()
	{
		return __thiz.getField<jlong>(
			"st_blksize"
		);
	}
	jlong StructStat::st_blocks()
	{
		return __thiz.getField<jlong>(
			"st_blocks"
		);
	}
	QAndroidJniObject StructStat::st_ctim()
	{
		return __thiz.getObjectField(
			"st_ctim",
			"Landroid/system/StructTimespec;"
		);
	}
	jlong StructStat::st_ctime()
	{
		return __thiz.getField<jlong>(
			"st_ctime"
		);
	}
	jlong StructStat::st_dev()
	{
		return __thiz.getField<jlong>(
			"st_dev"
		);
	}
	jint StructStat::st_gid()
	{
		return __thiz.getField<jint>(
			"st_gid"
		);
	}
	jlong StructStat::st_ino()
	{
		return __thiz.getField<jlong>(
			"st_ino"
		);
	}
	jint StructStat::st_mode()
	{
		return __thiz.getField<jint>(
			"st_mode"
		);
	}
	QAndroidJniObject StructStat::st_mtim()
	{
		return __thiz.getObjectField(
			"st_mtim",
			"Landroid/system/StructTimespec;"
		);
	}
	jlong StructStat::st_mtime()
	{
		return __thiz.getField<jlong>(
			"st_mtime"
		);
	}
	jlong StructStat::st_nlink()
	{
		return __thiz.getField<jlong>(
			"st_nlink"
		);
	}
	jlong StructStat::st_rdev()
	{
		return __thiz.getField<jlong>(
			"st_rdev"
		);
	}
	jlong StructStat::st_size()
	{
		return __thiz.getField<jlong>(
			"st_size"
		);
	}
	jint StructStat::st_uid()
	{
		return __thiz.getField<jint>(
			"st_uid"
		);
	}
	
	StructStat::StructStat(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StructStat::StructStat(jlong arg0, jlong arg1, jint arg2, jlong arg3, jint arg4, jint arg5, jlong arg6, jlong arg7, android::system::StructTimespec arg8, android::system::StructTimespec arg9, android::system::StructTimespec arg10, jlong arg11, jlong arg12)
	{
		__thiz = QAndroidJniObject(
			"android.system.StructStat",
			"(JJIJIIJJLandroid/system/StructTimespec;Landroid/system/StructTimespec;Landroid/system/StructTimespec;JJ)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8.__jniObject().object(),
			arg9.__jniObject().object(),
			arg10.__jniObject().object(),
			arg11,
			arg12
		);
	}
	StructStat::StructStat(jlong arg0, jlong arg1, jint arg2, jlong arg3, jint arg4, jint arg5, jlong arg6, jlong arg7, jlong arg8, jlong arg9, jlong arg10, jlong arg11, jlong arg12)
	{
		__thiz = QAndroidJniObject(
			"android.system.StructStat",
			"(JJIJIIJJJJJJJ)V",
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
			arg10,
			arg11,
			arg12
		);
	}
	
	// Methods
	jstring StructStat::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::system

