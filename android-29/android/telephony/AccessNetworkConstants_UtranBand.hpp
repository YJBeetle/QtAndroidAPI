#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telephony
{
	class AccessNetworkConstants_UtranBand : public __JniBaseClass
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
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessNetworkConstants_UtranBand(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AccessNetworkConstants_UtranBand(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

