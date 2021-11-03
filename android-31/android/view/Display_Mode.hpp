#pragma once

#include "../../JObject.hpp"

class JFloatArray;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Display_Mode(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Display_Mode(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		JFloatArray getAlternativeRefreshRates();
		jint getModeId();
		jint getPhysicalHeight();
		jint getPhysicalWidth();
		jfloat getRefreshRate();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

