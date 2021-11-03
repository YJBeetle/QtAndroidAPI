#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;
class JObject;
class JString;

namespace android::view::translation
{
	class TranslationRequestValue : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TranslationRequestValue(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TranslationRequestValue(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::view::translation::TranslationRequestValue forText(JString arg0);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getText() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::translation

