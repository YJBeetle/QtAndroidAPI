#pragma once

#include "../../JObject.hpp"


namespace android::mtp
{
	class MtpDeviceInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MtpDeviceInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MtpDeviceInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jintArray getEventsSupported();
		jstring getManufacturer();
		jstring getModel();
		jintArray getOperationsSupported();
		jstring getSerialNumber();
		jstring getVersion();
		jboolean isEventSupported(jint arg0);
		jboolean isOperationSupported(jint arg0);
	};
} // namespace android::mtp

