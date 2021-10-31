#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::text
{
	class DateIntervalInfo_PatternInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DateIntervalInfo_PatternInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DateIntervalInfo_PatternInfo(QJniObject obj);
		
		// Constructors
		DateIntervalInfo_PatternInfo(jstring arg0, jstring arg1, jboolean arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		jboolean firstDateInPtnIsLaterDate();
		jstring getFirstPart();
		jstring getSecondPart();
		jint hashCode();
		jstring toString();
	};
} // namespace android::icu::text

