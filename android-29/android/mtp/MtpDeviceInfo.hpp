#pragma once

#include "../../JObject.hpp"

class JIntArray;
class JString;

namespace android::mtp
{
	class MtpDeviceInfo : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MtpDeviceInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MtpDeviceInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JIntArray getEventsSupported();
		JString getManufacturer();
		JString getModel();
		JIntArray getOperationsSupported();
		JString getSerialNumber();
		JString getVersion();
		jboolean isEventSupported(jint arg0);
		jboolean isOperationSupported(jint arg0);
	};
} // namespace android::mtp

