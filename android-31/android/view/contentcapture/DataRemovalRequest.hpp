#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::contentcapture
{
	class DataRemovalRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_IS_PREFIX();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DataRemovalRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DataRemovalRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		JObject getLocusIdRequests();
		jstring getPackageName();
		jboolean isForEverything();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::contentcapture

