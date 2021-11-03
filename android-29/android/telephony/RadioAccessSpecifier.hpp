#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony
{
	class RadioAccessSpecifier : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RadioAccessSpecifier(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RadioAccessSpecifier(QAndroidJniObject obj);
		
		// Constructors
		RadioAccessSpecifier(jint arg0, jintArray arg1, jintArray arg2);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jintArray getBands();
		jintArray getChannels();
		jint getRadioAccessNetwork();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

