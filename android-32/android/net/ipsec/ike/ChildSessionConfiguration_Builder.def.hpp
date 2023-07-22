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
		
		// QJniObject forward
		template<typename ...Ts> explicit ChildSessionConfiguration_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ChildSessionConfiguration_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ChildSessionConfiguration_Builder(JObject arg0, JObject arg1);
		
		// Methods
		android::net::ipsec::ike::ChildSessionConfiguration build() const;
	};
} // namespace android::net::ipsec::ike

