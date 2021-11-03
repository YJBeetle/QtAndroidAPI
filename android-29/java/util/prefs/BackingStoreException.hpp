#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Exception.hpp"


namespace java::util::prefs
{
	class BackingStoreException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BackingStoreException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		BackingStoreException(QJniObject obj);
		
		// Constructors
		BackingStoreException(jstring arg0);
		BackingStoreException(jthrowable arg0);
		
		// Methods
	};
} // namespace java::util::prefs

