#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Enum.hpp"


namespace java::nio::file
{
	class StandardOpenOption : public java::lang::Enum
	{
	public:
		// Fields
		static java::nio::file::StandardOpenOption APPEND();
		static java::nio::file::StandardOpenOption CREATE();
		static java::nio::file::StandardOpenOption CREATE_NEW();
		static java::nio::file::StandardOpenOption DELETE_ON_CLOSE();
		static java::nio::file::StandardOpenOption DSYNC();
		static java::nio::file::StandardOpenOption READ();
		static java::nio::file::StandardOpenOption SPARSE();
		static java::nio::file::StandardOpenOption SYNC();
		static java::nio::file::StandardOpenOption TRUNCATE_EXISTING();
		static java::nio::file::StandardOpenOption WRITE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StandardOpenOption(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		StandardOpenOption(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::file::StandardOpenOption valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::nio::file

