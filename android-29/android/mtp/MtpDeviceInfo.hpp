#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::mtp
{
	class MtpDeviceInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		MtpDeviceInfo(QAndroidJniObject obj);
		// Constructors
		MtpDeviceInfo() = default;
		
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

