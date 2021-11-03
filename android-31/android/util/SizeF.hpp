#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::util
{
	class SizeF : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SizeF(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SizeF(QAndroidJniObject obj);
		
		// Constructors
		SizeF(jfloat arg0, jfloat arg1);
		
		// Methods
		static android::util::SizeF parseSizeF(JString arg0);
		jint describeContents();
		jboolean equals(JObject arg0);
		jfloat getHeight();
		jfloat getWidth();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::util

