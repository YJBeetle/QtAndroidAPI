#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::os
{
	class RemoteCallbackList : public __JniBaseClass
	{
	public:
		// Fields
		
		RemoteCallbackList(QAndroidJniObject obj);
		// Constructors
		RemoteCallbackList();
		
		// Methods
		jint beginBroadcast();
		void finishBroadcast();
		jobject getBroadcastCookie(jint arg0);
		QAndroidJniObject getBroadcastItem(jint arg0);
		jobject getRegisteredCallbackCookie(jint arg0);
		jint getRegisteredCallbackCount();
		QAndroidJniObject getRegisteredCallbackItem(jint arg0);
		void kill();
		void onCallbackDied(__JniBaseClass arg0);
		void onCallbackDied(__JniBaseClass arg0, jobject arg1);
		jboolean _register(__JniBaseClass arg0);
		jboolean _register(__JniBaseClass arg0, jobject arg1);
		jboolean unregister(__JniBaseClass arg0);
	};
} // namespace android::os

