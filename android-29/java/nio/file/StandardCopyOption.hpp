#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace java::nio::file
{
	class StandardCopyOption : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ATOMIC_MOVE();
		static QAndroidJniObject COPY_ATTRIBUTES();
		static QAndroidJniObject REPLACE_EXISTING();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StandardCopyOption(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		StandardCopyOption(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::nio::file

