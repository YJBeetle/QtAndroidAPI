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
		IpSecManager_SecurityParameterIndex(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void close() const;
		jint getSpi() const;
		JString toString() const;
	};
} // namespace android::net

