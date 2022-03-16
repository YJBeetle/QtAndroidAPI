#pragma once

#include "../../JObject.hpp"

class JArray;
class JString;

namespace android::os
{
	class Build : public JObject
	{
	public:
		// Fields
		static JString BOARD();
		static JString BOOTLOADER();
		static JString BRAND();
		static JString CPU_ABI();
		static JString CPU_ABI2();
		static JString DEVICE();
		static JString DISPLAY();
		static JString FINGERPRINT();
		static JString HARDWARE();
		static JString HOST();
		static JString ID();
		static JString MANUFACTURER();
		static JString MODEL();
		static JString PRODUCT();
		static JString RADIO();
		static JString SERIAL();
		static JArray SUPPORTED_32_BIT_ABIS();
		static JArray SUPPORTED_64_BIT_ABIS();
		static JArray SUPPORTED_ABIS();
		static JString TAGS();
		static jlong TIME();
		static JString TYPE();
		static JString UNKNOWN();
		static JString USER();
		
		// QJniObject forward
		template<typename ...Ts> explicit Build(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Build(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Build();
		
		// Methods
		static JString getRadioVersion();
		static JString getSerial();
	};
} // namespace android::os

