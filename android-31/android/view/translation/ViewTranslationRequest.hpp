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
	class TranslationRequestValue;
}

namespace android::view::translation
{
	class ViewTranslationRequest : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jstring ID_TEXT();
		
		// QJniObject forward
		template<typename ...Ts> explicit ViewTranslationRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ViewTranslationRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		android::view::autofill::AutofillId getAutofillId();
		__JniBaseClass getKeys();
		android::view::translation::TranslationRequestValue getValue(jstring arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::translation

