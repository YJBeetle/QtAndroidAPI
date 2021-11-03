#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class SocketKeepalive_Callback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SocketKeepalive_Callback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SocketKeepalive_Callback(QJniObject obj);
		
		// Constructors
		SocketKeepalive_Callback();
		
		// Methods
		void onDataReceived() const;
		void onError(jint arg0) const;
		void onStarted() const;
		void onStopped() const;
	};
} // namespace android::net

