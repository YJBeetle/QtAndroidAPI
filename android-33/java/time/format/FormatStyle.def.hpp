#pragma once

#include "../../lang/Enum.def.hpp"

class JArray;
class JString;

namespace java::time::format
{
	class FormatStyle : public java::lang::Enum
	{
	public:
		// Fields
		static java::time::format::FormatStyle FULL();
		static java::time::format::FormatStyle LONG();
		static java::time::format::FormatStyle MEDIUM();
		static java::time::format::FormatStyle SHORT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FormatStyle(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		FormatStyle(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static java::time::format::FormatStyle valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::time::format

