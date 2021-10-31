#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::os
{
	class Parcel;
}
namespace android::util
{
	class Size;
}
namespace android::view::inputmethod
{
	class InlineSuggestionInfo;
}

namespace android::view::inputmethod
{
	class InlineSuggestion : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit InlineSuggestion(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		InlineSuggestion(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		android::view::inputmethod::InlineSuggestionInfo getInfo();
		jint hashCode();
		void inflate(android::content::Context arg0, android::util::Size arg1, __JniBaseClass arg2, __JniBaseClass arg3);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

