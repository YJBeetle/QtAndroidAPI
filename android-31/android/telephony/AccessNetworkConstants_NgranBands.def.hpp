#pragma once

#include "../../JObject.hpp"

namespace android::telephony
{
	class AccessNetworkConstants_NgranBands : public JObject
	{
	public:
		// Fields
		static jint BAND_1();
		static jint BAND_12();
		static jint BAND_14();
		static jint BAND_18();
		static jint BAND_2();
		static jint BAND_20();
		static jint BAND_25();
		static jint BAND_257();
		static jint BAND_258();
		static jint BAND_26();
		static jint BAND_260();
		static jint BAND_261();
		static jint BAND_28();
		static jint BAND_29();
		static jint BAND_3();
		static jint BAND_30();
		static jint BAND_34();
		static jint BAND_38();
		static jint BAND_39();
		static jint BAND_40();
		static jint BAND_41();
		static jint BAND_46();
		static jint BAND_48();
		static jint BAND_5();
		static jint BAND_50();
		static jint BAND_51();
		static jint BAND_53();
		static jint BAND_65();
		static jint BAND_66();
		static jint BAND_7();
		static jint BAND_70();
		static jint BAND_71();
		static jint BAND_74();
		static jint BAND_75();
		static jint BAND_76();
		static jint BAND_77();
		static jint BAND_78();
		static jint BAND_79();
		static jint BAND_8();
		static jint BAND_80();
		static jint BAND_81();
		static jint BAND_82();
		static jint BAND_83();
		static jint BAND_84();
		static jint BAND_86();
		static jint BAND_89();
		static jint BAND_90();
		static jint BAND_91();
		static jint BAND_92();
		static jint BAND_93();
		static jint BAND_94();
		static jint BAND_95();
		static jint BAND_96();
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessNetworkConstants_NgranBands(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessNetworkConstants_NgranBands(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

