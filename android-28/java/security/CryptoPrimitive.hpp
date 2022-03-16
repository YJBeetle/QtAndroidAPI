#pragma once

#include "../lang/Enum.hpp"

class JArray;
class JString;

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CryptoPrimitive(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		CryptoPrimitive(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static java::security::CryptoPrimitive valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::security

