#include "../../JByteArray.hpp"
#include "./StructCmsghdr.hpp"

namespace android::system
{
	// Fields
	JByteArray StructCmsghdr::cmsg_data()
	{
		return getObjectField(
			"cmsg_data",
			"[B"
		);
	}
	jint StructCmsghdr::cmsg_level()
	{
		return getField<jint>(
			"cmsg_level"
		);
	}
	jint StructCmsghdr::cmsg_type()
	{
		return getField<jint>(
			"cmsg_type"
		);
	}
	
	// Constructors
	StructCmsghdr::StructCmsghdr(jint arg0, jint arg1, JByteArray arg2)
		: JObject(
			"android.system.StructCmsghdr",
			"(II[B)V",
			arg0,
			arg1,
			arg2.object<jbyteArray>()
		) {}
	StructCmsghdr::StructCmsghdr(jint arg0, jint arg1, jshort arg2)
		: JObject(
			"android.system.StructCmsghdr",
			"(IIS)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace android::system

