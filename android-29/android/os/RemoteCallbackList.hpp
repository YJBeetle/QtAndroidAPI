#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::os
{
	class RemoteCallbackList : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoteCallbackList(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RemoteCallbackList(QJniObject obj);
		
		// Constructors
		RemoteCallbackList();
		
		// Methods
		jint beginBroadcast();
		void finishBroadcast();
		jobject getBroadcastCookie(jint arg0);
		__JniBaseClass getBroadcastItem(jint arg0);
		jobject getRegisteredCallbackCookie(jint arg0);
		jint getRegisteredCallbackCount();
		__JniBaseClass getRegisteredCallbackItem(jint arg0);
		void kill();
		void onCallbackDied(__JniBaseClass arg0);
		void onCallbackDied(__JniBaseClass arg0, jobject arg1);
		jboolean _register(__JniBaseClass arg0);
		jboolean _register(__JniBaseClass arg0, jobject arg1);
		jboolean unregister(__JniBaseClass arg0);
	};
} // namespace android::os

