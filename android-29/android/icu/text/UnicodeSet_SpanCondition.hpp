#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class UnicodeSet_SpanCondition : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CONDITION_COUNT();
		static QAndroidJniObject CONTAINED();
		static QAndroidJniObject NOT_CONTAINED();
		static QAndroidJniObject SIMPLE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnicodeSet_SpanCondition(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		UnicodeSet_SpanCondition(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

