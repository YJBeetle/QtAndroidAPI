#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace java::nio::file
{
	class AccessMode : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject EXECUTE();
		static QAndroidJniObject READ();
		static QAndroidJniObject WRITE();
		
		AccessMode(QAndroidJniObject obj);
		// Constructors
		AccessMode() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace java::nio::file

