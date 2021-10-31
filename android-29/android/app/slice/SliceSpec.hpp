#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app::slice
{
	class SliceSpec : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SliceSpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SliceSpec(QAndroidJniObject obj);
		
		// Constructors
		SliceSpec(jstring arg0, jint arg1);
		
		// Methods
		jboolean canRender(android::app::slice::SliceSpec arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getRevision();
		jstring getType();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::slice

