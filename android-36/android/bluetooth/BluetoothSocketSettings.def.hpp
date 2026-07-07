#pragma once

#include "../../JObject.hpp"

class JString;
namespace java::util
{
	class UUID;
}

namespace android::bluetooth
{
	class BluetoothSocketSettings : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothSocketSettings(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothSocketSettings(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint getL2capPsm() const;
		JString getRfcommServiceName() const;
		java::util::UUID getRfcommUuid() const;
		jint getSocketType() const;
		jboolean isAuthenticationRequired() const;
		jboolean isEncryptionRequired() const;
		JString toString() const;
	};
} // namespace android::bluetooth

