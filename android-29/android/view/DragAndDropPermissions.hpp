#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view
{
	class DragAndDropPermissions : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		DragAndDropPermissions(QAndroidJniObject obj);
		// Constructors
		DragAndDropPermissions() = default;
		
		// Methods
		jint describeContents();
		void release();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

