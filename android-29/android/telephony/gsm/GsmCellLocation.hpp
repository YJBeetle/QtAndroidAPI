#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../CellLocation.hpp"

namespace android::os
{
	class Bundle;
}

namespace android::telephony::gsm
{
	class GsmCellLocation : public android::telephony::CellLocation
	{
	public:
		// Fields
		
		GsmCellLocation(QAndroidJniObject obj);
		// Constructors
		GsmCellLocation();
		GsmCellLocation(android::os::Bundle &arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		void fillInNotifierBundle(android::os::Bundle arg0);
		jint getCid();
		jint getLac();
		jint getPsc();
		jint hashCode();
		void setLacAndCid(jint arg0, jint arg1);
		void setStateInvalid();
		jstring toString();
	};
} // namespace android::telephony::gsm

