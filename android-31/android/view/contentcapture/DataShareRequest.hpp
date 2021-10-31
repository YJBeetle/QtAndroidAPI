#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class LocusId;
}
namespace android::os
{
	class Parcel;
}

namespace android::view::contentcapture
{
	class DataShareRequest : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DataShareRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DataShareRequest(QAndroidJniObject obj);
		
		// Constructors
		DataShareRequest(android::content::LocusId arg0, jstring arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		android::content::LocusId getLocusId();
		jstring getMimeType();
		jstring getPackageName();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::contentcapture

