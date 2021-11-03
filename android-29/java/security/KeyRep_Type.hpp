#pragma once

#include "../lang/Enum.hpp"

class JArray;
class JString;

namespace java::security
{
	class KeyRep_Type : public java::lang::Enum
	{
	public:
		// Fields
		static java::security::KeyRep_Type PRIVATE();
		static java::security::KeyRep_Type PUBLIC();
		static java::security::KeyRep_Type SECRET();
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyRep_Type(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		KeyRep_Type(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::security::KeyRep_Type valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::security

