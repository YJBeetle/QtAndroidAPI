#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::mtp
{
	class MtpDeviceInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MtpDeviceInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MtpDeviceInfo(QAndroidJniObject obj);
		
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

