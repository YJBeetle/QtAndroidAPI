#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony
{
	class RadioAccessSpecifier : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		RadioAccessSpecifier(QAndroidJniObject obj);
		// Constructors
		RadioAccessSpecifier(jint &arg0, jintArray &arg1, jintArray &arg2);
		RadioAccessSpecifier() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jintArray getBands();
		jintArray getChannels();
		jint getRadioAccessNetwork();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

