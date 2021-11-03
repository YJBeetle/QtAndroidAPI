#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class LocalSocketAddress_Namespace;
}

namespace android::net
{
	class LocalSocketAddress : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LocalSocketAddress(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LocalSocketAddress(QJniObject obj);
		
		// Constructors
		LocalSocketAddress(jstring arg0);
		LocalSocketAddress(jstring arg0, android::net::LocalSocketAddress_Namespace arg1);
		
		// Methods
		jstring getName();
		android::net::LocalSocketAddress_Namespace getNamespace();
	};
} // namespace android::net

