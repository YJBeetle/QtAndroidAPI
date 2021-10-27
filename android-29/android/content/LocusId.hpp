#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::content
{
	class LocusId : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		LocusId(QAndroidJniObject obj);
		// Constructors
		LocusId(jstring &arg0);
		LocusId(const QString &arg0);
		LocusId() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getId();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

