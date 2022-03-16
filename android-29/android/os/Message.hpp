#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Handler;
}
namespace android::os
{
	class Messenger;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::os
{
	class Message : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		jint arg1();
		jint arg2();
		JObject obj();
		android::os::Messenger replyTo();
		jint sendingUid();
		jint what();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Message(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Message(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Message();
		
		// Methods
		static android::os::Message obtain();
		static android::os::Message obtain(android::os::Handler arg0);
		static android::os::Message obtain(android::os::Message arg0);
		static android::os::Message obtain(android::os::Handler arg0, jint arg1);
		static android::os::Message obtain(android::os::Handler arg0, JObject arg1);
		static android::os::Message obtain(android::os::Handler arg0, jint arg1, JObject arg2);
		static android::os::Message obtain(android::os::Handler arg0, jint arg1, jint arg2, jint arg3);
		static android::os::Message obtain(android::os::Handler arg0, jint arg1, jint arg2, jint arg3, JObject arg4);
		void copyFrom(android::os::Message arg0) const;
		jint describeContents() const;
		JObject getCallback() const;
		android::os::Bundle getData() const;
		android::os::Handler getTarget() const;
		jlong getWhen() const;
		jboolean isAsynchronous() const;
		android::os::Bundle peekData() const;
		void recycle() const;
		void sendToTarget() const;
		void setAsynchronous(jboolean arg0) const;
		void setData(android::os::Bundle arg0) const;
		void setTarget(android::os::Handler arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::os

