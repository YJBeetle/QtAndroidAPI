#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::net
{
	class IpSecManager_SecurityParameterIndex : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IpSecManager_SecurityParameterIndex(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IpSecManager_SecurityParameterIndex(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		jint getSpi();
		JString toString();
	};
} // namespace android::net

