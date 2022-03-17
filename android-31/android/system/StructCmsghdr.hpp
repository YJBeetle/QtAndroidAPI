#pragma once

#include "../../JByteArray.hpp"
#include "./StructCmsghdr.def.hpp"

namespace android::system
{
	// Fields
	inline JByteArray StructCmsghdr::cmsg_data()
	{
		return getObjectField(
			"cmsg_data",
			"[B"
		);
	}
	inline jint StructCmsghdr::cmsg_level()
	{
		return getField<jint>(
			"cmsg_level"
		);
	}
	inline jint StructCmsghdr::cmsg_type()
	{
		return getField<jint>(
			"cmsg_type"
		);
	}
	
	// Constructors
	inline StructCmsghdr::StructCmsghdr(jint arg0, jint arg1, JByteArray arg2)
		: JObject(
			"android.system.StructCmsghdr",
			"(II[B)V",
			arg0,
			arg1,
			arg2.object<jbyteArray>()
		) {}
	inline StructCmsghdr::StructCmsghdr(jint arg0, jint arg1, jshort arg2)
		: JObject(
			"android.system.StructCmsghdr",
			"(IIS)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace android::system

// Base class headers

