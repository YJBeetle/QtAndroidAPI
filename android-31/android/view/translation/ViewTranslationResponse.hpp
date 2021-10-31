#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::view::autofill
{
	class AutofillId;
}
namespace android::view::translation
{
	class TranslationResponseValue;
}

namespace android::view::translation
{
	class ViewTranslationResponse : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ViewTranslationResponse(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ViewTranslationResponse(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		android::view::autofill::AutofillId getAutofillId();
		__JniBaseClass getKeys();
		android::view::translation::TranslationResponseValue getValue(jstring arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::translation

