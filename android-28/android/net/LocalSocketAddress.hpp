#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class LocalSocketAddress_Namespace;
}
class JString;

namespace android::net
{
	class LocalSocketAddress : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocalSocketAddress(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LocalSocketAddress(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		LocalSocketAddress(JString arg0);
		LocalSocketAddress(JString arg0, android::net::LocalSocketAddress_Namespace arg1);
		
		// Methods
		JString getName() const;
		android::net::LocalSocketAddress_Namespace getNamespace() const;
	};
} // namespace android::net

