#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace java::text
{
	class Normalizer_Form : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject NFC();
		static QAndroidJniObject NFD();
		static QAndroidJniObject NFKC();
		static QAndroidJniObject NFKD();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Normalizer_Form(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Normalizer_Form(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::text

