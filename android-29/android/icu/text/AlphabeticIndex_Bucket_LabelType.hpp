#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class AlphabeticIndex_Bucket_LabelType : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject INFLOW();
		static QAndroidJniObject NORMAL();
		static QAndroidJniObject OVERFLOW();
		static QAndroidJniObject UNDERFLOW();
		
		AlphabeticIndex_Bucket_LabelType(QAndroidJniObject obj);
		// Constructors
		AlphabeticIndex_Bucket_LabelType() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::icu::text

