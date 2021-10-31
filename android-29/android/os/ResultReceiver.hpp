#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Handler;
}
namespace android::os
{
	class Parcel;
}

namespace android::os
{
	class ResultReceiver : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		ResultReceiver(QAndroidJniObject obj);
		// Constructors
		ResultReceiver(android::os::Handler arg0);
		ResultReceiver() = default;
		
		// Methods
		jint describeContents();
		void send(jint arg0, android::os::Bundle arg1);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

