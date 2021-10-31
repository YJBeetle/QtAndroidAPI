#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace java::security
{
	class CryptoPrimitive : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BLOCK_CIPHER();
		static QAndroidJniObject KEY_AGREEMENT();
		static QAndroidJniObject KEY_ENCAPSULATION();
		static QAndroidJniObject KEY_WRAP();
		static QAndroidJniObject MAC();
		static QAndroidJniObject MESSAGE_DIGEST();
		static QAndroidJniObject PUBLIC_KEY_ENCRYPTION();
		static QAndroidJniObject SECURE_RANDOM();
		static QAndroidJniObject SIGNATURE();
		static QAndroidJniObject STREAM_CIPHER();
		
		CryptoPrimitive(QAndroidJniObject obj);
		// Constructors
		CryptoPrimitive() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::security

