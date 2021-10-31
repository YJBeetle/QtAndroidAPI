#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony::data
{
	class NetworkSlicingConfig : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkSlicingConfig(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NetworkSlicingConfig(QAndroidJniObject obj);
		
		// Constructors
		NetworkSlicingConfig();
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		__JniBaseClass getSliceInfo();
		__JniBaseClass getUrspRules();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony::data

