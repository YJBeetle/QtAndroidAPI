#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class LocaleList;
}
namespace android::os
{
	class Parcel;
}

namespace android::view::inputmethod
{
	class InlineSuggestionsRequest : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint SUGGESTION_COUNT_UNLIMITED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InlineSuggestionsRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		InlineSuggestionsRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		android::os::Bundle getExtras();
		jstring getHostPackageName();
		__JniBaseClass getInlinePresentationSpecs();
		jint getMaxSuggestionCount();
		android::os::LocaleList getSupportedLocales();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

