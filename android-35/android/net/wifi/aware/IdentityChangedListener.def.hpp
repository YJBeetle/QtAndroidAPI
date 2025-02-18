#pragma once

#include "../../../../JObject.hpp"

class JByteArray;
namespace android::net
{
	class MacAddress;
}

namespace android::net::wifi::aware
{
	class IdentityChangedListener : public JObject
	{
	public:
		// Fields
		static jint CLUSTER_CHANGE_EVENT_JOINED();
		static jint CLUSTER_CHANGE_EVENT_STARTED();
		
		// QJniObject forward
		template<typename ...Ts> explicit IdentityChangedListener(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IdentityChangedListener(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		IdentityChangedListener();
		
		// Methods
		void onClusterIdChanged(jint arg0, android::net::MacAddress arg1) const;
		void onIdentityChanged(JByteArray arg0) const;
	};
} // namespace android::net::wifi::aware

