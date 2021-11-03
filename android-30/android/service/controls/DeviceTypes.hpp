#pragma once

#include "../../../JObject.hpp"


namespace android::service::controls
{
	class DeviceTypes : public JObject
	{
	public:
		// Fields
		static jint TYPE_AC_HEATER();
		static jint TYPE_AC_UNIT();
		static jint TYPE_AIR_FRESHENER();
		static jint TYPE_AIR_PURIFIER();
		static jint TYPE_AWNING();
		static jint TYPE_BLINDS();
		static jint TYPE_CAMERA();
		static jint TYPE_CLOSET();
		static jint TYPE_COFFEE_MAKER();
		static jint TYPE_CURTAIN();
		static jint TYPE_DEHUMIDIFIER();
		static jint TYPE_DISHWASHER();
		static jint TYPE_DISPLAY();
		static jint TYPE_DOOR();
		static jint TYPE_DOORBELL();
		static jint TYPE_DRAWER();
		static jint TYPE_DRYER();
		static jint TYPE_FAN();
		static jint TYPE_GARAGE();
		static jint TYPE_GATE();
		static jint TYPE_GENERIC_ARM_DISARM();
		static jint TYPE_GENERIC_LOCK_UNLOCK();
		static jint TYPE_GENERIC_ON_OFF();
		static jint TYPE_GENERIC_OPEN_CLOSE();
		static jint TYPE_GENERIC_START_STOP();
		static jint TYPE_GENERIC_TEMP_SETTING();
		static jint TYPE_GENERIC_VIEWSTREAM();
		static jint TYPE_HEATER();
		static jint TYPE_HOOD();
		static jint TYPE_HUMIDIFIER();
		static jint TYPE_KETTLE();
		static jint TYPE_LIGHT();
		static jint TYPE_LOCK();
		static jint TYPE_MICROWAVE();
		static jint TYPE_MOP();
		static jint TYPE_MOWER();
		static jint TYPE_MULTICOOKER();
		static jint TYPE_OUTLET();
		static jint TYPE_PERGOLA();
		static jint TYPE_RADIATOR();
		static jint TYPE_REFRIGERATOR();
		static jint TYPE_REMOTE_CONTROL();
		static jint TYPE_ROUTINE();
		static jint TYPE_SECURITY_SYSTEM();
		static jint TYPE_SET_TOP();
		static jint TYPE_SHOWER();
		static jint TYPE_SHUTTER();
		static jint TYPE_SPRINKLER();
		static jint TYPE_STANDMIXER();
		static jint TYPE_STYLER();
		static jint TYPE_SWITCH();
		static jint TYPE_THERMOSTAT();
		static jint TYPE_TV();
		static jint TYPE_UNKNOWN();
		static jint TYPE_VACUUM();
		static jint TYPE_VALVE();
		static jint TYPE_WASHER();
		static jint TYPE_WATER_HEATER();
		static jint TYPE_WINDOW();
		
		// QJniObject forward
		template<typename ...Ts> explicit DeviceTypes(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DeviceTypes(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean validDeviceType(jint arg0);
	};
} // namespace android::service::controls

