#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app::admin
{
	class FactoryResetProtectionPolicy : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FactoryResetProtectionPolicy(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FactoryResetProtectionPolicy(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		__JniBaseClass getFactoryResetProtectionAccounts();
		jboolean isFactoryResetProtectionEnabled();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::admin

