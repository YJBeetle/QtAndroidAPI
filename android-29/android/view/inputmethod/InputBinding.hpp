#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::inputmethod
{
	class InputBinding : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		InputBinding(QAndroidJniObject obj);
		// Constructors
		InputBinding(__JniBaseClass arg0, android::view::inputmethod::InputBinding &arg1);
		InputBinding(__JniBaseClass arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		InputBinding() = default;
		
		// Methods
		jint describeContents();
		QAndroidJniObject getConnection();
		QAndroidJniObject getConnectionToken();
		jint getPid();
		jint getUid();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

