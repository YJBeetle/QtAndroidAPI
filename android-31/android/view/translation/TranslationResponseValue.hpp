#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JObject;
class JString;

namespace android::view::translation
{
	class TranslationResponseValue : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString EXTRA_DEFINITIONS();
		static jint STATUS_ERROR();
		static jint STATUS_SUCCESS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TranslationResponseValue(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TranslationResponseValue(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::view::translation::TranslationResponseValue forError();
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::os::Bundle getExtras() const;
		jint getStatusCode() const;
		JString getText() const;
		JString getTransliteration() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::translation

