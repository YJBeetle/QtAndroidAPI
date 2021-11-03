#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::view::translation
{
	class TranslationSpec;
}

namespace android::view::translation
{
	class TranslationCapability : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint STATE_AVAILABLE_TO_DOWNLOAD();
		static jint STATE_DOWNLOADING();
		static jint STATE_NOT_AVAILABLE();
		static jint STATE_ON_DEVICE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TranslationCapability(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TranslationCapability(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::view::translation::TranslationSpec getSourceSpec();
		jint getState();
		jint getSupportedTranslationFlags();
		android::view::translation::TranslationSpec getTargetSpec();
		jboolean isUiTranslationEnabled();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::translation

