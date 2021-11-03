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
class JString;

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
		jint describeContents() const;
		android::view::translation::TranslationSpec getSourceSpec() const;
		jint getState() const;
		jint getSupportedTranslationFlags() const;
		android::view::translation::TranslationSpec getTargetSpec() const;
		jboolean isUiTranslationEnabled() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::translation

