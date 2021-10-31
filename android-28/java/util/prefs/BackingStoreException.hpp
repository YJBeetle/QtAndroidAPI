#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"


namespace java::util::prefs
{
	class BackingStoreException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BackingStoreException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		BackingStoreException(QAndroidJniObject obj);
		
		// Constructors
		BackingStoreException(jstring arg0);
		BackingStoreException(jthrowable arg0);
		
		// Methods
	};
} // namespace java::util::prefs

