#pragma once

#include "../../JObject.hpp"

namespace android::telephony
{
	class AccessNetworkConstants_EutranBand : public JObject
	{
	public:
		// Fields
		static jint BAND_1();
		static jint BAND_10();
		static jint BAND_11();
		static jint BAND_12();
		static jint BAND_13();
		static jint BAND_14();
		static jint BAND_17();
		static jint BAND_18();
		static jint BAND_19();
		static jint BAND_2();
		static jint BAND_20();
		static jint BAND_21();
		static jint BAND_22();
		static jint BAND_23();
		static jint BAND_24();
		static jint BAND_25();
		static jint BAND_26();
		static jint BAND_27();
		static jint BAND_28();
		static jint BAND_3();
		static jint BAND_30();
		static jint BAND_31();
		static jint BAND_33();
		static jint BAND_34();
		static jint BAND_35();
		static jint BAND_36();
		static jint BAND_37();
		static jint BAND_38();
		static jint BAND_39();
		static jint BAND_4();
		static jint BAND_40();
		static jint BAND_41();
		static jint BAND_42();
		static jint BAND_43();
		static jint BAND_44();
		static jint BAND_45();
		static jint BAND_46();
		static jint BAND_47();
		static jint BAND_48();
		static jint BAND_5();
		static jint BAND_6();
		static jint BAND_65();
		static jint BAND_66();
		static jint BAND_68();
		static jint BAND_7();
		static jint BAND_70();
		static jint BAND_8();
		static jint BAND_9();
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessNetworkConstants_EutranBand(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessNetworkConstants_EutranBand(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

