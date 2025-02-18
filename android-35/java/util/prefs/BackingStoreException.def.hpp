#pragma once

#include "../../lang/Exception.def.hpp"

class JString;
class JThrowable;

namespace java::util::prefs
{
	class BackingStoreException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BackingStoreException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		BackingStoreException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		BackingStoreException(JString arg0);
		BackingStoreException(JThrowable arg0);
		
		// Methods
	};
} // namespace java::util::prefs

