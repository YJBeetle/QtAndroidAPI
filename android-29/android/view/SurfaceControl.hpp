#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view
{
	class SurfaceControl : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		SurfaceControl(QAndroidJniObject obj);
		// Constructors
		SurfaceControl() = default;
		
		// Methods
		jint describeContents();
		jboolean isValid();
		void readFromParcel(android::os::Parcel arg0);
		void release();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

