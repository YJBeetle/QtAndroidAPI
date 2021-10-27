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
		static QAndroidJniObject CREATOR();
		static jint PATTERN_ADVANCED_GLOB();
		static jint PATTERN_LITERAL();
		static jint PATTERN_PREFIX();
		static jint PATTERN_SIMPLE_GLOB();
		
		PatternMatcher(QAndroidJniObject obj);
		// Constructors
		PatternMatcher(android::os::Parcel &arg0);
		PatternMatcher(jstring &arg0, jint &arg1);
		PatternMatcher(const QString &arg0, jint &arg1);
		PatternMatcher() = default;
		
		// Methods
		jint describeContents();
		jstring getPath();
		jint getType();
		jboolean match(jstring arg0);
		jboolean match(const QString &arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

