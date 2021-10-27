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
		
		UnicodeSet_SpanCondition(QAndroidJniObject obj);
		// Constructors
		UnicodeSet_SpanCondition() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::icu::text

