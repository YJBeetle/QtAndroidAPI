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
		Session2Token(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Session2Token(android::content::Context arg0, android::content::ComponentName arg1);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::os::Bundle getExtras() const;
		JString getPackageName() const;
		JString getServiceName() const;
		jint getType() const;
		jint getUid() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media

