#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::media
{
	class Session2Token : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint TYPE_SESSION();
		static jint TYPE_SESSION_SERVICE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Session2Token(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Session2Token(QJniObject obj);
		
		// Constructors
		Session2Token(android::content::Context arg0, android::content::ComponentName arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		android::os::Bundle getExtras();
		jstring getPackageName();
		jstring getServiceName();
		jint getType();
		jint getUid();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media

