#pragma once

#include "../../JObject.hpp"

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
class JObject;
class JString;

namespace android::media
{
	class Session2Token : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint TYPE_SESSION();
		static jint TYPE_SESSION_SERVICE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Session2Token(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Session2Token(QAndroidJniObject obj);
		
		// Constructors
		Session2Token(android::content::Context arg0, android::content::ComponentName arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		android::os::Bundle getExtras();
		JString getPackageName();
		JString getServiceName();
		jint getType();
		jint getUid();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media

