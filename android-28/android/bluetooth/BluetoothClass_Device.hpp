#pragma once

#include "../../JObject.hpp"

namespace android::bluetooth
{
	class BluetoothClass_Device : public JObject
	{
	public:
		// Fields
		static jint AUDIO_VIDEO_CAMCORDER();
		static jint AUDIO_VIDEO_CAR_AUDIO();
		static jint AUDIO_VIDEO_HANDSFREE();
		static jint AUDIO_VIDEO_HEADPHONES();
		static jint AUDIO_VIDEO_HIFI_AUDIO();
		static jint AUDIO_VIDEO_LOUDSPEAKER();
		static jint AUDIO_VIDEO_MICROPHONE();
		static jint AUDIO_VIDEO_PORTABLE_AUDIO();
		static jint AUDIO_VIDEO_SET_TOP_BOX();
		static jint AUDIO_VIDEO_UNCATEGORIZED();
		static jint AUDIO_VIDEO_VCR();
		static jint AUDIO_VIDEO_VIDEO_CAMERA();
		static jint AUDIO_VIDEO_VIDEO_CONFERENCING();
		static jint AUDIO_VIDEO_VIDEO_DISPLAY_AND_LOUDSPEAKER();
		static jint AUDIO_VIDEO_VIDEO_GAMING_TOY();
		static jint AUDIO_VIDEO_VIDEO_MONITOR();
		static jint AUDIO_VIDEO_WEARABLE_HEADSET();
		static jint COMPUTER_DESKTOP();
		static jint COMPUTER_HANDHELD_PC_PDA();
		static jint COMPUTER_LAPTOP();
		static jint COMPUTER_PALM_SIZE_PC_PDA();
		static jint COMPUTER_SERVER();
		static jint COMPUTER_UNCATEGORIZED();
		static jint COMPUTER_WEARABLE();
		static jint HEALTH_BLOOD_PRESSURE();
		static jint HEALTH_DATA_DISPLAY();
		static jint HEALTH_GLUCOSE();
		static jint HEALTH_PULSE_OXIMETER();
		static jint HEALTH_PULSE_RATE();
		static jint HEALTH_THERMOMETER();
		static jint HEALTH_UNCATEGORIZED();
		static jint HEALTH_WEIGHING();
		static jint PHONE_CELLULAR();
		static jint PHONE_CORDLESS();
		static jint PHONE_ISDN();
		static jint PHONE_MODEM_OR_GATEWAY();
		static jint PHONE_SMART();
		static jint PHONE_UNCATEGORIZED();
		static jint TOY_CONTROLLER();
		static jint TOY_DOLL_ACTION_FIGURE();
		static jint TOY_GAME();
		static jint TOY_ROBOT();
		static jint TOY_UNCATEGORIZED();
		static jint TOY_VEHICLE();
		static jint WEARABLE_GLASSES();
		static jint WEARABLE_HELMET();
		static jint WEARABLE_JACKET();
		static jint WEARABLE_PAGER();
		static jint WEARABLE_UNCATEGORIZED();
		static jint WEARABLE_WRIST_WATCH();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothClass_Device(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothClass_Device(QAndroidJniObject obj);
		
		// Constructors
		BluetoothClass_Device();
		
		// Methods
	};
} // namespace android::bluetooth

