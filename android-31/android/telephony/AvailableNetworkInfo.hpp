#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony
{
	class AvailableNetworkInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint PRIORITY_HIGH();
		static jint PRIORITY_LOW();
		static jint PRIORITY_MED();
		
		// QJniObject forward
		template<typename ...Ts> explicit AvailableNetworkInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AvailableNetworkInfo(QJniObject obj);
		
		// Constructors
		AvailableNetworkInfo(jint arg0, jint arg1, __JniBaseClass arg2, __JniBaseClass arg3);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		__JniBaseClass getBands();
		__JniBaseClass getMccMncs();
		jint getPriority();
		jint getSubId();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

