#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::os
{
	class Parcel;
}

namespace android::content
{
	class AttributionSource : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AttributionSource(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AttributionSource(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean checkCallingUid();
		jint describeContents();
		void enforceCallingUid();
		jboolean equals(jobject arg0);
		jstring getAttributionTag();
		android::content::AttributionSource getNext();
		jstring getPackageName();
		jint getUid();
		jint hashCode();
		jboolean isTrusted(android::content::Context arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content
