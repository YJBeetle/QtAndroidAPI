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
		
		Normalizer_Form(QAndroidJniObject obj);
		// Constructors
		Normalizer_Form() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::text

