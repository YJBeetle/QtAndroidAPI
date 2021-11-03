#pragma once

#include "../../JObject.hpp"
#include "./Exception.hpp"


namespace java::lang
{
	class InterruptedException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InterruptedException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		InterruptedException(QJniObject obj);
		
		// Constructors
		InterruptedException();
		InterruptedException(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

