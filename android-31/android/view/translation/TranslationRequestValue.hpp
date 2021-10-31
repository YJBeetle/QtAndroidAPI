#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::translation
{
	class TranslationRequestValue : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TranslationRequestValue(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TranslationRequestValue(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::view::translation::TranslationRequestValue forText(jstring arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getText();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::translation

