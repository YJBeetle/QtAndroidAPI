#pragma once

#include "../../JObject.hpp"

namespace android::telephony
{
	class AccessNetworkConstants_UtranBand : public JObject
	{
	public:
		// Fields
		static jint BAND_1();
		static jint BAND_10();
		static jint BAND_11();
		static jint BAND_12();
		static jint BAND_13();
		static jint BAND_14();
		static jint BAND_19();
		static jint BAND_2();
		static jint BAND_20();
		static jint BAND_21();
		static jint BAND_22();
		static jint BAND_25();
		static jint BAND_26();
		static jint BAND_3();
		static jint BAND_4();
		static jint BAND_5();
		static jint BAND_6();
		static jint BAND_7();
		static jint BAND_8();
		static jint BAND_9();
		static jint BAND_A();
		static jint BAND_B();
		static jint BAND_C();
		static jint BAND_D();
		static jint BAND_E();
		static jint BAND_F();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessNetworkConstants_UtranBand(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessNetworkConstants_UtranBand(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

