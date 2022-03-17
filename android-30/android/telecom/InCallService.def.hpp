#pragma once

#include "../app/Service.def.hpp"

namespace android::bluetooth
{
	class BluetoothDevice;
}
namespace android::content
{
	class Intent;
}
namespace android::os
{
	class Bundle;
}
namespace android::telecom
{
	class Call;
}
namespace android::telecom
{
	class CallAudioState;
}
class JString;

namespace android::telecom
{
	class InCallService : public android::app::Service
	{
	public:
		// Fields
		static JString SERVICE_INTERFACE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InCallService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		InCallService(QAndroidJniObject obj) : android::app::Service(obj) {}
		
		// Constructors
		InCallService();
		
		// Methods
		jboolean canAddCall() const;
		android::telecom::CallAudioState getCallAudioState() const;
		JObject getCalls() const;
		JObject onBind(android::content::Intent arg0) const;
		void onBringToForeground(jboolean arg0) const;
		void onCallAdded(android::telecom::Call arg0) const;
		void onCallAudioStateChanged(android::telecom::CallAudioState arg0) const;
		void onCallRemoved(android::telecom::Call arg0) const;
		void onCanAddCallChanged(jboolean arg0) const;
		void onConnectionEvent(android::telecom::Call arg0, JString arg1, android::os::Bundle arg2) const;
		void onSilenceRinger() const;
		jboolean onUnbind(android::content::Intent arg0) const;
		void requestBluetoothAudio(android::bluetooth::BluetoothDevice arg0) const;
		void setAudioRoute(jint arg0) const;
		void setMuted(jboolean arg0) const;
	};
} // namespace android::telecom

