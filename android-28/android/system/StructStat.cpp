#include "./StructTimespec.hpp"
#include "../../JString.hpp"
#include "./StructStat.hpp"

namespace android::system
{
	// Fields
	android::system::StructTimespec StructStat::st_atim()
	{
		return getObjectField(
			"st_atim",
			"Landroid/system/StructTimespec;"
		);
	}
	jlong StructStat::st_atime()
	{
		return getField<jlong>(
			"st_atime"
		);
	}
	jlong StructStat::st_blksize()
	{
		return getField<jlong>(
			"st_blksize"
		);
	}
	jlong StructStat::st_blocks()
	{
		return getField<jlong>(
			"st_blocks"
		);
	}
	android::system::StructTimespec StructStat::st_ctim()
	{
		return getObjectField(
			"st_ctim",
			"Landroid/system/StructTimespec;"
		);
	}
	jlong StructStat::st_ctime()
	{
		return getField<jlong>(
			"st_ctime"
		);
	}
	jlong StructStat::st_dev()
	{
		return getField<jlong>(
			"st_dev"
		);
	}
	jint StructStat::st_gid()
	{
		return getField<jint>(
			"st_gid"
		);
	}
	jlong StructStat::st_ino()
	{
		return getField<jlong>(
			"st_ino"
		);
	}
	jint StructStat::st_mode()
	{
		return getField<jint>(
			"st_mode"
		);
	}
	android::system::StructTimespec StructStat::st_mtim()
	{
		return getObjectField(
			"st_mtim",
			"Landroid/system/StructTimespec;"
		);
	}
	jlong StructStat::st_mtime()
	{
		return getField<jlong>(
			"st_mtime"
		);
	}
	jlong StructStat::st_nlink()
	{
		return getField<jlong>(
			"st_nlink"
		);
	}
	jlong StructStat::st_rdev()
	{
		return getField<jlong>(
			"st_rdev"
		);
	}
	jlong StructStat::st_size()
	{
		return getField<jlong>(
			"st_size"
		);
	}
	jint StructStat::st_uid()
	{
		return getField<jint>(
			"st_uid"
		);
	}
	
	// Constructors
	StructStat::StructStat(jlong arg0, jlong arg1, jint arg2, jlong arg3, jint arg4, jint arg5, jlong arg6, jlong arg7, android::system::StructTimespec arg8, android::system::StructTimespec arg9, android::system::StructTimespec arg10, jlong arg11, jlong arg12)
		: JObject(
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
			arg8.object(),
			arg9.object(),
			arg10.object(),
			arg11,
			arg12
		) {}
	StructStat::StructStat(jlong arg0, jlong arg1, jint arg2, jlong arg3, jint arg4, jint arg5, jlong arg6, jlong arg7, jlong arg8, jlong arg9, jlong arg10, jlong arg11, jlong arg12)
		: JObject(
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
		) {}
	
	// Methods
	JString StructStat::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::system

