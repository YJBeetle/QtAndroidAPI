#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace java::nio::file
{
	class LinkOption : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject NOFOLLOW_LINKS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LinkOption(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		LinkOption(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::nio::file

