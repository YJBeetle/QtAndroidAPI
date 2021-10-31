#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::os
{
	class Message : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		jint arg1();
		jint arg2();
		jobject obj();
		android::os::Messenger replyTo();
		jint sendingUid();
		jint what();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Message(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Message(QAndroidJniObject obj);
		
		// Constructors
		Message();
		
		// Methods
		static android::os::Message obtain();
		static android::os::Message obtain(android::os::Handler arg0);
		static android::os::Message obtain(android::os::Message arg0);
		static android::os::Message obtain(android::os::Handler arg0, jint arg1);
		static android::os::Message obtain(android::os::Handler arg0, __JniBaseClass arg1);
		static android::os::Message obtain(android::os::Handler arg0, jint arg1, jobject arg2);
		static android::os::Message obtain(android::os::Handler arg0, jint arg1, jint arg2, jint arg3);
		static android::os::Message obtain(android::os::Handler arg0, jint arg1, jint arg2, jint arg3, jobject arg4);
		void copyFrom(android::os::Message arg0);
		jint describeContents();
		__JniBaseClass getCallback();
		android::os::Bundle getData();
		android::os::Handler getTarget();
		jlong getWhen();
		jboolean isAsynchronous();
		android::os::Bundle peekData();
		void recycle();
		void sendToTarget();
		void setAsynchronous(jboolean arg0);
		void setData(android::os::Bundle arg0);
		void setTarget(android::os::Handler arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

