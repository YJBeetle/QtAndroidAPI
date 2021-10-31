#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::database
{
	class SQLException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		SQLException(QJniObject obj);
		
		// Constructors
		SQLException();
		SQLException(jstring arg0);
		SQLException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::database

