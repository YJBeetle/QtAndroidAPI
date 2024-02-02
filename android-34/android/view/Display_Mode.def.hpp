#pragma once

#include "../../JObject.hpp"

class JFloatArray;
class JIntArray;
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::view
{
	class Display_Mode : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit Display_Mode(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Display_Mode(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JFloatArray getAlternativeRefreshRates() const;
		jint getModeId() const;
		jint getPhysicalHeight() const;
		jint getPhysicalWidth() const;
		jfloat getRefreshRate() const;
		JIntArray getSupportedHdrTypes() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view

