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
		
		// QJniObject forward
		template<typename ...Ts> explicit TranslationResponseValue(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TranslationResponseValue(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::view::translation::TranslationResponseValue forError();
		jint describeContents();
		jboolean equals(JObject arg0);
		android::os::Bundle getExtras();
		jint getStatusCode();
		JString getText();
		JString getTransliteration();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::translation

