#pragma once

#include "../../JObject.hpp"
#include "./Error.hpp"
#include "./LinkageError.hpp"


namespace java::lang
{
	class NoClassDefFoundError : public java::lang::LinkageError
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NoClassDefFoundError(const char *className, const char *sig, Ts...agv) : java::lang::LinkageError(className, sig, std::forward<Ts>(agv)...) {}
		NoClassDefFoundError(QJniObject obj);
		
		// Constructors
		NoClassDefFoundError();
		NoClassDefFoundError(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

