#pragma once

#include "../../JString.hpp"
#include "./StructStatVfs.def.hpp"

namespace android::system
{
	// Fields
	inline jlong StructStatVfs::f_bavail()
	{
		return getField<jlong>(
			"f_bavail"
		);
	}
	inline jlong StructStatVfs::f_bfree()
	{
		return getField<jlong>(
			"f_bfree"
		);
	}
	inline jlong StructStatVfs::f_blocks()
	{
		return getField<jlong>(
			"f_blocks"
		);
	}
	inline jlong StructStatVfs::f_bsize()
	{
		return getField<jlong>(
			"f_bsize"
		);
	}
	inline jlong StructStatVfs::f_favail()
	{
		return getField<jlong>(
			"f_favail"
		);
	}
	inline jlong StructStatVfs::f_ffree()
	{
		return getField<jlong>(
			"f_ffree"
		);
	}
	inline jlong StructStatVfs::f_files()
	{
		return getField<jlong>(
			"f_files"
		);
	}
	inline jlong StructStatVfs::f_flag()
	{
		return getField<jlong>(
			"f_flag"
		);
	}
	inline jlong StructStatVfs::f_frsize()
	{
		return getField<jlong>(
			"f_frsize"
		);
	}
	inline jlong StructStatVfs::f_fsid()
	{
		return getField<jlong>(
			"f_fsid"
		);
	}
	inline jlong StructStatVfs::f_namemax()
	{
		return getField<jlong>(
			"f_namemax"
		);
	}
	
	// Constructors
	inline StructStatVfs::StructStatVfs(jlong arg0, jlong arg1, jlong arg2, jlong arg3, jlong arg4, jlong arg5, jlong arg6, jlong arg7, jlong arg8, jlong arg9, jlong arg10)
		: JObject(
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
	inline JString StructStatVfs::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::system

// Base class headers

