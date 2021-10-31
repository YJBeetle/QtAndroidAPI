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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Normalizer2_Mode(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Normalizer2_Mode(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

