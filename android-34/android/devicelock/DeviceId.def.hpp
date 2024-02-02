#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::devicelock
{
	class DeviceId : public JObject
	{
	public:
		// Fields
		static jint DEVICE_ID_TYPE_IMEI();
		static jint DEVICE_ID_TYPE_MEID();
		
		// QJniObject forward
		template<typename ...Ts> explicit DeviceId(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DeviceId(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JString getId() const;
		jint getType() const;
	};
} // namespace android::devicelock

