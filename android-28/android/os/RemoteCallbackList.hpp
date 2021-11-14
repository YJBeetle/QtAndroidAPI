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
		jint beginBroadcast() const;
		void finishBroadcast() const;
		JObject getBroadcastCookie(jint arg0) const;
		JObject getBroadcastItem(jint arg0) const;
		JObject getRegisteredCallbackCookie(jint arg0) const;
		jint getRegisteredCallbackCount() const;
		JObject getRegisteredCallbackItem(jint arg0) const;
		void kill() const;
		void onCallbackDied(JObject arg0) const;
		void onCallbackDied(JObject arg0, JObject arg1) const;
		jboolean register_(JObject arg0) const;
		jboolean register_(JObject arg0, JObject arg1) const;
		jboolean unregister(JObject arg0) const;
	};
} // namespace android::os

