#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::accounts
{
	class Account : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		jstring name();
		jstring type();
		
		Account(QAndroidJniObject obj);
		// Constructors
		Account(android::os::Parcel arg0);
		Account(jstring arg0, jstring arg1);
		Account() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::accounts

