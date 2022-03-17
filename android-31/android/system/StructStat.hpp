#pragma once

#include "./StructTimespec.def.hpp"
#include "../../JString.hpp"
#include "./StructStat.def.hpp"

namespace android::system
{
	// Fields
	inline android::system::StructTimespec StructStat::st_atim()
	{
		return getObjectField(
			"st_atim",
			"Landroid/system/StructTimespec;"
		);
	}
	inline jlong StructStat::st_atime()
	{
		return getField<jlong>(
			"st_atime"
		);
	}
	inline jlong StructStat::st_blksize()
	{
		return getField<jlong>(
			"st_blksize"
		);
	}
	inline jlong StructStat::st_blocks()
	{
		return getField<jlong>(
			"st_blocks"
		);
	}
	inline android::system::StructTimespec StructStat::st_ctim()
	{
		return getObjectField(
			"st_ctim",
			"Landroid/system/StructTimespec;"
		);
	}
	inline jlong StructStat::st_ctime()
	{
		return getField<jlong>(
			"st_ctime"
		);
	}
	inline jlong StructStat::st_dev()
	{
		return getField<jlong>(
			"st_dev"
		);
	}
	inline jint StructStat::st_gid()
	{
		return getField<jint>(
			"st_gid"
		);
	}
	inline jlong StructStat::st_ino()
	{
		return getField<jlong>(
			"st_ino"
		);
	}
	inline jint StructStat::st_mode()
	{
		return getField<jint>(
			"st_mode"
		);
	}
	inline android::system::StructTimespec StructStat::st_mtim()
	{
		return getObjectField(
			"st_mtim",
			"Landroid/system/StructTimespec;"
		);
	}
	inline jlong StructStat::st_mtime()
	{
		return getField<jlong>(
			"st_mtime"
		);
	}
	inline jlong StructStat::st_nlink()
	{
		return getField<jlong>(
			"st_nlink"
		);
	}
	inline jlong StructStat::st_rdev()
	{
		return getField<jlong>(
			"st_rdev"
		);
	}
	inline jlong StructStat::st_size()
	{
		return getField<jlong>(
			"st_size"
		);
	}
	inline jint StructStat::st_uid()
	{
		return getField<jint>(
			"st_uid"
		);
	}
	
	// Constructors
	inline StructStat::StructStat(jlong arg0, jlong arg1, jint arg2, jlong arg3, jint arg4, jint arg5, jlong arg6, jlong arg7, android::system::StructTimespec arg8, android::system::StructTimespec arg9, android::system::StructTimespec arg10, jlong arg11, jlong arg12)
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
	inline StructStat::StructStat(jlong arg0, jlong arg1, jint arg2, jlong arg3, jint arg4, jint arg5, jlong arg6, jlong arg7, jlong arg8, jlong arg9, jlong arg10, jlong arg11, jlong arg12)
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
	inline JString StructStat::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::system

// Base class headers

