#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony
{
	class CellIdentity : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		CellIdentity(QAndroidJniObject obj);
		// Constructors
		CellIdentity() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getOperatorAlphaLong();
		jstring getOperatorAlphaShort();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

