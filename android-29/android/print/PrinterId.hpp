#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::print
{
	class PrinterId : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		PrinterId(QAndroidJniObject obj);
		// Constructors
		PrinterId() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getLocalId();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::print

