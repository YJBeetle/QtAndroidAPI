#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;
namespace java::util
{
	class Locale;
}

namespace android::speech::tts
{
	class Voice : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
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
		
		// QJniObject forward
		template<typename ...Ts> explicit Voice(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Voice(QJniObject obj);
		
		// Constructors
		Voice(JString arg0, java::util::Locale arg1, jint arg2, jint arg3, jboolean arg4, JObject arg5);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		JObject getFeatures();
		jint getLatency();
		java::util::Locale getLocale();
		JString getName();
		jint getQuality();
		jint hashCode();
		jboolean isNetworkConnectionRequired();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::speech::tts

