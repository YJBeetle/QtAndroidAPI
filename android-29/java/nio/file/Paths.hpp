#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::net
{
	class URI;
}

namespace java::nio::file
{
	class Paths : public __JniBaseClass
	{
	public:
		// Fields
		
		Paths(QAndroidJniObject obj);
		// Constructors
		Paths() = default;
		
		// Methods
		static QAndroidJniObject get(java::net::URI arg0);
		static QAndroidJniObject get(jstring arg0, jarray arg1);
		static QAndroidJniObject get(const QString &arg0, jarray arg1);
	};
} // namespace java::nio::file

