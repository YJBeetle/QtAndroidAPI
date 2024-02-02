#pragma once

#include "../../../JObject.hpp"

namespace android::companion::virtual
{
	class VirtualDeviceManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VirtualDeviceManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VirtualDeviceManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getVirtualDevices() const;
	};
} // namespace android::companion::virtual

