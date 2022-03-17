#pragma once

#include "../../JObject.hpp"

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
	class Session2Command : public JObject
	{
	public:
		// Fields
		static jint COMMAND_CODE_CUSTOM();
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Session2Command(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Session2Command(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Session2Command(jint arg0);
		Session2Command(JString arg0, android::os::Bundle arg1);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getCommandCode() const;
		JString getCustomAction() const;
		android::os::Bundle getCustomExtras() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media

