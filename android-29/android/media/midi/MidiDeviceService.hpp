#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace android::content
{
	class Intent;
}
namespace android::media::midi
{
	class MidiDeviceInfo;
}
namespace android::media::midi
{
	class MidiDeviceStatus;
}

namespace android::media::midi
{
	class MidiDeviceService : public android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_INTERFACE();
		
		MidiDeviceService(QAndroidJniObject obj);
		// Constructors
		MidiDeviceService();
		
		// Methods
		QAndroidJniObject getDeviceInfo();
		jarray getOutputPortReceivers();
		QAndroidJniObject onBind(android::content::Intent arg0);
		void onClose();
		void onCreate();
		void onDeviceStatusChanged(android::media::midi::MidiDeviceStatus arg0);
		jarray onGetInputPortReceivers();
	};
} // namespace android::media::midi

