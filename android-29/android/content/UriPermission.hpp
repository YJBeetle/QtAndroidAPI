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
		
		// QJniObject forward
		template<typename ...Ts> explicit UriPermission(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UriPermission(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jlong getPersistedTime() const;
		android::net::Uri getUri() const;
		jboolean isReadPermission() const;
		jboolean isWritePermission() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content

