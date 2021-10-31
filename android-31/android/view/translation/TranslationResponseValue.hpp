#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::view::translation
{
	class TranslationResponseValue : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jstring EXTRA_DEFINITIONS();
		static jint STATUS_ERROR();
		static jint STATUS_SUCCESS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TranslationResponseValue(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TranslationResponseValue(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::view::translation::TranslationResponseValue forError();
		jint describeContents();
		jboolean equals(jobject arg0);
		android::os::Bundle getExtras();
		jint getStatusCode();
		jstring getText();
		jstring getTransliteration();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::translation

