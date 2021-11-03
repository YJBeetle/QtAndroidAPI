#pragma once

#include "../../JObject.hpp"

namespace android::system
{
	class StructTimespec;
}

namespace android::system
{
	class StructStat : public JObject
	{
	public:
		// Fields
		android::system::StructTimespec st_atim();
		jlong st_atime();
		jlong st_blksize();
		jlong st_blocks();
		android::system::StructTimespec st_ctim();
		jlong st_ctime();
		jlong st_dev();
		jint st_gid();
		jlong st_ino();
		jint st_mode();
		android::system::StructTimespec st_mtim();
		jlong st_mtime();
		jlong st_nlink();
		jlong st_rdev();
		jlong st_size();
		jint st_uid();
		
		// QJniObject forward
		template<typename ...Ts> explicit StructStat(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StructStat(QJniObject obj);
		
		// Constructors
		StructStat(jlong arg0, jlong arg1, jint arg2, jlong arg3, jint arg4, jint arg5, jlong arg6, jlong arg7, android::system::StructTimespec arg8, android::system::StructTimespec arg9, android::system::StructTimespec arg10, jlong arg11, jlong arg12);
		StructStat(jlong arg0, jlong arg1, jint arg2, jlong arg3, jint arg4, jint arg5, jlong arg6, jlong arg7, jlong arg8, jlong arg9, jlong arg10, jlong arg11, jlong arg12);
		
		// Methods
		jstring toString();
	};
} // namespace android::system

