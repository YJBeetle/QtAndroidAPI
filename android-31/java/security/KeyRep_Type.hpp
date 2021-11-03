#pragma once

#include "../../JObject.hpp"
#include "../lang/Enum.hpp"


namespace java::security
{
	class KeyRep_Type : public java::lang::Enum
	{
	public:
		// Fields
		static java::security::KeyRep_Type PRIVATE();
		static java::security::KeyRep_Type PUBLIC();
		static java::security::KeyRep_Type SECRET();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyRep_Type(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		KeyRep_Type(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::security::KeyRep_Type valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::security

