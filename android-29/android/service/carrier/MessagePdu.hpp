#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::service::carrier
{
	class MessagePdu : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		MessagePdu(QAndroidJniObject obj);
		// Constructors
		MessagePdu(__JniBaseClass &arg0);
		MessagePdu() = default;
		
		// Methods
		jint describeContents();
		QAndroidJniObject getPdus();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::carrier

