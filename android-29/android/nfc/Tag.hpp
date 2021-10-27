#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::nfc
{
	class Tag : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		Tag(QAndroidJniObject obj);
		// Constructors
		Tag() = default;
		
		// Methods
		jint describeContents();
		jbyteArray getId();
		jarray getTechList();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::nfc

