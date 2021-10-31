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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CryptoPrimitive(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		CryptoPrimitive(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::security

