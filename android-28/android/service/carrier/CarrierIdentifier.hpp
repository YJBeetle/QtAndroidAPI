#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::service::carrier
{
	class CarrierIdentifier : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CarrierIdentifier(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CarrierIdentifier(QAndroidJniObject obj);
		
		// Constructors
		CarrierIdentifier(jbyteArray arg0, jstring arg1, jstring arg2);
		CarrierIdentifier(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jstring arg5);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getGid1();
		jstring getGid2();
		jstring getImsi();
		jstring getMcc();
		jstring getMnc();
		jstring getSpn();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::carrier

