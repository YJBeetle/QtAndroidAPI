#pragma once

#include "../../__JniBaseClass.hpp"
#include "./BaseBundle.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::os
{
	class PersistableBundle : public android::os::BaseBundle
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static QAndroidJniObject EMPTY();
		
		PersistableBundle(QAndroidJniObject obj);
		// Constructors
		PersistableBundle();
		PersistableBundle(android::os::PersistableBundle &arg0);
		PersistableBundle(jint arg0);
		
		// Methods
		jobject clone();
		QAndroidJniObject deepCopy();
		jint describeContents();
		QAndroidJniObject getPersistableBundle(jstring arg0);
		void putPersistableBundle(jstring arg0, android::os::PersistableBundle arg1);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

