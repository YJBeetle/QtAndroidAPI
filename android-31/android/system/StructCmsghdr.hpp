#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::system
{
	class StructCmsghdr : public __JniBaseClass
	{
	public:
		// Fields
		jbyteArray cmsg_data();
		jint cmsg_level();
		jint cmsg_type();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StructCmsghdr(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StructCmsghdr(QAndroidJniObject obj);
		
		// Constructors
		StructCmsghdr(jint arg0, jint arg1, jbyteArray arg2);
		StructCmsghdr(jint arg0, jint arg1, jshort arg2);
		
		// Methods
	};
} // namespace android::system

