#pragma once

#include "../../JObject.hpp"

class JObject;

namespace android::os
{
	class RemoteCallbackList : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RemoteCallbackList(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoteCallbackList(QAndroidJniObject obj);
		
		// Constructors
		RemoteCallbackList();
		
		// Methods
		jint beginBroadcast();
		void finishBroadcast();
		JObject getBroadcastCookie(jint arg0);
		JObject getBroadcastItem(jint arg0);
		JObject getRegisteredCallbackCookie(jint arg0);
		jint getRegisteredCallbackCount();
		JObject getRegisteredCallbackItem(jint arg0);
		void kill();
		void onCallbackDied(JObject arg0);
		void onCallbackDied(JObject arg0, JObject arg1);
		jboolean _register(JObject arg0);
		jboolean _register(JObject arg0, JObject arg1);
		jboolean unregister(JObject arg0);
	};
} // namespace android::os

