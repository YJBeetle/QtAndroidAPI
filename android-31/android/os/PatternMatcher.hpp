#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::os
{
	class PatternMatcher : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint PATTERN_ADVANCED_GLOB();
		static jint PATTERN_LITERAL();
		static jint PATTERN_PREFIX();
		static jint PATTERN_SIMPLE_GLOB();
		static jint PATTERN_SUFFIX();
		
		// QJniObject forward
		template<typename ...Ts> explicit PatternMatcher(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PatternMatcher(QJniObject obj);
		
		// Constructors
		PatternMatcher(android::os::Parcel arg0);
		PatternMatcher(jstring arg0, jint arg1);
		
		// Methods
		jint describeContents();
		jstring getPath();
		jint getType();
		jboolean match(jstring arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

