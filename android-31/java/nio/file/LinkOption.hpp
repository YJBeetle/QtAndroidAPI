#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Enum.hpp"


namespace java::nio::file
{
	class LinkOption : public java::lang::Enum
	{
	public:
		// Fields
		static java::nio::file::LinkOption NOFOLLOW_LINKS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LinkOption(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		LinkOption(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::file::LinkOption valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::nio::file

