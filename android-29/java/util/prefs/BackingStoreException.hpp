#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"


namespace java::util::prefs
{
	class BackingStoreException : public java::lang::Exception
	{
	public:
		// Fields
		
		BackingStoreException(QAndroidJniObject obj);
		// Constructors
		BackingStoreException(jstring &arg0);
		BackingStoreException(const QString &arg0);
		BackingStoreException(jthrowable &arg0);
		BackingStoreException() = default;
		
		// Methods
	};
} // namespace java::util::prefs

