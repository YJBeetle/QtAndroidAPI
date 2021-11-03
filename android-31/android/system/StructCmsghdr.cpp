#include "./StructCmsghdr.hpp"

namespace android::system
{
	// Fields
	jbyteArray StructCmsghdr::cmsg_data()
	{
		return getObjectField(
			"cmsg_data",
			"[B"
		).object<jbyteArray>();
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
	
	// QAndroidJniObject forward
	StructCmsghdr::StructCmsghdr(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	StructCmsghdr::StructCmsghdr(jint arg0, jint arg1, jbyteArray arg2)
		: JObject(
			"android.system.StructCmsghdr",
			"(II[B)V",
			arg0,
			arg1,
			arg2
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

