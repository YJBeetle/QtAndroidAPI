#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Enum.hpp"


namespace java::nio::file
{
	class FileVisitOption : public java::lang::Enum
	{
	public:
		// Fields
		static java::nio::file::FileVisitOption FOLLOW_LINKS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileVisitOption(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		FileVisitOption(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::file::FileVisitOption valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::nio::file

