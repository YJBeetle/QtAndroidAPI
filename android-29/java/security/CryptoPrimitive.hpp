#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace java::security
{
	class CryptoPrimitive : public java::lang::Enum
	{
	public:
		// Fields
		static java::security::CryptoPrimitive BLOCK_CIPHER();
		static java::security::CryptoPrimitive KEY_AGREEMENT();
		static java::security::CryptoPrimitive KEY_ENCAPSULATION();
		static java::security::CryptoPrimitive KEY_WRAP();
		static java::security::CryptoPrimitive MAC();
		static java::security::CryptoPrimitive MESSAGE_DIGEST();
		static java::security::CryptoPrimitive PUBLIC_KEY_ENCRYPTION();
		static java::security::CryptoPrimitive SECURE_RANDOM();
		static java::security::CryptoPrimitive SIGNATURE();
		static java::security::CryptoPrimitive STREAM_CIPHER();
		
		// QJniObject forward
		template<typename ...Ts> explicit CryptoPrimitive(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		CryptoPrimitive(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::security::CryptoPrimitive valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::security

