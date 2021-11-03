#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::content
{
	class UriPermission : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jlong INVALID_TIME();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UriPermission(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UriPermission(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jlong getPersistedTime();
		android::net::Uri getUri();
		jboolean isReadPermission();
		jboolean isWritePermission();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

