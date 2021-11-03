#pragma once

#include "../../JObject.hpp"


namespace android::util
{
	class DisplayMetrics : public JObject
	{
	public:
		// Fields
		static jint DENSITY_140();
		static jint DENSITY_180();
		static jint DENSITY_200();
		static jint DENSITY_220();
		static jint DENSITY_260();
		static jint DENSITY_280();
		static jint DENSITY_300();
		static jint DENSITY_340();
		static jint DENSITY_360();
		static jint DENSITY_400();
		static jint DENSITY_420();
		static jint DENSITY_440();
		static jint DENSITY_450();
		static jint DENSITY_560();
		static jint DENSITY_600();
		static jint DENSITY_DEFAULT();
		static jint DENSITY_DEVICE_STABLE();
		static jint DENSITY_HIGH();
		static jint DENSITY_LOW();
		static jint DENSITY_MEDIUM();
		static jint DENSITY_TV();
		static jint DENSITY_XHIGH();
		static jint DENSITY_XXHIGH();
		static jint DENSITY_XXXHIGH();
		jfloat density();
		jint densityDpi();
		jint heightPixels();
		jfloat scaledDensity();
		jint widthPixels();
		jfloat xdpi();
		jfloat ydpi();
		
		// QJniObject forward
		template<typename ...Ts> explicit DisplayMetrics(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DisplayMetrics(QJniObject obj);
		
		// Constructors
		DisplayMetrics();
		
		// Methods
		jboolean equals(android::util::DisplayMetrics arg0);
		jboolean equals(jobject arg0);
		jint hashCode();
		void setTo(android::util::DisplayMetrics arg0);
		void setToDefaults();
		jstring toString();
	};
} // namespace android::util

