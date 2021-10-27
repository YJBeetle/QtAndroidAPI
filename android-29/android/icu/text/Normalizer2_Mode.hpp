#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class Normalizer2_Mode : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject COMPOSE();
		static QAndroidJniObject COMPOSE_CONTIGUOUS();
		static QAndroidJniObject DECOMPOSE();
		static QAndroidJniObject FCD();
		
		Normalizer2_Mode(QAndroidJniObject obj);
		// Constructors
		Normalizer2_Mode() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::icu::text

