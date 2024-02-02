#pragma once

#include "../../java/io/IOException.def.hpp"

class JString;

namespace android::bluetooth
{
	class BluetoothSocketException : public java::io::IOException
	{
	public:
		// Fields
		static jint BLUETOOTH_OFF_FAILURE();
		static jint L2CAP_ACL_FAILURE();
		static jint L2CAP_CLIENT_SECURITY_FAILURE();
		static jint L2CAP_INSUFFICIENT_AUTHENTICATION();
		static jint L2CAP_INSUFFICIENT_AUTHORIZATION();
		static jint L2CAP_INSUFFICIENT_ENCRYPTION();
		static jint L2CAP_INSUFFICIENT_ENCRYPT_KEY_SIZE();
		static jint L2CAP_INVALID_PARAMETERS();
		static jint L2CAP_INVALID_SOURCE_CID();
		static jint L2CAP_NO_PSM_AVAILABLE();
		static jint L2CAP_NO_RESOURCES();
		static jint L2CAP_SOURCE_CID_ALREADY_ALLOCATED();
		static jint L2CAP_TIMEOUT();
		static jint L2CAP_UNACCEPTABLE_PARAMETERS();
		static jint L2CAP_UNKNOWN();
		static jint NULL_DEVICE();
		static jint RPC_FAILURE();
		static jint SOCKET_CLOSED();
		static jint SOCKET_CONNECTION_FAILURE();
		static jint SOCKET_MANAGER_FAILURE();
		static jint UNSPECIFIED();
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothSocketException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothSocketException(QJniObject obj) : java::io::IOException(obj) {}
		
		// Constructors
		BluetoothSocketException(jint arg0);
		BluetoothSocketException(jint arg0, JString arg1);
		
		// Methods
		jint getErrorCode() const;
	};
} // namespace android::bluetooth

