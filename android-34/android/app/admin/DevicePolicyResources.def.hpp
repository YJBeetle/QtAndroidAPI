#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::app::admin
{
	class DevicePolicyResources : public JObject
	{
	public:
		// Fields
		static JString UNDEFINED();
		
		// QJniObject forward
		template<typename ...Ts> explicit DevicePolicyResources(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DevicePolicyResources(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::app::admin

