#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::hardware::display
{
	class HdrConversionMode : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint HDR_CONVERSION_FORCE();
		static jint HDR_CONVERSION_PASSTHROUGH();
		static jint HDR_CONVERSION_SYSTEM();
		static jint HDR_CONVERSION_UNSUPPORTED();
		
		// QJniObject forward
		template<typename ...Ts> explicit HdrConversionMode(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HdrConversionMode(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		HdrConversionMode(jint arg0);
		HdrConversionMode(jint arg0, jint arg1);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getConversionMode() const;
		jint getPreferredHdrOutputType() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::hardware::display

