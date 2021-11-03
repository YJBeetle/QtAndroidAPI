#pragma once

#include "../../JObject.hpp"

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
	class ResultReceiver : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ResultReceiver(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ResultReceiver(QAndroidJniObject obj);
		
		// Constructors
		ResultReceiver(android::os::Handler arg0);
		
		// Methods
		jint describeContents();
		void send(jint arg0, android::os::Bundle arg1);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

