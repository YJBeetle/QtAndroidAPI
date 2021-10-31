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
	class ContentCaptureCondition : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint FLAG_IS_REGEX();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContentCaptureCondition(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContentCaptureCondition(QJniObject obj);
		
		// Constructors
		ContentCaptureCondition(android::content::LocusId arg0, jint arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getFlags();
		android::content::LocusId getLocusId();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::contentcapture

