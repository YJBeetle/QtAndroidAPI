#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::textservice
{
	class TextInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextInfo(QAndroidJniObject obj);
		
		// Constructors
		TextInfo(android::os::Parcel arg0);
		TextInfo(jstring arg0);
		TextInfo(jstring arg0, jint arg1, jint arg2);
		TextInfo(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		
		// Methods
		jint describeContents();
		jstring getCharSequence();
		jint getCookie();
		jint getSequence();
		jstring getText();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textservice

