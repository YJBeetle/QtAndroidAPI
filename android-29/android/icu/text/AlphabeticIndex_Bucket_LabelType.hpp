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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlphabeticIndex_Bucket_LabelType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		AlphabeticIndex_Bucket_LabelType(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

