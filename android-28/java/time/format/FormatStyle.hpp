#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


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
		
		// QJniObject forward
		template<typename ...Ts> explicit FormatStyle(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		FormatStyle(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::format::FormatStyle valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::time::format

