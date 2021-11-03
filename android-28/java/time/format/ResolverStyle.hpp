#pragma once

#include "../../lang/Enum.hpp"

class JArray;
class JString;

namespace java::time::format
{
	class ResolverStyle : public java::lang::Enum
	{
	public:
		// Fields
		static java::time::format::ResolverStyle LENIENT();
		static java::time::format::ResolverStyle SMART();
		static java::time::format::ResolverStyle STRICT();
		
		// QJniObject forward
		template<typename ...Ts> explicit ResolverStyle(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ResolverStyle(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::format::ResolverStyle valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::time::format

