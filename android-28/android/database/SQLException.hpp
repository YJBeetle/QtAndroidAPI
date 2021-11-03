#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::database
{
	class SQLException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		SQLException(QAndroidJniObject obj);
		
		// Constructors
		SQLException();
		SQLException(jstring arg0);
		SQLException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::database

