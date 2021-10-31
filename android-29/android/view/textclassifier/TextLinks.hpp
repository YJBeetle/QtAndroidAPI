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

namespace android::view::textclassifier
{
	class TextLinks : public __JniBaseClass
	{
	public:
		// Fields
		static jint APPLY_STRATEGY_IGNORE();
		static jint APPLY_STRATEGY_REPLACE();
		static __JniBaseClass CREATOR();
		static jint STATUS_DIFFERENT_TEXT();
		static jint STATUS_LINKS_APPLIED();
		static jint STATUS_NO_LINKS_APPLIED();
		static jint STATUS_NO_LINKS_FOUND();
		static jint STATUS_UNSUPPORTED_CHARACTER();
		
		// QJniObject forward
		template<typename ...Ts> explicit TextLinks(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextLinks(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint apply(__JniBaseClass arg0, jint arg1, __JniBaseClass arg2);
		jint describeContents();
		android::os::Bundle getExtras();
		__JniBaseClass getLinks();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

