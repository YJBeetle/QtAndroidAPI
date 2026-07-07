#pragma once

#include "../../JObject.hpp"

class JObject;

namespace android::os
{
	class RemoteCallbackList : public JObject
	{
	public:
		// Fields
		static jint FROZEN_CALLEE_POLICY_DROP();
		static jint FROZEN_CALLEE_POLICY_ENQUEUE_ALL();
		static jint FROZEN_CALLEE_POLICY_ENQUEUE_MOST_RECENT();
		static jint FROZEN_CALLEE_POLICY_UNSET();
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoteCallbackList(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoteCallbackList(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RemoteCallbackList();
		
		// Methods
		jint beginBroadcast() const;
		void broadcast(JObject arg0) const;
		void finishBroadcast() const;
		JObject getBroadcastCookie(jint arg0) const;
		JObject getBroadcastItem(jint arg0) const;
		JObject getExecutor() const;
		jint getFrozenCalleePolicy() const;
		jint getMaxQueueSize() const;
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

