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
		static QAndroidJniObject CREATOR();
		jint arg1();
		jint arg2();
		jobject obj();
		QAndroidJniObject replyTo();
		jint sendingUid();
		jint what();
		
		Message(QAndroidJniObject obj);
		// Constructors
		Message();
		
		// Methods
		static QAndroidJniObject obtain();
		static QAndroidJniObject obtain(android::os::Handler arg0);
		static QAndroidJniObject obtain(android::os::Message arg0);
		static QAndroidJniObject obtain(android::os::Handler arg0, jint arg1);
		static QAndroidJniObject obtain(android::os::Handler arg0, __JniBaseClass arg1);
		static QAndroidJniObject obtain(android::os::Handler arg0, jint arg1, jobject arg2);
		static QAndroidJniObject obtain(android::os::Handler arg0, jint arg1, jint arg2, jint arg3);
		static QAndroidJniObject obtain(android::os::Handler arg0, jint arg1, jint arg2, jint arg3, jobject arg4);
		void copyFrom(android::os::Message arg0);
		jint describeContents();
		QAndroidJniObject getCallback();
		QAndroidJniObject getData();
		QAndroidJniObject getTarget();
		jlong getWhen();
		jboolean isAsynchronous();
		QAndroidJniObject peekData();
		void recycle();
		void sendToTarget();
		void setAsynchronous(jboolean arg0);
		void setData(android::os::Bundle arg0);
		void setTarget(android::os::Handler arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

