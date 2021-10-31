#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::net::ipsec::ike
{
	class ChildSessionConfiguration;
}

namespace android::net::ipsec::ike
{
	class ChildSessionConfiguration_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ChildSessionConfiguration_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ChildSessionConfiguration_Builder(QJniObject obj);
		
		// Constructors
		ChildSessionConfiguration_Builder(__JniBaseClass arg0, __JniBaseClass arg1);
		
		// Methods
		android::net::ipsec::ike::ChildSessionConfiguration build();
	};
} // namespace android::net::ipsec::ike

