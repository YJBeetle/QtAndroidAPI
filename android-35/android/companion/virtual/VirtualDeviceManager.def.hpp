#pragma once

#include "../../../JObject.hpp"

namespace android::companion::virtual
{
	class VirtualDevice;
}

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
		android::companion::virtual::VirtualDevice getVirtualDevice(jint arg0) const;
		JObject getVirtualDevices() const;
		void registerVirtualDeviceListener(JObject arg0, JObject arg1) const;
		void unregisterVirtualDeviceListener(JObject arg0) const;
	};
} // namespace android::companion::virtual

