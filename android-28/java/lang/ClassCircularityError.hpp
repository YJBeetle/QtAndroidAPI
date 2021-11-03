#pragma once

#include "../../JObject.hpp"
#include "./Error.hpp"
#include "./LinkageError.hpp"


namespace java::lang
{
	class ClassCircularityError : public java::lang::LinkageError
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ClassCircularityError(const char *className, const char *sig, Ts...agv) : java::lang::LinkageError(className, sig, std::forward<Ts>(agv)...) {}
		ClassCircularityError(QAndroidJniObject obj);
		
		// Constructors
		ClassCircularityError();
		ClassCircularityError(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

