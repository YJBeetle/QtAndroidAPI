#pragma once

#include "../../../../JObject.hpp"

namespace android::net::ipsec::ike
{
	class ChildSessionConfiguration;
}

namespace android::net::ipsec::ike
{
	class ChildSessionConfiguration_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ChildSessionConfiguration_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ChildSessionConfiguration_Builder(QAndroidJniObject obj);
		
		// Constructors
		ChildSessionConfiguration_Builder(JObject arg0, JObject arg1);
		
		// Methods
		android::net::ipsec::ike::ChildSessionConfiguration build();
	};
} // namespace android::net::ipsec::ike

