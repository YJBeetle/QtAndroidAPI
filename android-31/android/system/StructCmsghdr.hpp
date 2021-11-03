#pragma once

#include "../../JObject.hpp"


namespace android::system
{
	class StructCmsghdr : public JObject
	{
	public:
		// Fields
		jbyteArray cmsg_data();
		jint cmsg_level();
		jint cmsg_type();
		
		// QJniObject forward
		template<typename ...Ts> explicit StructCmsghdr(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StructCmsghdr(QJniObject obj);
		
		// Constructors
		StructCmsghdr(jint arg0, jint arg1, jbyteArray arg2);
		StructCmsghdr(jint arg0, jint arg1, jshort arg2);
		
		// Methods
	};
} // namespace android::system

