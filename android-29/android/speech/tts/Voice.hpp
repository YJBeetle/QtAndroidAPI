#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace java::util
{
	class Locale;
}

namespace android::speech::tts
{
	class Voice : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint LATENCY_HIGH();
		static jint LATENCY_LOW();
		static jint LATENCY_NORMAL();
		static jint LATENCY_VERY_HIGH();
		static jint LATENCY_VERY_LOW();
		static jint QUALITY_HIGH();
		static jint QUALITY_LOW();
		static jint QUALITY_NORMAL();
		static jint QUALITY_VERY_HIGH();
		static jint QUALITY_VERY_LOW();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Voice(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Voice(QAndroidJniObject obj);
		
		// Constructors
		Voice(jstring arg0, java::util::Locale arg1, jint arg2, jint arg3, jboolean arg4, __JniBaseClass arg5);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getFeatures();
		jint getLatency();
		QAndroidJniObject getLocale();
		jstring getName();
		jint getQuality();
		jint hashCode();
		jboolean isNetworkConnectionRequired();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::speech::tts

