#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

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

namespace android::telecom
{
	class InCallService : public android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_INTERFACE();
		
		InCallService(QAndroidJniObject obj);
		// Constructors
		InCallService();
		
		// Methods
		jboolean canAddCall();
		QAndroidJniObject getCallAudioState();
		QAndroidJniObject getCalls();
		QAndroidJniObject onBind(android::content::Intent arg0);
		void onBringToForeground(jboolean arg0);
		void onCallAdded(android::telecom::Call arg0);
		void onCallAudioStateChanged(android::telecom::CallAudioState arg0);
		void onCallRemoved(android::telecom::Call arg0);
		void onCanAddCallChanged(jboolean arg0);
		void onConnectionEvent(android::telecom::Call arg0, jstring arg1, android::os::Bundle arg2);
		void onConnectionEvent(android::telecom::Call arg0, const QString &arg1, android::os::Bundle arg2);
		void onSilenceRinger();
		jboolean onUnbind(android::content::Intent arg0);
		void requestBluetoothAudio(android::bluetooth::BluetoothDevice arg0);
		void setAudioRoute(jint arg0);
		void setMuted(jboolean arg0);
	};
} // namespace android::telecom

