#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::database
{
	class StaleDataException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StaleDataException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		StaleDataException(QJniObject obj);
		
		// Constructors
		StaleDataException();
		StaleDataException(jstring arg0);
		
		// Methods
	};
} // namespace android::database

