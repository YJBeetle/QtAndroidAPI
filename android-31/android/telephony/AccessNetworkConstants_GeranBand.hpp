#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telephony
{
	class AccessNetworkConstants_GeranBand : public __JniBaseClass
	{
	public:
		// Fields
		static jint BAND_450();
		static jint BAND_480();
		static jint BAND_710();
		static jint BAND_750();
		static jint BAND_850();
		static jint BAND_DCS1800();
		static jint BAND_E900();
		static jint BAND_ER900();
		static jint BAND_P900();
		static jint BAND_PCS1900();
		static jint BAND_R900();
		static jint BAND_T380();
		static jint BAND_T410();
		static jint BAND_T810();
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessNetworkConstants_GeranBand(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AccessNetworkConstants_GeranBand(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

