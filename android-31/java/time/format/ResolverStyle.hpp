#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Enum.hpp"


namespace java::time::format
{
	class ResolverStyle : public java::lang::Enum
	{
	public:
		// Fields
		static java::time::format::ResolverStyle LENIENT();
		static java::time::format::ResolverStyle SMART();
		static java::time::format::ResolverStyle STRICT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ResolverStyle(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ResolverStyle(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::format::ResolverStyle valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::time::format

