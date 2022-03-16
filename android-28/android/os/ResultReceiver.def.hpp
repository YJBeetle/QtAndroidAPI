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
		
		// QJniObject forward
		template<typename ...Ts> explicit ResultReceiver(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ResultReceiver(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ResultReceiver(android::os::Handler arg0);
		
		// Methods
		jint describeContents() const;
		void send(jint arg0, android::os::Bundle arg1) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::os

