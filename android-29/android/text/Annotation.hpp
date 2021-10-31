#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::text
{
	class Annotation : public __JniBaseClass
	{
	public:
		// Fields
		
		Annotation(QAndroidJniObject obj);
		// Constructors
		Annotation(android::os::Parcel arg0);
		Annotation(jstring arg0, jstring arg1);
		Annotation() = default;
		
		// Methods
		jint describeContents();
		jstring getKey();
		jint getSpanTypeId();
		jstring getValue();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text

