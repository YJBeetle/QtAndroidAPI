#pragma once

#include "../../JObject.hpp"

class JString;
namespace java::net
{
	class InetAddress;
}

namespace android::net
{
	class InetAddresses : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InetAddresses(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InetAddresses(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jboolean isNumericAddress(JString arg0);
		static java::net::InetAddress parseNumericAddress(JString arg0);
	};
} // namespace android::net

